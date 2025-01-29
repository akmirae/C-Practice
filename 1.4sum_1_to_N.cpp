// Write a program that takes N as input from the user and calculates the sum from 1 to N.
// 사용자로부터 N을 입력받아 1부터 N까지의 합을 구하는 프로그램을 작성하세요.
#include <iostream>
int main() {
    int N, sum = 0;
    std::cout << "Enter an integer: ";
    std::cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    std::cout << "\nThe sum of 1 to " << N << " is " << sum << std::endl;

    return 0;
}






// #include <iostream>
// int main() {
//     int num, sum = 0;
//     std::cout << "Enter an integer: ";
//     std::cin >> num;

//     for (int i = 1; i <= num; i++) {
//         sum += i;
//     }
//     std::cout << "The sum from 1 to " << num << " is: " << sum << std::endl;

//     return 0;
// }

