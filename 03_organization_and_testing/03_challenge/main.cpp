#include "math_operations.h"
#include <iostream>

int main(){
    std::cout << "Enter a calculation: ";
    double a, b, result;
    char op;
    std::cin >> a >> op >> b;
    switch(op){
        case '+':
        {
            result = MathOps::addition(a, b);
            break;
        }
        case '-':
        {
            result = MathOps::subtraction(a, b);
            break;
        }
        case '*':
        {
            result = MathOps::multiplication(a, b);
            break;
        }
        case '/':
        {
            result = MathOps::division(a, b);
            break;
        }
    }
    std::cout << "Result: " << result << std::endl;

    return 0;
}