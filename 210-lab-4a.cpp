// COMSC-210 | Lab 4a | Gillian Rhett

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

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

    vector <Color> colors;

//Generate a random number between 25 and 50, and call that n. We will push n colors into the vector. How? Inside a loop running n times, create a temporary struct, populate it with random integers, and push that temporary struct into your container.
    srand(time(0));    
    int n = rand() % 26 + 25;
    int r = 0;
    int g = 0;
    int b = 0;
    Color tempColor = newColor(r, g, b);
    for (int i = 0; i < n; i++) {
        r = rand() % 255;
        g = rand() % 255;
        b = rand() % 255;
        tempColor.r = r;
        tempColor.g = g;
        tempColor.b = b;
        colors.push_back(tempColor);
    }

    for (int j = 0; j < colors.size(); j++) {
        printColor(colors.at(j));
    }
//Milestone 3: your code runs up to this point, and outputs in any format the vector data for confirmation.

//At the end of your program, output a well-formatted table that uses cout manipulators for column alignment. Output the vector's contents, showing the R/G/B values for each color in the vector. Your output should resemble this below.

//Milestone 4: your code is ready for submission.

    return 0;
}

Color newColor(int rIn, int gIn, int bIn) { 
    // TODO fix formatting
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