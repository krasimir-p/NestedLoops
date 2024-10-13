#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1111; i <= 9999; i++) {
        bool isSpecial = true;
        int num = i;

        while (num > 0) {
            int digit = num % 10;
            num /= 10;
            if (digit == 0) {
                isSpecial = false;
                break;
            }
            if (n % digit != 0) {
                isSpecial = false;
                break;
            }
        }

        if (isSpecial) {
            cout << i << " ";
        }
    }
    return 0;
}
