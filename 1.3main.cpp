// # task-03

// This basic program will take a temperature and a user supplied unit (Fahrenheit or Celsius) and then convert the input temperature to the other unit.

// ## Task

// text
// C = (F - 32.0) * 5.0 / 9.0


// In order to convert Celsius to Fahrenheit, we use the following formula:

// text
// F = C * 9.0 / 5.0 + 32.0


// THIS IS NOT CODE! Do not just copy it!

// The first equation converts some temperature F in *Fahrenheit* to C in *Celsius*, and the second does the reverse. We want to write a program that prompts the user for a temperature and a unit to convert to. The program will then perform the necessary conversion, determining what to do using a _conditional-statement_.

// When writing our code we want the program to very specifically ask the following question:

// text
// What is your temperature?


// The spelling, capitalization, and punctuation are all very specific, so copy and paste that text as your output! Our program should use a double for storing our temperature, and a std::string for storing the initial unit, and the result should be printed out on its own line, and **nothing more**.

// After you read the data for the temperature and unit, you will need to use a conditional statement to check if our unit (say, called u) is equal to "f" for Fahrenheit or "c" for Celsius. If u is equal to "f" then you would convert the temperature (say, called t) to Celsius, and if it is equal to "c" then you would convert it to Fahrenheit.

// Try building the program with:

// shell
// make


#include <iostream>
#include <string>

using namespace std;

auto main() -> int {
    double temp, fahrenheit, celsius;
    string unit;

    cout << "What is your temperature?" << endl;
    cin >> temp >> unit;

    if (unit == "F" || unit == "f") {
        celsius = (temp - 32.0) * 5.0 / 9.0;
        cout << celsius << "c" << endl;
    }
    else if (unit == "C" || unit == "c") {
        fahrenheit = temp * 9.0 / 5.0 + 32.0;
        cout << fahrenheit << "f" << endl;
    }
    else {
        cout << "Error: Please enter numeric value with unit F or C." << endl;
    }

    return 0;

}

// compile : g++ program.cpp -o my_program 
// run: ./my_program

// Submit the code
// git add .
// git commit -m "Finished tasks"
// git push