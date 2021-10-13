#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int initial_validation(string number)
{
     if (number == "exit")
            return 0;
     else if (!isNumberString(number)) 
            cout << "typo mistake";
    return 1;
}

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

    while (true) {

        cout << "Please enter a CC number to validate: ";
        cin >> number;

       if(initial_validation(number)==true)
       {
           
        int len = number.length();
        int even_sum = 0;
        int i;


        for (i = len - 2; i >= 0; i = i - 2)
        {
            int dbl = ((number[i] - 48) * 2);
            if (dbl > 9) {
                dbl = (dbl / 10) + (dbl % 10);
            }
           even_sum += dbl;
        }

        for (i = len - 1; i >= 0; i = i - 2)
            even_sum += (number[i] - 48);

        cout << even_sum % 10 == 0 ? "Valid!\n" : "Invalid!\n";

        continue;
    }

    return 0;
}
