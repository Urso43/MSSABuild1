/* MSSABuild1.cpp : This file contains the 'main' function. Program execution begins and ends there.
****************************************************************************************************
Author: Joseph A. Urso
Company: Magazine Subscription Service Agency
Created: 10/30/2020
Last Edited: 11/10/2020
Version: 1.0
*/

#include <iostream>
#include "Calculate.h"
using namespace std;

int main()
{   // initiate calulating variables
    double x = 0.0;
    double result = 0.0;
    double percent = 0.0;
    int choice = 1;
    bool menu = true;


    cout << "Welcome, Richard Emmons!" << endl;
    // initialize instance of Calculate class
    Calculate c;
    // program always running until manual terminate using number "9"
    while (choice != 9) {
        cout << "Please select from the menu." << endl;
        cout << "1. Fixed Percentage" << endl;
        cout << "2. Variable Percentage" << endl;
        cout << "9. Exit Program" << endl;
        cin >> choice;

        switch (choice) {

        case 1:
            
            cout << "Please enter a markup percentage (format - 5, 10, 15, etc.)";
            cin >> percent;
            // logic for a fixed percentage algorithm
            while (menu == true) {
                cout << "Enter 9 as newspaper cost to exit program." << endl;
                cout << "Or Enter 3 to return to the main menu." << endl;
                cout << "Please enter the Newspaper Cost:" << endl;
                cin >> x;
                if (x != 9 && x != 3) {
                    result = c.Calculator(x, percent);
                    cout << "MSSA Price: " << result << endl;
                    system("pause");
                }
                else if (x == 3) {
                    menu = false;
                }
                else {
                    cout << "Goodbye." << endl;
                    return 0;
                }
            }

        case 2:
            // logic for a variable percentage algorithm
            while (menu == true) {
                cout << "Enter 9 as newspaper cost to exit program." << endl;
                cout << "Or Enter 3 to return to the main menu." << endl;
                cout << "Please enter the Newspaper Cost:" << endl;
                cin >> x;
                if (x != 9 && x != 3) {
                    cout << "Please enter a markup percentage (format - 5, 10, 15, etc.)";
                    cin >> percent;
                    result = c.Calculator(x, percent);
                    cout << "MSSA Price: " << result << endl;
                    system("pause");
                }
                else if (x == 3) {
                    menu = false;
                }
                else {
                    cout << "Goodbye." << endl;
                    return 0;
                }
            }

        case 9: 
            cout << "Goodbye." << endl;
            return 0;
        }
        continue;
    }
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
