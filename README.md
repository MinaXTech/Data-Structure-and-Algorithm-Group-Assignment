## Data Structure and Algorithm - Group Assignment

A console-based Data Structure implementation developed in C++ for Data Structure and Algorithm (DSA) course as a group assignment at Wachemo University, Department of Software Engineering.

## 📌 Overview

This assignment demonstrates the implementation of Circular Linked Lists in C++. The project covers both Circular Singly Linked List and Circular Doubly Linked List operations. Each operation was implemented and tested to ensure correct functionality.

The system provides functionality for:

· Creating nodes
· Inserting nodes at the end
· Inserting nodes at the front
· Inserting nodes to the left of a specific value
· Inserting nodes to the right of a specific value (Doubly only)
· Displaying nodes in forward order
· Displaying nodes in backward order (Doubly only)
· Deleting nodes from the front (Singly only)

## ✨ Features

1. Create the following node(7,3,8,1 and 33) in circular doubly linked list.
2. Adding node to the end in circular single linked list.
3. Adding node to the front in circular doubly linked list.
4. Adding node to the left of a specific value in circular doubly linked list.
5. Display a nodes in doubly circular linked list in forward and backward manner.
6. Adding node to the right of a specific value in circular double linked list.

## 🏗️ System Design

The system was designed using standard data structure concepts:

· Node Structure: Each node contains data, next pointer, and prev pointer (for doubly)
· Circular Connection: Last node points back to head
· Memory Management: Dynamic memory allocation using new and delete

Data Structures Used

Circular Doubly Linked List

struct Node {
    int data;
    Node* next;
    Node* prev;
};
Circular Singly Linked List

struct Node {
    int data;
    Node* next;
};

## 🛠️ Technology Stack

Component                  Technology
Programming Language          C++
Compiler                     MinGW
IDE                        Code::Blocks
Version Control            Git & GitHub
Operating System             Windows

## 📂 Project Structure

Data-Structure-and-Algorithm-Group-Assignment/
├── README.md
├── LICENSE
├── .gitignore
├── main.cpp
├── docs/
│   ├── Data-Structure-and-Algorithm-Course-Group-Assigned-Tasks.txt
│   └── Group-Assigned-Tasks.txt
└── images/screenshts
    ├── code-sample-one.png
    ├── code-sample-two.png
    ├── task-one-output.png
    └── task-two-output.png

## ⚙️ Getting Started

Prerequisites

· C++ compiler (g++ recommended)
· Git (optional)

Setup

1. Clone the repository:

git clone https://github.com/MinaXTech/Data-Structure-and-Algorithm-Group-Assignment.git
cd Data-Structure-and-Algorithm-Group-Assignment
1. Open the .cpp files in your preferred IDE.
2. Build and run the application.

Compile Using G++

Circular Doubly Linked List

g++ -o doubly circular_doubly.cpp
./doubly
Circular Singly Linked List

g++ -o singly circular_singly.cpp
./singly

## 📸 images

### Task One Output

screenshots/task-one-output.png

### Task Two Output

images/task-two-output.png

### Code Sample One

images/code-sample-one.png

### Code Sample Two

images/code-sample-two.png

## 👥 Group Members

No. Full Name           
1   Minase Mengesha
2   Natnael Andualem
3   Naol Garomsa
4   Natanim Chombe
5   Amen Yehualashet

Department of Software Engineering, College of Engineering and Technology, Wachemo University

## 🎓 Academic Project

This project demonstrates the practical application of concepts learned in:

· Data Structure and Algorithm (DSA)
· C++ Programming
· Linked List Implementation
· Memory Management
· Pointer Manipulation

## 📚 References

· Course Group Assigned Tasks
· Group Assigned Tasks

## 📜 License

This project is licensed under the MIT License — see the LICENSE file for details.

## 🙏 Acknowledgments

We would like to thank our DSA Instructor for providing us with this assignment and for teaching us the concepts of data structures and algorithms. Special thanks to all group members for their dedication and teamwork.

"Together we achieve more!" 🚀
