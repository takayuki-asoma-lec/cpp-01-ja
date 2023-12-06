// 不足している値、データ型、その他のコードを追加してプログラムを完成させてください。
#include <iostream>

int main()
{
    constexpr int myNumber = 5;

    constexpr int anotherNumber = 5;

    const int answer = myNumber + anotherNumber;

    std::cout << answer << std::endl;
    return 0;
}