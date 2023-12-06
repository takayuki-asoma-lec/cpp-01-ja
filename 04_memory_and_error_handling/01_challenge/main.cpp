#include <iostream>

int main() {
    int x = 42;

    // コードを入力してください
    std::cout << &x << std::endl;
    // const int * const p = &x;
    int * p = &x;
    std::cout << *p << std::endl;
    return 0;
}