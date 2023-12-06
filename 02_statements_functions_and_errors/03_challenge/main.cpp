#include <iostream>

int power(const int base, const int exponent = 2){
    if(exponent == 0){
        return 1;
    }
    return base * power(base, exponent - 1);
}

int main(){
    std::cout << power(3, 4) << std::endl;
    return 0;
}