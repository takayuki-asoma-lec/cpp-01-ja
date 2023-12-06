#include <iostream>
#include <vector>
#include <algorithm>

// コードを入力してください
std::vector<int> double_elements(const std::vector<int> & vec){
    std::vector<int> result;
    std::transform(vec.begin(), vec.end(), std::back_inserter(result), [](const auto i)
                   { return i * 2; });
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // コードを入力してください
    for(const int num: numbers){
        std::cout << num << " ";
    }
    std::cout << std::endl;

    const auto after = double_elements(numbers);
    for(const int num: after){
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}