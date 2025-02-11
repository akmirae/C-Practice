// User Input: Create a basic Person class.Include name and age properties, and 
// implement a displayInfo() function to display the name and age.
// In the main() function, create a Person object and display the information.
// 사용자 입력: 기본적인 Person 클래스를 만들어라.name, age 속성을 포함하고,
// displayInfo() 함수를 만들어 이름과 나이를 출력하도록 구현하세요.
// main() 함수에서 Person 객체를 생성하고 정보를 출력하세요.
#include <iostream>
using namespace std;

class Person {
    public:
    string name;
    int age;
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void displayInfo() {
        cout << "\n === Person Information ===" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
auto main() -> int {
    string userName;
    int userAge;

    cout << "Enter your name: ";
    getline(cin, userName);
    cout << "Enter your age: ";
    cin >> userAge;

    Person person(userName, userAge);
    person.displayInfo();
    return 0;
}



// #include <iostream>

// using namespace std;

// // Person 클래스 정의
// class Person {
// public:
//     // 속성 (멤버 변수)
//     string name;
//     int age;

//     // 생성자 (사용자로부터 입력받아 초기화)
//     Person(string n, int a) {
//         name = n;
//         age = a;
//     }

//     // 정보 출력 함수
//     void displayInfo() {
//         cout << "\n=== Person Information ===" << endl;
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// // main 함수
// auto main() -> int {
//     string userName;
//     int userAge;

//     // 사용자 입력 받기
//     cout << "Enter your name: ";
//     getline(cin, userName); // 이름 입력 (공백 포함 가능)

//     cout << "Enter your age: ";
//     cin >> userAge; // 나이 입력

//     // Person 객체 생성
//     Person person(userName, userAge);

//     // 정보 출력
//     person.displayInfo();

//     return 0;
// }


