#include <iostream>
#include <vector>

/* Linked list node structure */
// Define the linked list node structure
struct ListNode {
    int val;         // Node value, the value of the node
    ListNode *next;  // Pointer to the next node, the pointer that points to the next node
    ListNode(int x) : val(x), next(nullptr) {}  // Constructor, used to initialize the value of the node and the pointer to the next node (initialized to nullptr)
};

// Function to release the memory of the linked list. The head pointer of the linked list is passed by reference so that modifications inside the function can affect the outside.
void freeMemoryLinkedList(ListNode*& head) {
    ListNode* current = head;
    // Traverse the linked list until the current node is nullptr.
    while (current!= nullptr) {
        ListNode* nextTemp = current->next;
        // Delete the current node.
        delete current;
        current = nextTemp;
    }
    // Set the head pointer of the linked list to nullptr, indicating that the linked list is empty.
    head = nullptr;
}

// Stack class implemented based on the linked list
class LinkedListStack {
private:
    ListNode *stackTop; // Stack top pointer, points to the head node of the linked list, that is, the node where the stack top element is located.
    int stkSize;       // Size of the stack, records the number of elements in the stack.

public:
    // Constructor, used to initialize the stack top pointer to nullptr and the stack size to 0.
    LinkedListStack() {
        stackTop = nullptr;
        stkSize = 0;
    }

    // Destructor, automatically called when the object's life cycle ends, used to release the memory occupied by the linked list stack.
    ~LinkedListStack() {
        freeMemoryLinkedList(stackTop);
    }

    // Get the size of the stack.
    int size() {
        return stkSize;
    }

    // Determine whether the stack is empty.
    bool isEmpty() {
        return size() == 0;
    }

    // Push an element onto the stack top.
    void push(int num) {
        ListNode *node = new ListNode(num);
        node->next = stackTop;
        stackTop = node;
        stkSize++;
    }

    // Pop the stack top element and return the value of that element.
    int pop() {
        int num = top();
        ListNode *temp = stackTop;
        stackTop = stackTop->next;
        delete temp;
        stkSize--;
        return num;
    }

    // Get the value of the stack top element. If the stack is empty, an exception will be thrown.
    int top() {
        if (isEmpty())
            throw std::out_of_range("Empty stack!");
        return stackTop->val;
    }

    // Convert the elements in the stack to vector form and store them in the order from stack top to stack bottom.
    std::vector<int> toVector() {
        ListNode *node = stackTop;
        std::vector<int> res(size());
        for (int i = res.size() - 1; i >= 0; i--) {
            res[i] = node->val;
            node = node->next;
        }
        return res;
    }
};

int main() {
    // Create a LinkedListStack object.
    LinkedListStack test;
    // Push element 1 onto the stack.
    test.push(1);
    // Push element 2 onto the stack.
    test.push(2);

    // Traverse the vector and output the elements in it.
    for (int i = 0; i < test.toVector().size(); i++) {
        std::cout << test.toVector()[i] << "\n";
    }

    // When the main function ends, the test object goes out of scope and its destructor will be automatically called to release the relevant memory resources.
    return 0;
}