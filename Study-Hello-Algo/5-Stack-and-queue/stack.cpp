#include <iostream>
#include <stack>

int main(){
    std::stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    int top = stack.top();
    stack.pop();
    int size = stack.size();
    bool empty = stack.empty();

    std::cout << top << "\n";
    std::cout << size << "\n";
    std::cout << empty << "\n";

    return 0;
}
