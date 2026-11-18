# Student Record Management System

## Overview

The **Student Record Management System** is a mini project developed using the C programming language. It manages student information using a **Singly Linked List** and provides operations such as adding, deleting, modifying, displaying, and sorting student records.

The application uses dynamic memory allocation to create and manage records at runtime and file handling to store student information permanently.

## Features

- **Add Student:** Add new student records with automatically assigned roll numbers.
- **Delete Student:** Delete records using roll number or student name.
- **Display Records:** View all student records in a tabular format.
- **Modify Records:** Update student details using roll number, name, or percentage.
- **Save Records:** Store student information in a binary file (`student.dat`).
- **Load Records:** Automatically retrieve previously saved records when the application starts.
- **Sort Records:** Sort student records alphabetically by name or by percentage.
- **Exit Options:** Save and exit or exit without saving.

## Technologies Used

- **Programming Language:** C
- **Data Structure:** Singly Linked List
- **Memory Management:** Dynamic Memory Allocation (`malloc`, `free`)
- **File Handling:** Binary File Operations (`fopen`, `fread`, `fwrite`, `fclose`)
- **String Handling:** `strcmp`, `strcpy`, `snprintf`
- **Compiler:** GCC

## Project Structure

```text
Student-Record-Management-System/
│
├── student.c       # Main function and menu
├── student.h       # Structure definitions and function prototypes
├── stud_add.c      # Add student records
├── stud_del.c      # Delete student records
├── stud_show.c     # Display student records
├── stud_mod.c      # Modify student records
├── stud_save.c     # Save and load student records
├── stud_sort.c     # Sort student records
├── student.dat     # Binary data file (generated at runtime)
└── README.md
```

## Application Menu

```text
**** STUDENT RECORD MENU ****

A/a : Add New Record
D/d : Delete a Record
S/s : Show the List
M/m : Modify a Record
V/v : Save
T/t : Sort the List
E/e : Exit

Enter Your Choice:
```

## Compilation and Execution

### 1. Clone the Repository

```bash
git clone <repository-url>
```

### 2. Navigate to the Project Directory

```bash
cd Student-Record-Management-System
```

### 3. Compile the Source Files

```bash
gcc student.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c stud_sort.c -o student
```

### 4. Run the Application

**Linux:**
```bash
./student
```

**Windows:**
```bash
student.exe
```

## Concepts Implemented

This project helped me understand and implement the following C programming concepts:

1. Structures and Pointers
2. Singly Linked List Operations
3. Dynamic Memory Allocation
4. Insertion and Deletion of Nodes
5. Searching and Sorting Techniques
6. File Handling and Data Persistence
7. Modular Programming using Multiple Source Files
8. String Manipulation
9. Function Declaration and Definition

## Learning Outcomes

- Gained practical experience in implementing linked lists.
- Improved understanding of pointers and dynamic memory allocation.
- Learned how to organize a C project into multiple source files.
- Implemented persistent data storage using binary file operations.
- Improved problem-solving and debugging skills.

## Future Enhancements

- Add input validation and improved error handling.
- Implement search functionality with more filtering options.
- Add sorting in descending order.
- Introduce a graphical user interface.
- Add student attendance and academic performance tracking.

## Author

**Prudhvi Edurup**

- GitHub: [PRUDHVI684](https://github.com/PRUDHVI684)

---

*Developed as a C Programming Mini Project to practice Data Structures, Pointers, Dynamic Memory Allocation, and File Handling.*
