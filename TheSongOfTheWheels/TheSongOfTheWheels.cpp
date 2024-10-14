#include <iostream>

using namespace std;

int main()
{
    int check;
    cin >> check;
    
    int a, b, c, d;
    int counter = 0;
    int password;

    for (int i = 1111; i <= 9999; i++) {
        int num = i;
        d = num % 10;
        num /= 10;
        c = num % 10;
        num /= 10;
        b = num % 10;
        a = num / 10;
        if (a * b + c * d == check) {
            if (a < b) {
                if (c > d) {
                    if (a != 0 && b != 0 && c != 0 && d != 0) {
                        counter++;
                        if (counter == 4) {
                            password = i;
                        }
                        cout << i << " ";
                    }
                }
            }
        }
    }
    
    if (counter >= 4) {
        cout << endl << "Password: " << password << endl;
    }
    else {
        cout << endl << "No!" << endl;
    }
    
    return 0;
}
