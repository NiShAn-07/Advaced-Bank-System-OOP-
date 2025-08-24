Bank Management System (C++ OOP Project)

This project is a console-based Bank Management System developed in C++ using Object-Oriented Programming (OOP) principles. The system simulates real-world banking operations and provides a simple yet effective way to manage clients, users, and transactions. All data is stored persistently in a .txt file, ensuring that records are maintained even after the program is closed.

Key Features

Login & User Authentication

Secure login screen with username and password.

Different users can log in and access the system.

Main Menu Operations

Show Client List – Displays all existing bank clients with details.

Add New Client – Registers a new client and saves the data in the file.

Delete Client – Removes a client record permanently.

Update Client Info – Edits client details such as name, account number, and balance.

Find Client – Searches for a specific client quickly.

Transactions – Supports deposit, withdrawal, and balance inquiries.

Manage Users – Allows administrators to manage system users.

Login Register – Keeps a record of login sessions.

Currency Exchange – Provides currency exchange functionality.

Logout – Exits the system securely.

Data Storage

Client and user information is stored in a text file (.txt) using a structured format.

Data is loaded from the file at runtime and saved back after any updates (Add, Edit, Delete).

Object-Oriented Design

Classes are designed with encapsulation (private data, public methods).

Inheritance and abstraction are applied where necessary.

Static methods are used for file handling and object-to-line conversion.

Enum types are used for system modes (e.g., Empty, Update).

Technical Details

Language: C++

Paradigm: Object-Oriented Programming

Persistence: File-based storage (Clients.txt, Users.txt, etc.)

UI: Console-based (text menu navigation)

Security: Basic login with password protection
