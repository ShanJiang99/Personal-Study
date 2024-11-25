#include<iostream>
#include<fstream>
#include<sstream>


using namespace std;

std::string nestedForLoop(int n){
    std::ostringstream res;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            res << "(" << i << ", " << j << "), ";
        }
    }
    return res.str();
}

int main(){
    std::cout << nestedForLoop(6);
}