#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>

/*****************************************************************/
// Under a particular operating platform
void algorithm(int n) {
    int a = 2;  // 1 ns
    a = a + 1;  // 1 ns
    a = a * 2;  // 10 ns
    // Loop n times
    for (int i = 0; i < n; i++) {  // 1 ns , every round i++ is executed
        std::cout << 0 << std::endl;         // 5 ns
    }
}
/*****************************************************************/

/*****************************************************************/
// Time complexity of algorithm A: constant order
void algorithm_A(int n) {
    std::cout << 0 << std::endl;
}
// Time complexity of algorithm B: linear order
void algorithm_B(int n) {
    for (int i = 0; i < n; i++) {
        std::cout << 0 << std::endl;
    }
}
// Time complexity of algorithm C: constant order
void algorithm_C(int n) {
    for (int i = 0; i < 1000000; i++) {
        std::cout << 0 << std::endl;
    }
}
/*****************************************************************/

/*****************************************************************/
void algorithm(int n) {
    int a = 1;  // +1
    a = a + 1;  // +1
    a = a * 2;  // +1
    // Loop n times
    for (int i = 0; i < n; i++) { // +1 (execute i ++ every round)
        std::cout << 0 << std::endl;    // +1
    }
}
/*****************************************************************/

/*****************************************************************/
void algorithm(int n) {
    int a = 1;  // +0 (trick 1)
    a = a + n;  // +0 (trick 1)
    // +n (technique 2)
    for (int i = 0; i < 5 * n + 1; i++) {
        std::cout << 0 << std::endl;
    }
    // +n*n (technique 3)
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < n + 1; j++) {
            std::cout << 0 << std::endl;
        }
    }
}
/*****************************************************************/

/*****************************************************************/
/* Constant complexity */
int constant(int n) {
    int count = 0;
    int size = 100000;
    for (int i = 0; i < size; i++)
        count++;
    return count;
}

/* Linear complexity */
int linear(int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        count++;
    return count;
}

/* Linear complexity (traversing an array) */
int arrayTraversal(std::vector<int> &nums) {
    int count = 0;
    // Loop count is proportional to the length of the array
    for (int num : nums) {
        count++;
    }
    return count;
}

/* Quadratic complexity */
int quadratic(int n) {
    int count = 0;
    // Loop count is squared in relation to the data size n
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            count++;
        }
    }
    return count;
}

/* Quadratic complexity (bubble sort) */
int bubbleSort(std::vector<int> &nums) {
    int count = 0; // Counter
    // Outer loop: unsorted range is [0, i]
    for (int i = nums.size() - 1; i > 0; i--) {
        // Inner loop: swap the largest element in the unsorted range [0, i] to the right end of the range
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[j + 1]) {
                // Swap nums[j] and nums[j + 1]
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
                count += 3; // Element swap includes 3 individual operations
            }
        }
    }
    return count;
}

/* Exponential complexity (loop implementation) */
int exponential(int n) {
    int count = 0, base = 1;
    // Cells split into two every round, forming the sequence 1, 2, 4, 8, ..., 2^(n-1)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < base; j++) {
            count++;
        }
        base *= 2;
    }
    // count = 1 + 2 + 4 + 8 + .. + 2^(n-1) = 2^n - 1
    return count;
}

/* Exponential complexity (recursive implementation) */
int expRecur(int n) {
    if (n == 1)
        return 1;
    return expRecur(n - 1) + expRecur(n - 1) + 1;
}

/* Logarithmic complexity (loop implementation) */
int logarithmic(int n) {
    int count = 0;
    while (n > 1) {
        n = n / 2;
        count++;
    }
    return count;
}

/* Logarithmic complexity (recursive implementation) */
int logRecur(int n) {
    if (n <= 1)
        return 0;
    return logRecur(n / 2) + 1;
}

/* Linear logarithmic complexity */
int linearLogRecur(int n) {
    if (n <= 1)
        return 1;
    int count = linearLogRecur(n / 2) + linearLogRecur(n / 2);
    for (int i = 0; i < n; i++) {
        count++;
    }
    return count;
}

/* Factorial complexity (recursive implementation) */
int factorialRecur(int n) {
    if (n == 0)
        return 1;
    int count = 0;
    // From 1 split into n
    for (int i = 0; i < n; i++) {
        count += factorialRecur(n - 1);
    }
    return count;
}
/*****************************************************************/

/*****************************************************************/
/* Generate an array with elements {1, 2, ..., n} in a randomly shuffled order */
std::vector<int> randomNumbers(int n) {
    std::vector<int> nums(n);
    // Generate array nums = { 1, 2, 3, ..., n }
    for (int i = 0; i < n; i++) {
        nums[i] = i + 1;
    }
    // Generate a random seed using system time
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    // Randomly shuffle array elements
    std::shuffle(nums.begin(), nums.end(), std::default_random_engine(seed));
    return nums;
}

/* Find the index of number 1 in array nums */
int findOne(std::vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
        // When element 1 is at the start of the array, achieve best time complexity O(1)
        // When element 1 is at the end of the array, achieve worst time complexity O(n)
        if (nums[i] == 1)
            return i;
    }
    return -1;
}
/*****************************************************************/