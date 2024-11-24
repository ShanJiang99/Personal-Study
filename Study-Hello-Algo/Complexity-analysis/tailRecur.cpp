#include <iostream>

int tailRecur(int n, int res){
    if (n == 0)
        return res;
    return tailRecur(n - 1, res + n);
}

int main(){
    std::cout << tailRecur(6, 0);
}