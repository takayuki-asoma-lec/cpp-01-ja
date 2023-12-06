#include "math_operations.h"
#include <stdexcept>

namespace MathOps{
    double addition(double a, double b){
        return a + b;
    }
    double subtraction(double a, double b){
        return a - b;
    }
    double multiplication(double a, double b){
        return a * b;
    }
    double division(double a, double b){
        if(b == 0.0){
            throw std::overflow_error("Devide by zero exception");
        }
        return a / b;
    }
}