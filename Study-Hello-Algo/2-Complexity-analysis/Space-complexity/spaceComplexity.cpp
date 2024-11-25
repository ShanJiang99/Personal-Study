#include <iostream>


/*****************************************************************/
/* Structures */
struct Node {
    int val;
    Node *next;
    Node(int x) : val(x), next(nullptr) {}
};

/* Functions */
int func() {
    // Perform certain operations...
    return 0;
}

int algorithm(int n) {          // input data
    const int a = 0;            // temporary data (constant)
    int b = 0;                  // temporary data (variable)
    Node* node = new Node(0);   // temporary data (object)
    int c = func();             // stack frame space (call function)
    return a + b + c;           // output data
}
/*****************************************************************/