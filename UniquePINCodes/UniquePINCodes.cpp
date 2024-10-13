#include <iostream>

using namespace std;

int main()
{
    int firstDigit, secondDigit, thirdDigit;
    cin >> firstDigit >> secondDigit >> thirdDigit;

    for (int fd = 1; fd <= firstDigit; fd++) {
        if (fd % 2 != 0) {
            continue;
        }
        for (int sd = 1; sd <= secondDigit; sd++) {
            if (sd == 1 || sd == 4 || sd == 6 || sd == 8 || sd==9) {
                continue;
            }
            for (int td = 1; td <= thirdDigit; td++) {
                if (td % 2 != 0) {
                    continue;
                }
                cout << fd << " " << sd << " " << td << endl;
            }
        }
    }
    return 0;
}
