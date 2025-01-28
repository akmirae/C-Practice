#include <iostream> // 필수 입출력 라이브러리 포함

int main() {
    double side_length;

    std::cout << "What is your side length?" << std::endl; // 사용자에게 질문
    std::cin >> side_length; // 사용자 입력 받기

    double surface_area = side_length * side_length * 6; // 표면적 계산
    double volume = side_length * side_length * side_length; // 부피 계산

    std::cout << surface_area << std::endl; // 결과 출력
    std::cout << volume << std::endl;

    return 0;
}

