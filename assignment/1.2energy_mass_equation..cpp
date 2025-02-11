// energy-mass equation to calculate the energy-equivalence

#include <iostream>
using namespace std;

auto main() -> int {
    double mass, energy, c;

    c = 300000000;

    cout << "What is your mass?" << endl; // Ask the user to enter a mass.
    cin >> mass; // Assign the variable to mass.

    energy = mass * c * c;

    cout << energy << endl;

    return 0;
}

// compile : g++ program.cpp -o my_program 
// run: ./my_program

// Submit the code
// git add .
// git commit -m "Finished tasks"
// git push