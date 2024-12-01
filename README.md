# Advent of Code Solutions 🎄

Welcome to my **Advent of Code** repository! This project contains my solutions for the annual Advent of Code programming challenge. Advent of Code is a fun and challenging way to practice problem-solving and algorithmic thinking during the holiday season.

---

## 🌟 What is Advent of Code?

[Advent of Code](https://adventofcode.com/) is an annual programming challenge that runs from December 1st to December 25th. Each day, participants solve a unique puzzle, often involving:
- Parsing input data.
- Implementing algorithms.

Every puzzle is divided into two parts:
1. Solve the first problem to unlock the second.
2. Each part earns a **star**. Collect stars to complete your Advent calendar and save Christmas!

---

## 🗂 Project Structure

```plaintext
.
├── dayXX/                # Solutions for Day XX
│   ├── input.txt         # Puzzle input for Day XX
│   ├── utils.h           # Header file 
│   ├── utils.cpp         # Utility functions for solutions
│   ├── main.cpp          # Solution written in C++
│   ├── README.md         # Description of the challenge
└── README.md             # General project overview (this file)

````

---

## 🛠 Technologies Used

- **Languages**: My solutions are implemented in **C++**
- **Tools**: Visual Studio Code as IDE

---

## 🚀 How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/gorreluc/adventofcode2024.git
   cd adventofcode2024
   `````
2. Navigate to the folder of the desired day (e.g., day01):
    ````bash
    cd day01
    ````

3. Compile and execute the solution file:
    ````bash
    g++ -std=c++17 -o day01 main.cpp utils.cpp
    ./day01
    ````