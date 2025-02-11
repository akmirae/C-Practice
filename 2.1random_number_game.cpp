// The program generates a random number between 1 and 100 and repeatedly takes input 
// until the user guesses the number. If the number entered is greater than the correct 
// answer, it outputs "Too big!". If the number entered is less than the correct answer, 
// it outputs "Too small!". If the correct answer is guessed, it outputs "Correct!" 
// and exits.
// 프로그램이 1~100 사이의 난수를 생성하고, 사용자가 숫자를 맞출 때까지 반복하여 입력을 받습니다.
// 입력한 숫자가 정답보다 크면 "너무 큽니다!" 출력
// 입력한 숫자가 정답보다 작으면 "너무 작습니다!" 출력
// 정답을 맞추면 "정답입니다!" 출력 후 종료
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int target = std::rand() % 100 + 1;
    int guess;

    std::cout << "Guess the number (between 1 and 100): ";

    while (true) {
        std::cin >> guess;
        if (guess > target) {
            std::cout << "Too high, Try again.: ";
        } else if (guess < target) {
            std::cout << "Too low, Try again.: ";
        } else {
            std::cout << "Congratulation, You got it. ";
            break;
        }
    }

    return 0;       
}


// #include <iostream>
// #include <cstdlib> // For rand() and srand()
// #include <ctime> // For time()

// int main() {
//     std::srand(std::time(0)); // seed the random number generator with the current time
//     int target = std::rand() % 100 + 1; //Generate a random number between 1 and 100
//     int guess;

//     std::cout << "Guess the number (between 1 and 100): ";

//     while (true) {
//         std::cin >> guess;

//         if (guess > target) {
//             std::cout << "Too high Try again: ";
//         } else if (guess < target) {
//             std::cout << "Too low Try again: ";
//         } else {
//             std::cout << "Correct! You guessed it! \n";
//             break;
//         }
//     }

//     return 0;
// }