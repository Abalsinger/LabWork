// This program  asks the user for figure size and paint character and then prints the figure of user-supplied size.
// Lab3_Figures
// Amy Balsinger
// 9/12/2023

#include <iostream>
using namespace std;


int main() {
    //declare variables
    int size;
    char paintChar;

    // Ask the user for input
    cout << "Input figure size: ";
    cin >> size;

    cout << "Input paint character: ";
    cin >> paintChar;

    // Print the figure with nested loops
    for (int i = 0; i < size; i++) { //each row
        for (int j = 0; j < size; j++) {  //each character in row
            cout << paintChar;
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                cout << paintChar;
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j == i) {
                cout << paintChar;
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            cout << ' ';
        }
        cout << paintChar << endl;
    }

    cout << endl;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1 || i == j || j == size - i - 1) {
                cout << paintChar;
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
