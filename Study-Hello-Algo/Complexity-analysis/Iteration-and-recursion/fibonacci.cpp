#include <iostream>

int fibonacci(int n){
    if (n == 1 || n == 2){
        return n - 1;
    }
    else{
        int res = fibonacci(n - 1) + fibonacci(n - 2);
        return res;
    }
}

int main(){
    std::cout << fibonacci(10);
}