// Reverse a string
// Write a program that reverses the string entered by the user and outputs it.
// Example: "hello" → "olleh"

// 문자열 뒤집기
// 사용자가 입력한 문자열을 뒤집어 출력하는 프로그램을 작성하세요.
// 예: "hello" → "olleh"





#include <iostream>
#include <algorithm>

using namespace std;

auto main() -> int {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    reverse(str.begin(), str.end());

    cout << "Reversed string: " << str <<endl;

    return 0;
}
// #include <iostream>
// #include <algorithm> // std::reverse 사용

// using namespace std; // std 네임스페이스 사용

// auto main() -> int {
//     string str;

//     // 사용자 입력 받기
//     cout << "Enter a string: ";
//     getline(cin, str); // 공백 포함 문자열 입력

//     // 문자열 뒤집기
//     reverse(str.begin(), str.end());

//     // 결과 출력
//     cout << "Reversed string: " << str << endl;

//     return 0;
// }