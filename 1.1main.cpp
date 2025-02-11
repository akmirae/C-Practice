// task-01
// This basic program will take a user-supplied side length and compute both the 
// surface area and volume of a cube with sides that long.
// Task
// Surface area and volume are, respectively, calculated as such:
// SA = L * L * 6
// V = L * L * L
// Begin by creating a new file named main.cpp in the src folder. 
// Your program should make use of both std::cout and std::cin to ask the user 
// for a side length. Then your program should calculate the surface area and 
// then print it out, and then the same for volume.
// When writing our code we want the program to very specifically ask the following question:
// What is your side length?
// The spelling, capitalization, and punctuation are all very specific, so copy 
// and paste that text as your output! Our program should use doubles for storing 
// our variables, and the result should be printed out on its own line, and nothing more.
// Try building the program with:
// make
// Running
// Try running the program with:  ./bin/main.exe
// Testing
// Try testing the program with: make test
#include <iostream>
using namespace std;

auto main() -> int {
    double side;

    cout << "What is your side length?" << endl;
    cin >> side;

    double surfaceArea = side * side * 6;
    double volume = side * side * side;

    cout << surfaceArea << endl;
    cout << volume << endl;

    return 0;
}








// #include <iostream>
// using namespace std;

// auto main() -> int {
//     double side; // initialize a variable.
//     cout << "What is your side length?" << endl; // Ask user to enter the length of the side.
//     cin >> side; // Assign the value to the variable 'side'

//     double surfaceArea = side * side * 6; // Calculate the surface area of the cube.
//     double volume = side * side * side; // Calculate the volume of the cube.

//     cout << surfaceArea << endl; // Show the output of the surface area
//     cout << volume << endl; // Show the output of the volume

//     return 0;
// }
// compile : g++ program.cpp -o my_program 
// run: ./my_program

// Submit the code
// git add .
// git commit -m "Finished tasks"
// git push