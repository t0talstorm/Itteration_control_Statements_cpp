// Name: Aditya Sinha 
// PRN: 24070123006
//Batch: EnTc A1

#include <iostream>
#include <string>
using namespace std;

int main() {
    string set_pass, entered_pass;
    int Cap = 0, Num = 0, Special = 0;

    string spchara = "!@#$%^&*()_+:{}[]><?,.";
    string num = "1234567890";
    string cap = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  
    while (Cap == 0 || Num == 0 || Special == 0) {
        cout << "\nSet password: ";
        cin >> set_pass;

        Cap = Num = Special = 0;

        for (int i = 0; set_pass[i] != '\0'; i++) {
            if (cap.find(set_pass[i]) != string::npos) Cap = 1;
            if (num.find(set_pass[i]) != string::npos) Num = 1;
            if (spchara.find(set_pass[i]) != string::npos) Special = 1;
        }

        if (Cap == 0 || Num == 0 || Special == 0) {
            cout << "Password must contain at least:\n";
            if (Cap == 0) cout << "- One Capital Letter\n";
            if (Num == 0) cout << "- One Number\n";
            if (Special == 0) cout << "- One Special Character\n";
        } else {
            cout << "Password is set successfully.\n";
        }
    }


    cout << "\nEnter password: ";
    cin >> entered_pass;

    if (entered_pass == set_pass) {
        cout << "System Unlocked\n";
    } else {
        cout << "Incorrect Password\n";
    }

    return 0;
}
/* OUTPUT
Set password: Hello@1234
Password is set successfully.

Enter password: Hello@1234
System Unlocked
*/
