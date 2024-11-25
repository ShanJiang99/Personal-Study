#include <iostream>

int recur(int n){
    if (n == 1)
        return 1;
    int res = recur(n - 1);
    return n + res;
}

int main(){
    std::cout << recur(5);
}