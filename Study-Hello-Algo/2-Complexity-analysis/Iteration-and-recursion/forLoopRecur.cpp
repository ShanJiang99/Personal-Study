#include <iostream>
#include <stack>

int forLoopRecur(int n){
    std::stack<int> stack;
    int res = 0;

    for(int i = n; i > 0; i--){
        stack.push(i);
    }

    while(!stack.empty()){
        res += stack.top();
        stack.pop();
    }

    return res;
}

int main(){
    std::cout << forLoopRecur(10);
}