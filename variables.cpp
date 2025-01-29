// 정수(int), 실수(double), 문자(char), 문자열(string)을 선언하고 값을 할당한 후 출력하세요.


#include <iostream> // 입력과 출력을 위한 헤더 파일
#include <string> // 문자열 사용을 위한 헤더 파일

int main() {
    // 변수 선언 및 값 할당
    int myInt = 10; // 정수형 변수
    double myDouble = 3.14; // 실수형 변수
    char myChar = 'A'; // 문자형 변수
    std::string myString = "Hello"; // 문자열 변수

    // 변수 출력
    std::cout << "정수(int): " << myInt << std::endl;
    std::cout << "실수(double): " << myDouble << std::endl;
    std::cout << "문자(myChar): " << myChar << std::endl;
    std::cout << "문자열(string): " << myString << std::endl;

    return 0; 
}