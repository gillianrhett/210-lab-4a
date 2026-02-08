// COMSC-210 | Lab 4a | Gillian Rhett

#include <iostream>
#include <string>

using namespace std;

//Write a program that will create and store a vector of structs.
//Write a struct Color that will store the red, green, and blue hue values that represent any color.
struct Color {
    int r;
    int g;
    int b;
};

Color newColor(int, int, int); // create a new color with input validation
void printColor(Color); // display the 3 values

int main() {

//Milestone 1: the struct works and can received initialization data. Output the object's data to the console for confirmation.
    Color c1 = newColor(0,0,0);
    printColor(c1);

//Create an empty vector of type <Color> that will hold these structs.

//Milestone 2: test your vector by populating it with a Color object and outputting it to the console.

//Generate a random number between 25 and 50, and call that n. We will push n colors into the vector. How? Inside a loop running n times, create a temporary struct, populate it with random integers, and push that temporary struct into your container.

//Milestone 3: your code runs up to this point, and outputs in any format the vector data for confirmation.

//At the end of your program, output a well-formatted table that uses cout manipulators for column alignment. Output the vector's contents, showing the R/G/B values for each color in the vector. Your output should resemble this below.

//Milestone 4: your code is ready for submission.

    return 0;
}

Color newColor(int rIn, int gIn, int bIn) {
    Color newC;
    if (0 <= rIn && rIn <= 255)
        newC.r = rIn;
    else {
        newC.r = 0;
        cout << "Invalid value; setting r to 0." << endl;
    }
    if (0 <= gIn && gIn <= 255)
        newC.g = gIn;
    else {
        newC.g = 0;
        cout << "Invalid value; setting g to 0." << endl;
    }
    if (0 <= bIn && bIn <= 255)
        newC.b = bIn;
    else {
        newC.b = 0;
        cout << "Invalid value; setting b to 0." << endl;
    }
    return newC;
}

void printColor(Color colorIn) {
    cout << "\n" << colorIn.r << ", " << colorIn.g << ", " << colorIn.b << endl;
}