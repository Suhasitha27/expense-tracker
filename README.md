# 💸 Personal Expense Tracker

The **Personal Expense Tracker** is a command-line C++ project integrated with SQLite to help users record and review their day-to-day expenses. It demonstrates database usage in C++ while reinforcing core DSA and DBMS concepts.

---

## 🎯 Objective

- Track expenses by **date, category, and amount**.
- Demonstrate **DBMS** concepts using SQLite in C++.
- Reinforce **file handling**, **dynamic SQL**, and **command-line based design**.
- Encourage best practices using simple, readable code and SQL integration.

---

## 🚀 How to Run the Project

🔁 **Step 1: Clone or Download**

```
cd C:\Users\Suhasitha
git clone https://github.com/your-username/expense-tracker.git
cd expense-tracker
```

🛠️ **Step 2: Add SQLite Files**

Ensure the folder contains:
- `main.cpp`
- `sqlite3.c`
- `sqlite3.h`

▶️ **Step 3: Compile the Code**

```
g++ -x c++ main.cpp -x c sqlite3.c -o tracker.exe
```

▶️ **Step 4: Run the Executable**

```
tracker.exe
```

📄 You’ll be prompted to enter:
- Date (YYYY-MM-DD)
- Category (e.g., Food, Travel)
- Amount (e.g., 250)

💾 Your data is saved in `expenses.db`.

---

## 🛠️ Built With

- **Programming Language**: C++
- **Database**: SQLite (Amalgamation files)
- **IDE**: Notepad (Manual compile via Command Prompt)
- **Compiler**: g++ (MinGW / TDM-GCC)
- **Version Control**: Git and GitHub

---

## 👨‍💻 Concepts Used

- **C++ DSA**: Strings, input/output, formatting
- **DBMS**: Table creation, data insertion, query execution
- **SQL**: `CREATE`, `INSERT`, `SELECT`
- **CLI Interaction**: Clean input-output loop using standard streams
- **File Handling**: SQLite .db file as persistent storage

---

## 📊 Results

- Expense entries are **stored permanently** in an `.sqlite` database.
- Database can be viewed via:
  - `sqlite3` command line tool
  - GUI like **DB Browser for SQLite**
- Project runs successfully on all basic Windows systems.

---

## 📌 Example Usage

```
Enter date (YYYY-MM-DD): 2025-07-14
Enter category: transport
Enter amount: 150

Your Expenses:
id: 1
date: 2025-07-14
category: transport
amount: 150.0
--------------------------
```

---

## 🌱 Future Scope

- Add features: **delete**, **update**, **filter by date/category**
- Generate **monthly summaries**
- Export to CSV
- Add **password protection** or user-based login
- Port to a GUI using Qt or JavaFX

---

## 📝 License

This project is licensed under the [MIT License](LICENSE).

---