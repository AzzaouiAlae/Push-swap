# Push-swap 1337  
42 Network School Project

## Overview  
The Push-swap project is designed to sort a list of numbers using two stacks: **Stack A** and **Stack B**. The program accepts numbers as command-line arguments, fills the stacks accordingly, and performs sorting operations. If any invalid input or duplicate numbers are detected, the program prints an error message and exits with status code 255.

## Input Validation  
The program checks for and rejects the following invalid inputs:
- **Empty strings:** e.g., `"   "`
- **Non-numeric values:** e.g., `" 1a "`
- **Duplicate numbers:** e.g., `"1 2 3 1"`
- **Misformatted entries:** e.g., `"1 "`, `"  "`

## Sorting Algorithms  
The project implements several basic sorting algorithms, including:  
- Bubble Sort  
- Selection Sort  
- Insertion Sort  
- Gnome Sort  
- Cocktail Shaker Sort  

## Hybrid Sorting Techniques  
To optimize the sorting process, these basic algorithms are combined to form more efficient hybrid methods, such as:  
- **Insertion-Select Sort**  
- **Insertion-Select Quick Sort**  

Building on these ideas, an innovative algorithm—**Insertion-Select, Quick, longest common subsequence Sort**—was developed. This method optimizes the process by preserving already sorted segments with zero additional moves. 
Ultimately, the algorithm that results in the **fewest moves** is chosen for the final sort. 
Preliminary tests have even shown that **Bubble Sort** can outperform others under certain conditions.

## Conclusion  
This project demonstrates the exploration of various sorting techniques and their combinations to achieve efficient number sorting using two stacks. Emphasis is placed on robust input validation and algorithm optimization to ensure the most effective sorting strategy is employed.
