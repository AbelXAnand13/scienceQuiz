#include <iostream>
#include <string>
#include <stdio.h>
#include <thread>
using namespace std;
int main() {
    string name;
    int score = 0;
    int ans1;
    int ans2;
    int ans3;
    cout << "Please enter your name\n";
    cin >> name;
    cout << "Welcome " << name << "\n You will have to correctly answer 3 questions, for each question you answer correctly, you will recieve a point.";
    cout << "| What is the force that keeps us in the ground?\n1) Friction\n2) Gravity\n3) Push\n4) Drag\n";
    cin >> ans1;
    if (ans1 == 2) {
        score = score + 4;
    }
    else {
        score--;
    }
    cout << "|| What dwarf planet was thought to be a planet until 2006?\n1) The Moon\n2) Europa\n3) Pluto\n4) Makemake\n";
    cin >> ans2;
    if (ans2 == 3) {
        score = score + 4;
    }
    else {
        score--;
    }
    cout << "||| What gas is essential for us to breathe?\n1) Helium\n2) Hydrogen\n3) Carbon\n4) Oxygen\n";
    cin >> ans3;
    if (ans3 == 4) {
        score = score + 4;
    }
    else {
        score--;
    }
    cout << "You Scored " << score << "/12\n";
}
