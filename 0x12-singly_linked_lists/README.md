# 0x12. C - Singly linked lists

## What is a linked list in C
 In C, a linked list is a data structure used for organizing and storing data in a linear order. Unlike arrays, which are contiguous blocks of memory, linked lists consist of nodes where each node contains data and a reference (or link) to the next node in the sequence. The last node typically points to a null reference, indicating the end of the list.

The basic building block of a linked list is a structure (or a class in other programming languages) called a "node." A node contains two fields:

Data Field:

This field stores the actual data or value associated with the node.
Next Pointer/Link:
This field contains a reference (usually a pointer in C) to the next node in the sequence. The last node's next field typically points to NULL, indicating the end of the list.

## When and why using linked lists vs arrays

Use linked lists when:

You need a dynamic data structure with frequent insertions and deletions.
Memory requirements are uncertain, and you want to avoid pre-allocating a fixed-size block.
Use arrays when:

Random access to elements is a common operation.
Memory efficiency is critical, and there's a fixed and known size.
In many cases, the choice between linked lists and arrays depends on the specific characteristics of the problem you're solving and the trade-offs that align with your performance and memory requirements.


# TASK

## Note: THE BELOW TASKS HAVE ADDITIONAL REQUIREMENT SPECIFIC TO EACH TASK AND ARE NOT LISTED HERE

## Mandatory
- 0. Print list: Write a function that prints all the elements of a list_t list.
- 1. List length: Write a function that returns the number of elements in a linked list_t list.
- 2. Add node: Write a function that adds a new node at the beginning of a list_t list.
- 3. Add node at the end: Write a function that adds a new node at the end of a list_t list.
- 4. Free list: Write a function that frees a list_t list.
- 5. 

## Advanced
- 5. The Hare and the Tortoise: Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
- 6. Real programmers can write assembly code in any language: Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
