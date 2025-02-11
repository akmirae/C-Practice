// Enter a number from the user and output the multiplication table for that number.
// 사용자로부터 숫자를 입력받아 해당 숫자의 구구단을 출력하세요.
#include <iostream>
using namespace std;

auto main() -> int{
    int num;
    cout << "\nEnter an integer: ";
    cin >> num;

    cout << "\nMultiplication table for " << num << ":\n";
    for (int i = 1; i < 10; i++) {
        cout << num << " X " << i << " = " << num * i << "\n";
    }
    return 0;
}





// #include <iostream>
// int main() {
//     int num;
//     std::cout << "\nEnter an integer: ";
//     std::cin >> num;

//     std::cout << "\nMultiplication table for " << num << ":\n";

//     for (int i = 1; i <= 10; i++) {
//         std::cout << num << " X " << i << " = " << num * i << "\n";
//     }

//     return 0;
    
// }