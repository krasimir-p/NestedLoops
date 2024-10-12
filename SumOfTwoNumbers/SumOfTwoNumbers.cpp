#include <iostream>

using namespace std;

int main()
{
    int start, end, magicNumber;
    cin >> start >> end >> magicNumber;

    bool exit = false;
    int counter = 0;

    int x, y;

    for (x = start; x <= end; x++) {
        for (y = start; y <= end; y++) {
            counter++;
            if (x + y == magicNumber) {
                exit = true;
                break;
            }
        }
        if (exit) {
            break;
        }
    }

    if (exit) {
        cout << "Combination N:" << counter << " (" << x << " + " << y << " = " << magicNumber << ")" << endl;
    }
    else {
        cout << counter << " combinations - neither equals " << magicNumber << endl;
    }
    return 0;
}
