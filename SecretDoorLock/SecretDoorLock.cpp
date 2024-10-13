#include <iostream>

using namespace std;

int main()
{
    int firstDigitLimit;
    int secondDigitLimit;
    int thirdDigitLimit;
    cin >> firstDigitLimit >> secondDigitLimit >> thirdDigitLimit;

    for (int fd = 2; fd <= firstDigitLimit; fd+=2) {
        for (int sd = 2; sd <= secondDigitLimit; sd++) {
            if (sd == 2 || sd == 3 || sd == 5 || sd == 7) {
                for (int td = 2; td <= thirdDigitLimit; td += 2) {
                    cout << fd << " " << sd << " " << td << endl;
                }
            }
     
        }
    }

    return 0;
}
