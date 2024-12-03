#include <iostream>
#include <vector>

/* Stack class based on array */
class ArrayStack {
  private:
    std::vector<int> stack;

  public:
    /* Get the length of the stack */
    int size() {
        return stack.size();
    }

    /* Determine if the stack is empty */
    bool isEmpty() {
        return stack.size() == 0;
    }

    /* Push */
    void push(int num) {
        stack.push_back(num);
    }

    /* Pop */
    int pop() {
        int num = top();
        stack.pop_back();
        return num;
    }

    /* Access stack top element */
    int top() {
        if (isEmpty())
            throw std::out_of_range("Stack is empty");
        return stack.back();
    }

    /* Return Vector */
    std::vector<int> toVector() {
        return stack;
    }
};

int main(){
    ArrayStack test;
    test.push(1);
    test.push(2);
    for (int i = 0; i < test.toVector().size(); i++) {
        std::cout << test.toVector()[i] << "\n";
    }
    std::cout << test.isEmpty();
}