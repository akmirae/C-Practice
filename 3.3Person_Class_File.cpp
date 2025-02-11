// Create a program that inputs multiple names and saves them as a txt file, 
// and also adds exception handling. Create a basic Person class.Include name and age properties, and 
// implement a displayInfo() function to display the name and age.
// In the main() function, create a Person object and display the information.
// 
// 여러 명을 입력해서 txt 파일로 저장하는 프로그램을 만들고 예외처리도 추가.
// 기본적인 Person 클래스를 만들어라.name, age 속성을 포함하고,
// displayInfo() 함수를 만들어 이름과 나이를 출력하도록 구현하세요.
// main() 함수에서 Person 객체를 생성하고 정보를 출력하세요.
#include <iostream>
#include <fstream>
#include <vector>
#include <limits> // 예외 처리를 위한 라이브러리

using namespace std;

// Person 클래스 정의
class Person {
public:
    string name;
    int age;

    // 생성자
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // 정보를 파일에 저장하는 함수
    void saveToFile(ofstream &file) const {
        file << name << "," << age << endl;
    }
};

// 사용자 입력을 받아 Person 객체 생성
Person getPersonInput() {
    string userName;
    int userAge;

    cout << "Enter your name: ";
    cin.ignore(); // 버퍼 비우기 (이전 입력이 남아 있을 경우 방지)
    getline(cin, userName);

    while (true) {
        cout << "Enter your age: ";
        cin >> userAge;

        // 숫자가 아닌 값이 입력되었을 경우 예외 처리
        if (cin.fail() || userAge < 0) {
            cout << "Invalid input! Please enter a valid age.\n";
            cin.clear(); // 입력 상태 초기화
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 잘못된 입력 무시
        } else {
            break; // 정상적인 입력이면 반복 종료
        }
    }

    return Person(userName, userAge);
}

// main 함수
auto main() -> int {
    vector<Person> people;
    int count;

    cout << "How many people do you want to enter? ";
    while (true) {
        cin >> count;

        // 숫자가 아닌 값이 입력되었을 경우 예외 처리
        if (cin.fail() || count <= 0) {
            cout << "Invalid input! Please enter a valid number.\n";
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    // 여러 명의 정보 입력
    for (int i = 0; i < count; i++) {
        cout << "\nEntering data for person " << i + 1 << ":\n";
        people.push_back(getPersonInput());
    }

    // 파일에 저장
    ofstream outFile("persons.txt");
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    for (const auto &person : people) {
        person.saveToFile(outFile);
    }

    outFile.close();
    cout << "\nData saved successfully to persons.txt\n";

    return 0;
}
