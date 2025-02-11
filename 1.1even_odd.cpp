// Write a program that determines whether the integer entered by the user is odd or even.
// 사용자가 입력한 정수가 홀수인지 짝수인지 판별하는 프로그램을 작성하세요.
#include <iostream>

int main() {
    int num;
    std::cout << "\nEnter an integer: ";
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << "\nThe number " << num << " is even number." << std::endl; 
    } else {
        std::cout << "\nThe number " << num << " is odd number." << std::endl;
    }
    return 0;
}






// # include <iostream>

// int main() {
//     int num;
//     std::cout << "\nEnter an integer: ";
//     std::cin >> num;
//     if (num % 2 ==0) {
//         std::cout << num << " is even.\n";
//     } else{
//         std::cout << num << " is odd.\n";
//     }

//     return 0;

// }