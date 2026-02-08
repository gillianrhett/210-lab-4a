// COMSC-210 | Lab 4a | Gillian Rhett

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct Color {
    int r;
    int g;
    int b;
};

Color newColor(int, int, int); // create a new color with input validation
void printColor(int, Color); // display the 3 values

const int cw = 9; // column width

int main() {

    // create a vector of random size 25-50 containing random colors
    vector <Color> colors;
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

    // display the colors in the vector
    cout << "\n";
    cout << right << setw(cw) << "Color#";
    cout << right << setw(cw) << "R value";
    cout << right << setw(cw) << "G value";
    cout << right << setw(cw) << "B value";
    cout << endl;
    cout << right << setw(cw) << "-------";
    cout << right << setw(cw) << "-------";
    cout << right << setw(cw) << "-------";
    cout << right << setw(cw) << "-------";
    cout << endl;
    for (int j = 0; j < colors.size(); j++) {
        printColor(j + 1, colors.at(j));
    }

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

void printColor(int num, Color colorIn) {
    cout << setw(cw) << num;
    cout << setw(cw) << colorIn.r;
    cout << setw(cw) << colorIn.g;
    cout << setw(cw) << colorIn.b;
    cout << endl;
}