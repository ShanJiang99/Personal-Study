#include <iostream>
#include <queue>
#include <vector>

int main(){
    /*Initialize a queue*/
    std::queue<int> queue;

    /*Insert an element*/
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    queue.push(5);

    /*Access queue front*/
    int front = queue.front();

    /*Get element out of queue*/
    queue.pop();

    /*Get length of queue*/
    int size = queue.size();

    /*Determine if empty queue*/
    bool empty = queue.empty();

    std::cout << "Queue front is " << front << "\n";
    std::cout << "Queue has " << size << " elements\n";
    std::cout << "Queue empty? " << empty << "\n";
}