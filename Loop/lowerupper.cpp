#include <iostream>
using namespace std;
int main()
{
    int lower, upper;
    cout << "Enter  lower number: ";
    cin >> lower;
    cout << "Enter upper number: ";
    cin >> upper;
    if (lower % 2 == 0) {
        lower++;
    }
    while (lower <= upper) {
        switch (lower % 2) {
            case 1:
                cout <<"odd number: " <<lower<<endl;
                break;
        }
        lower += 2;
    }
    
    cout << endl;
    return 0;
}
