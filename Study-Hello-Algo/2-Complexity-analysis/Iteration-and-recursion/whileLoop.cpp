#include <iostream>

int whileLoop(int n){
    int res = 0;
    int i = 1;
    while(i <= n){
        res += i;
        i++;
        i *= 2;
    }
    return res;
}

int main(){
    std::cout << whileLoop(6);
}