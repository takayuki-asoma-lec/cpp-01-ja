#include <iostream>

void myPrint(const double num){
    if(num == 0.0){
        std::cout << "Zero" << std::endl;
        return;
    }
    std::cout << (num > 0 ? "Positive" :"Negative") << std::endl;
}

int main(){
    std::cout << "Please input a number." << std::endl;
    double num;
    std::cin >> num;
    myPrint(num);
}