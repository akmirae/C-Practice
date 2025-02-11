// energy-mass equation to calculate the energy-equivalence
// task-02
// This basic program will take a user-supplied mass and use the famous energy-mass equation to calculate the energy-equivalence.

// Task
// The energy-mass equation is as follows:

// E = mc^2
// THIS IS NOT CODE! Do not just copy it!

// This states that an object with mass m has an energy equal to its mass multiple by the speed of light, c = 300000000 m/s, squared. Given some mass in kilograms, we want to compute its energy equivalence in Joules. Begin by creating a new file named main.cpp in the src folder. Your program should make use of both std::cout and std::cin to ask the user for a side length. Then your program should calculate the mass-energy and print it out.

// When writing our code we want the program to very specifically ask the following question:

// What is your mass?
// The spelling, capitalization, and punctuation are all very specific, so copy and paste that text as your output! Our program should use doubles for storing our variables and should, and the result should be printed out on its own line, and nothing more.

// Try building the program with:

// make
// Running
// Try running the program with:

// ./bin/main.exe
// Testing
// Try testing the program with:

// make test

#include <iostream>

int main() {
    double mass;
    const double c = 300000000.0; // 빛의 속도 (m/s)

    std::cout << "What is your mass?" << std::endl;
    std::cin >> mass;

    double energy = mass * c * c;

    std::cout << energy << std::endl;

    return 0;
}


// compile : g++ program.cpp -o my_program 
// run: ./my_program

// Submit the code
// git add .
// git commit -m "Finished tasks"
// git push