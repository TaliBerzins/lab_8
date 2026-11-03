/**
 * @file Lab8_username.cpp
 * @author Tali Berzins
 * @date 2026-11-02
 * @brief Demonstrates stack vs heap memory and the use of pointers and references.
 */



 /**
 * @brief Entry point for the memory demonstration.
 * @return 0 to indicate success.
 */
int main() {
    int stackInt = 42; // Stack memory allocation
    int* heapInt = new int(24); // Heap memory allocation
    int *ptrToStack = &stackInt; // Pointer to stack variable
    int &refToStack = stackInt; // Reference to stack variable


}

