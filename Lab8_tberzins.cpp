/**
 * @file Lab8_username.cpp
 * @author Tali Berzins
 * @date 2026-11-02
 * @brief Demonstrates stack vs heap memory and the use of pointers and references.
 */

#include <iostream>
#include <string>

 using namespace std;



 /**
 * @brief Entry point for the memory demonstration.
 * @return 0 to indicate success.
 */
int main() {
    int stackInt = 42; // Stack memory allocation
    int *heapInt = new int(24); // Heap memory allocation
    int *ptrToStack = &stackInt; // Pointer to stack variable
    int &refToStack = stackInt; // Reference to stack variable

    cout << "Stack Variable (stackInt): " << endl << "Value: " << stackInt << endl << "Address: " << &stackInt << endl << endl;
    cout << "Heap Variable (heapInt): " << endl << "Value: " << *heapInt << endl << "Address: " << heapInt << endl << endl;
    cout << "Pointer to Stack Variable (ptrToStack): " << endl << "Value: " << *ptrToStack << endl << "Address: " << ptrToStack << endl << endl;
    cout << "Reference to Stack Variable (refToStack): " << endl << "Value: " << refToStack << endl << "Address: " << &refToStack << endl << endl;



}

