#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    char grade;

    if (marks >= 90) grade = 'A';
    else if (marks >= 80) grade = 'B';
    else if (marks >= 70) grade = 'C';
    else if (marks >= 60) grade = 'D';
    else if (marks >= 50) grade = 'E';
    else grade = 'F';

    cout << "Grade: " << grade << endl;

    return 0;
}
