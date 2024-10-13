#include <iostream>

using namespace std;

int main()
{
    
    int a, b, maxNumberPasswords;
    cin >> a >> b >> maxNumberPasswords;

    int counter = 0;
    char A = '#', B = '@';

            for (int x = 1; x <= a; x++) {
                for (int y = 1; y <= b; y++) {
                    counter++;
                    if (counter > maxNumberPasswords) {
                        break;
                    }
                    cout << A << B << x << y << B << A << "|";
                    A++;
                    B++;
                    if (A > '7') {
                        A = '#';
                    }
                    if (B > '`') {
                        B = '@';
                    }
                }
            }
    return 0;
}
