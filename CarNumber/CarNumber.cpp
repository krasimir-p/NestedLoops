#include <iostream>

using namespace std;

int main()
{
    int startDigit, endDigit;
    cin >> startDigit >> endDigit;

    for (int i = 1111; i <= 9999; i++) {
        int d1, d2, d3, d4;
        int  num = i;
        d1 = num % 10;
        num /= 10;
        d2 = num % 10;
        num /= 10;
        d3 = num % 10;
        d4 = num / 10;
        if (startDigit <= d1 && d1 <= endDigit && startDigit <= d2 && d2 <= endDigit && startDigit <= d3 && d3 <= endDigit && startDigit <= d4 && d4 <= endDigit) {
            if (d1 % 2 + d4 % 2 == 1) {
                if (d4 > d1) {
                    if ((d2 + d3) % 2 == 0) {
                        cout << d4 << d3 << d2 << d1 << " ";
                    }
                }
            }
        }
    }
    return 0;
}
