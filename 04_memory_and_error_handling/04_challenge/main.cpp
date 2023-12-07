#include <iostream>
#include <stdexcept>
#include <vector>

// コードを入力してください
int element_at(const std::vector<int> & vec, const int idx){
    if(idx > vec.size()-1){
        throw std::out_of_range("index is out of the range.");
    }
    return vec.at(idx);
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9};

    // コードを入力してください
    std::cout << element_at(numbers, 4) << std::endl;
    try{
        std::cout << element_at(numbers, 5) << std::endl;
    }catch(const std::out_of_range & e){
        std::cerr << "Error: " << e.what() << std::endl;
        // return 1;
    }
    return 0;
}