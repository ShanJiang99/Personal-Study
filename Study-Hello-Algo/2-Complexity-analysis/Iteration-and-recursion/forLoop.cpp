#include <iostream>

int forLoop(int n){
    int res = 0;

    for (int i = 1; i <= n; i++){
        res += i;
    }
    return res;
}

int main(){
    std::cout << forLoop(5);
}