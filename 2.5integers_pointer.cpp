// After declaring an array of integers, use a pointer to print all the elements.
// 정수 배열을 선언한 후 포인터를 사용하여 모든 원소를 출력하세요.
#include <iostream>

using namespace std;

auto main() -> int {
    int arr[] = {10, 20, 30, 40, 50}; // 정수 배열 선언
    int*ptr = arr; // 배열의 첫 번째 요소를 가리키는 포인터

    cout << "Array elements using pointer: " << endl;

    // 포인터를 사용하여 배열요소 출력
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; // 포인터 연산을 사용하여 요소 접근
    }

    cout << endl;
    return 0;
}