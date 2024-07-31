#include <iostream>
using namespace std;

int main() {
    char gender;
    int age;
    int pension = 0;

    cout << "Enter gender (m/f): ";
    cin >> gender;
    cout << "Enter age: ";
    cin >> age;

    if (gender == 'm' || gender == 'M') {
        if (age >= 90) {
            pension = 4000;
        } else if (age >= 60) {
            pension = 6000;
        } else {
            pension = 0;
        }
    } else if (gender == 'f' || gender == 'F') {
        if (age >= 90) {
            pension = 3000;
        } else if (age >= 60) {
            pension = 5000;
        } else {
            pension = 0;
        }
    } else {
        cout << "Invalid gender input." << endl;
        return 1;
    }

    cout << "The pension is: " << pension << endl;

    return 0;
}
