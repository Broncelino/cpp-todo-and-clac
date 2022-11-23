// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
#include <list>
#include <map>
#include <deque>
#include <fstream>


using namespace std;
void showdq(deque<string> g)
{
    deque<string>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it <<"\n";
    cout << '\n';
}

double vertVel() {
    double yvel;
    double time;
    double grav = 9.8;
    cout << "Enter Initial vertical velocity in m/s : "; // Type a number and press enter
    cin >> yvel; // Get user input from the keyboard
    cout << "Enter time since start in seconds : ";
    cin >> time;
    double curyvel = yvel - grav * time;
    cout << curyvel << " meters per second \n";
    return curyvel;
}

double horDist() {
    double time;
    double horvel;
    cout << "Enter horizontal velocity in m/s: ";
    cin >> horvel;
    cout << "Enter time in air in seconds: ";
    cin >> time;
    double hordist = time * horvel;
    cout << hordist << " meters\n";
    return hordist;
}

double maxHeight() {
    double vertvel;
    double inithi;
    double grav = 9.8;
    cout << "Enter Initial vertical velocity in m/s : ";
    cin >> vertvel; // Get user input from the keyboard
    cout << "Enter initial height in meters: ";
    cin >> inithi;
    double maxHeight = inithi + (vertvel * vertvel) / (grav * 2);
    cout << maxHeight << " meters \n";
    return maxHeight;

}

void toDoList() {
    string adder;
    int choice;
    deque<string> todo = {};
    while (true) {
        cout << "\nWhat would you like to do: \n";
        cout << "1. Add to the list\n";
        cout << "2. Remove top task\n";
        cout << "3. Remove bottom task\n";
        cout << "4. clear all tasks\n";
        cout << "5. Print current list\n";
        cout << "6. Quit\n\n";
        cin >> choice;
        if (choice == 6) {
            break;
        }
        switch (choice) {
        case(1):
            cout << "What would you like to add to the list: \n";
            cin >> adder;
            todo.push_back(adder);
            break;
        case(2):
            if (todo.empty()) {
                cout << "There is nothing on the list\n";
            }
            else {
                todo.pop_front();
            }
            break;
        case(3):
            if (todo.empty()) {
                cout << "There is nothing on the list\n";
            }
            else {
                todo.pop_back();
            }
            break;
        case(4):
            if (todo.empty()) {
                cout << "There is nothing on the list\n";
            }
            else {
                todo.clear();
            }
        case(5):
            showdq(todo);
            break;
        default:
            cout << "Please enter valid option\n";
            
        }

    }
}

void doEquations() {
    while (true) {
        int choice;
        cout << "What do you want to do? \n 1. max Height of object thrown up given initial velocity \n 2. The distance traveled by an object given horizontal velocity and time in air \n 3. The vertical velicity of an object in the air after a given amount of time in the air \n 4. quit\n";
        cin >> choice;
        if (choice == 1) {
            maxHeight();
        }
        else if (choice == 2) {
            horDist();
        }
        else if (choice == 3) {
            vertVel();
        }
        else if (choice == 4) {
            break;
        }
        else {
            cout << "Enter a valid option";
        }
    }
}


int main()
{
    while (true) {
        int choice;
        cout << "What do you want to do? \n 1. To do list \n 2. phsics calculations \n 3. stop\n";
        cin >> choice;
        if (choice == 1) {
            toDoList();
        }
        else if (choice == 2) {
            doEquations();
        }
        else if (choice == 3) {
            break;
        }
        else {
            break;
        }
    }
    cout << "End of program";
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
