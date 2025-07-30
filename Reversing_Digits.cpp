// Name: Aditya Sinha 
// PRN: 24070123006
//Batch: EnTc A1

#include <iostream>
using namespace std;

int main() {
    int prn;
    cout << "Enter the last four digits of your PRN number: ";
    cin >> prn;

    cout << "Reversed digits: ";
    while (prn != 0) {
        cout << prn % 10;
        prn = prn / 10;
    }

    cout << endl;
    return 0;
}

/* OUTPUT
Enter the last four digits of your PRN number: 3006
Reversed digits: 6003 */
