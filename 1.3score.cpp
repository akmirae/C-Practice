// ; Input a score from the user and output the grade according to the following rules:
// ; 90 points or more: A
// ; 80 points or more: B
// ; 70 points or more: C
// ; 60 points or more: D
// ; Less than 60 points: F
// ; 사용자로부터 점수를 입력받아 다음 규칙에 따라 학점을 출력하세요.
// ; 90점 이상: A
// ; 80점 이상: B
// ; 70점 이상: C
// ; 60점 이상: D
// ; 60점 미만: F
#include <iostream>
int main() {
    double score;
    std::cout << "Enter an integer: ";
    std::cin >> score;
    if (score >= 90) {
        std::cout << "\nYour score is " << "A\n";
    } else if (score >= 80) {
        std::cout << "\nYour score is " << "B\n";
    } else if (score >= 70) {
        std::cout << "\nYour score is " << "C\n";
    } else if (score >= 60) {
        std::cout << "\nYour score is " << "D\n";
    }else {
        std::cout << "\nYour score is " << "F\n";
    }

    return 0;
}

// #include <iostream>
// int main() {
//     int score;
//     std::cout << "Enter your score: ";
//     std::cin >> score;

//     if (score >= 90) {
//         std::cout << "Your grade is: " << "A\n";
//     } else if (score >= 80) {
//         std::cout << "Your grade is: " << "B\n";
//     } else if (score >= 70) {
//         std::cout << "Your grade is: " << "C\n";
//     } else if (score >= 60) {
//         std::cout << "Your grade is: " << "D\n";
//     } else {
//         std::cout << "Your grade is: " << "F\n";
//     }

//     return 0;
// }
