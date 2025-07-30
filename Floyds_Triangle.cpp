// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 6

#include <iostream>
using namespace std;

int main() {
    int rows, num = 1;

    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}

/* OUTPUT

Enter the number of rows for Floyd's Triangle: 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/
