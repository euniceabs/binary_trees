Binary Trees

# C - Binary Trees

## Project Overview

This project is a partnership effort that focuses on exploring binary trees as data structures in C. We delve into the details, advantages, and disadvantages of using binary trees. Our project covers tree classification, tree traversal methods, and the implementation of various types of binary trees, including binary, binary search, AVL, and Max Binary Heap trees.

## Project Structure


### binary_tree_print.c

`binary_tree_print.c` is a C function specifically designed for printing binary trees in a visually appealing manner. It helps visualize the structure of binary trees, making it easier to understand and debug them.

### binary_trees.h

`binary_trees.h` is a header file that serves as the central hub for our project. It contains essential definitions and function prototypes for all the custom types and functions created for this project. This header file acts as the bridge between our binary tree implementation and other parts of the program.

## Data Structures

In our project, we use the following custom data structures and types for binary trees, all of which are included in our header file (`binary_trees.h`):

### Basic Binary Tree
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;


Binary Search Tree

typedef struct binary_tree_s bst_t;

AVL Tree

typedef struct binary_tree_s avl_t;

Max Binary Heap

typedef struct binary_tree_s heap_t;

Usage
To use this project, you can follow these steps:

1. Clone the project repository to your local machine.
2. Explore the tests folder to understand how the binary tree functions are tested.
3. Utilize the binary_tree_print.c function to visualize the structure of binary trees.
4. Include the binary_trees.h header file in your C programs to access the binary tree data structures and functions defined in this project.
