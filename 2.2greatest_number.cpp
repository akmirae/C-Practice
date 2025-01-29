// Make User input an array of integers and write a program that finds the largest value 
// in the array and prints it.
// 사용자가 정수 배열을 입력하고, 그 배열에서 가장 큰 값을 찾아 출력하는 프로그램을 작성하세요.
#include <iostream>

int main() {
    int size;
    // 사용자로부터 배열 크기 입력 받기
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    int numbers[size]; // 사용자 입력에 맞는 크기의 배열 선언

    // 배열 요소 입력 받기
    std::cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        std::cin >> numbers[i];
    }

    // 첫 번째 요소를 최대값으로 설정
    int max = numbers[0];
    // 배열을 순회하며 최대값 찾기
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // 최대값 출력
    std::cout << "The largest value in the array is: " << max << std::endl;

    return 0;
}
// #include <iostream>

// int main() {
//     int size;

//     std::cout << "Enter the number of elements: ";
//     std::cin >> size;

//     int numbers[size]; // Declare size of an array
//     std::cout << "Enter " << size << " numbers: ";
//     for (int i = 0; i < size; i++) {
//         std::cin >> numbers[i];
//     }
//     int max = numbers[0];

//     for (int i = 0; i < size; i++) {
//         if (numbers[i] > max) {
//             max = numbers[i]; // Update max if a larger value is found
//         }
//     }

//     std::cout << "The largest value in the array is: " << max << std::endl;
//     return 0;
// }