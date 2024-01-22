# Pointer Statement Problem and Solution in C++

## Definition

A pointer is a variable that stores the memory address of an object. Pointers are used extensively in both C and C++ for three main purposes:

- To allocate new objects on the heap,
- To pass functions to other functions
- To iterate over elements in arrays or other data structures.

## Description

This repository contains a C++ problem related to pointer statements and its corresponding solution. The purpose is to provide a clear illustration of how to use pointer statements to solve a specific programming challenge.

## Syntax of pointer

```cpp

    int a;
    int *ptr = &a; // Store address of a
    
```
## Syntax of dereference operator

```cpp

    int a;
    int *ptr = &a; 
    cout<<*ptr; // Print Value of a
    
```
### Code (C++)

### Input: Write a program to calculate sum of 2 numbers by using pointers.
```cpp

    #include<iostream>
    using namespace std;
    int main(){
        int num1,num2;
        cout<<"Enter first number : ";
        cin>>num1;
        cout<<"Enter second number : ";
        cin>>num2;
        int *n1 = &num1;
        int *n2 = &num2;
        cout<<"Sum will be : "<<(*n1 + *n2);
    }

```
### Output: Enter first number : 5
###         Enter first number : 6
###         Sum will be : 11


