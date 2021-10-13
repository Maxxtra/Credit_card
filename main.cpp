#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

bool isNumberString(const string& s) {
    int len = s.length();
    int i;
    for (i = 0; i < len; i++)
        if (s[i] < '0' || s[i] > '9')
            return false;
    return true;
}

int main() {
    string number;
    int i;

    while (true) {

        cout << "Please enter a CC number to validate: ";
        cin >> number;

        if (ccNumber == "exit")
            break;

        else if (!isNumberString(number)) {
            cout << "typo mistake";
            continue;
        }

        int len = ccNumber.length();
        int doubleEvenSum = 0;


        for (i = len - 2; i >= 0; i = i - 2) {
            int dbl = ((ccNumber[i] - 48) * 2);
            if (dbl > 9) {
                dbl = (dbl / 10) + (dbl % 10);
            }
            doubleEvenSum += dbl;
        }


        for (i = len - 1; i >= 0; i = i - 2)
            doubleEvenSum += (ccNumber[i] - 48);


        cout << (doubleEvenSum % 10 == 0 ? "Valid!" : "Invalid!") << endl;

        continue;
    }

    return 0;
}
