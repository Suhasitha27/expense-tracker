#include "sqlite3.h"
#include <iostream>
#include <string>
#include <cstdio> // for sprintf

using namespace std;

static int callback(void* NotUsed, int argc, char** argv, char** azColName){
    for(int i = 0; i < argc; i++)
        cout << azColName[i] << ": " << (argv[i] ? argv[i] : "NULL") << endl;
    cout << "--------------------------\n";
    return 0;
}

int main(){
    sqlite3* db;
    char* errMsg = 0;

    // Open/Create Database
    int exit = sqlite3_open("expenses.db", &db);
    if(exit){
        cerr << "Error opening DB: " << sqlite3_errmsg(db) << endl;
        return 1;
    }

    // Create table
    string sql = "CREATE TABLE IF NOT EXISTS expenses(" \
                 "id INTEGER PRIMARY KEY AUTOINCREMENT," \
                 "date TEXT NOT NULL," \
                 "category TEXT NOT NULL," \
                 "amount REAL NOT NULL);";
    sqlite3_exec(db, sql.c_str(), NULL, 0, &errMsg);

    // Input data
    string date, category;
    float amount;
    cout << "Enter date (YYYY-MM-DD): ";
    cin >> date;
    cout << "Enter category: ";
    cin >> category;
    cout << "Enter amount: ";
    cin >> amount;

    // Format amount (avoid to_string errors)
    char amtStr[20];
    sprintf(amtStr, "%.2f", amount);

    // Insert record
    string insertSQL = "INSERT INTO expenses (date, category, amount) VALUES('" + date + "', '" + category + "', " + amtStr + ");";
    sqlite3_exec(db, insertSQL.c_str(), NULL, 0, &errMsg);

    // Show all records
    cout << "\nYour Expenses:\n";
    sqlite3_exec(db, "SELECT * FROM expenses;", callback, 0, &errMsg);

    sqlite3_close(db);
    return 0;
}
