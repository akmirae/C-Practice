// 두 개의 정수를 입력받아 합을 출력하는 프로그램을 작성하세요.
#include <iostream>

int main(){
    int num1, num2, sum;

    std::cout << "\nEnter the first number: ";
    std::cin >> num1;

    std::cout << "\nEnter the second number: ";
    std::cin >> num2;

    sum = num1 + num2;

    std::cout << "\nThe sum of " << num1 << " and " << num2 << " is: " << sum << std:: endl;

    return 0;
}

// #include <iostream>

// int main() {
//     int num1, num2, sum;

//     // 사용자로부터 두 정수 입력받기
//     std::cout <<"Enter the first number: ";
//     std::cin >> num1;

//     std::cout <<"Enter the second number: ";
//     std::cin >> num2;

//     // 두 숫자의 합 계산
//     sum = num1 + num2;

//     // 결과 출력
//     std::cout << "The sum of " << num1 << "and" << num2 << "is: " << sum << std::endl;

//     return 0;
// }