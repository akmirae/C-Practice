// Create a basic Person class.
// Include name and age properties,
// and implement a displayInfo() function to display the name and age.
// In the main() function, create a Person object and display the information.

// 기본적인 Person 클래스를 만들어라.
// name, age 속성을 포함하고,
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
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;        
    }
};
auto main() -> int {
    Person person1("Alice", 25);
    person1.displayInfo();

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
//     // 생성자 (객체 초기화)
//     Person(string n, int a) {
//         name = n;
//         age = a;
//     }
//     // 정보 출력 함수
//     void displayInfo() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };
// // 메인 함수
// auto main() -> int { 
//     // Person 객체 생성
//     Person person1("Alice", 25);
//     // 정보출력
//     person1.displayInfo();
//     return 0;
// }

