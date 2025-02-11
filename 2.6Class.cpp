// Define a Car class, including the properties brand, model, and year. 
// Create a member function called displayInfo() to display car information.
// Car 클래스를 정의하고, brand, model, year 속성을 포함하세요.
// displayInfo()라는 멤버 함수를 만들어 자동차 정보를 출력하세요.
#include <iostream>

using namespace std;

// Car 클래스 정의
class Car {
public:
    // 속성 (멤버 변수)
    string brand;
    string model;
    int year;

    // 생성자 (객체 초기화)
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    // 자동차 정보 출력 함수
    void displayInfo() {
        cout << "Car Information:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

// main 함수
auto main() -> int {
    // Car 객체 생성
    Car myCar("Toyota", "Corolla", 2022);

    // 자동차 정보 출력
    myCar.displayInfo();

    return 0;
}
