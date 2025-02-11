// Return the result of the product of two numbers with a function
// Create a function called multiply(int a, int b) to return the product of two numbers.
// In the main function, pass the two numbers entered by the user to the function and 
// print the result.
// 함수로 두 수의 곱셈 결과 반환
// multiply(int a, int b)라는 함수를 만들어 두 수의 곱을 반환하세요.
// main 함수에서 사용자가 입력한 두 수를 함수에 전달하고 결과를 출력하세요.

#include <iostream>
int multiply(int a, int b){ 
    return a * b;
}
int main() {
    int num1, num2;

    std::cout <<"Enter the first integer: " << std::endl;
    std::cin >> num1;
    std::cout <<"Enter the second integer: " << std::endl;
    std::cin >> num2;

    int result = multiply(num1, num2);

    std::cout << num1 << " X " << num2 << " = " << result << std::endl;

    return 0;
}
// #include <iostream>

// // 곱셈을 수행하는 함수 정의
// int multiply(int a, int b) {
//     return a * b; // 두 수의 곱을 반환
// }

// int main() {
//     int num1, num2;

//     // 사용자 입력 받기
//     std::cout << "Enter the first integer: ";
//     std::cin >> num1;
//     std::cout << "Enter the second integer: ";
//     std::cin >> num2;

//     // 함수 호출하여 곱셈 수행
//     int result = multiply(num1, num2);

//     // 결과 출력
//     std::cout << num1 << " X " << num2 << " = " << result << std::endl;

//     return 0;
// }
