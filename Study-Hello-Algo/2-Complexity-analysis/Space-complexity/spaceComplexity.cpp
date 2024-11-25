#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>


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

/*****************************************************************/
void expAlgorithm(int n) {
    int a = 0;               // O(1)
    std::vector<int> b(10000);    // O(1)
    if (n > 10)
        std::vector<int> nums(n); // O(n)
}
/*****************************************************************/

/*****************************************************************/
int func() {
    // Perform certain operations
    return 0;
}
/* Cycle O(1) */
void loop(int n) {
    for (int i = 0; i < n; i++) {
        func();
    }
}
/* Recursion O(n) */
void recur(int n) {
    if (n == 1) return;
    return recur(n - 1);
}
/*****************************************************************/

/*****************************************************************/
/* Function */
int func() {
    // Perform some operations
    return 0;
}

/* Constant complexity */
void constant(int n) {
    // Constants, variables, objects occupy O(1) space
    const int a = 0;
    int b = 0;
    std::vector<int> nums(10000);
    ListNode node(0);
    // Variables in a loop occupy O(1) space
    for (int i = 0; i < n; i++) {
        int c = 0;
    }
    // Functions in a loop occupy O(1) space
    for (int i = 0; i < n; i++) {
        func();
    }
}

/* Linear complexity */
void linear(int n) {
    // Array of length n occupies O(n) space
    std::vector<int> nums(n);
    // A list of length n occupies O(n) space
    std::vector<ListNode> nodes;
    for (int i = 0; i < n; i++) {
        nodes.push_back(ListNode(i));
    }
    // A hash table of length n occupies O(n) space
    std::unordered_map<int, std::string> map;
    for (int i = 0; i < n; i++) {
        map[i] = std::to_string(i);
    }
}

/* Linear complexity (recursive implementation) */
void linearRecur(int n) {
    std::cout << "Recursion n = " << n << std::endl;
    if (n == 1)
        return;
    linearRecur(n - 1);
}

/* Quadratic complexity */
void quadratic(int n) {
    // A two-dimensional list occupies O(n^2) space
    std::vector<std::vector<int>> numMatrix;
    for (int i = 0; i < n; i++) {
        std::vector<int> tmp;
        for (int j = 0; j < n; j++) {
            tmp.push_back(0);
        }
        numMatrix.push_back(tmp);
    }
}

/* Quadratic complexity (recursive implementation) */
int quadraticRecur(int n) {
    if (n <= 0)
        return 0;
    std::vector<int> nums(n);
    std::cout << "Recursive n = " << n << ", length of nums = " << nums.size() << std::endl;
    return quadraticRecur(n - 1);
}

/* Exponential complexity (building a full binary tree) */
TreeNode *buildTree(int n) {
    if (n == 0)
        return nullptr;
    TreeNode *root = new TreeNode(0);
    root->left = buildTree(n - 1);
    root->right = buildTree(n - 1);
    return root;
}
/*****************************************************************/