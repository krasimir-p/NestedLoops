#include <iostream>

using namespace std;

int main()
{
    int sum;
    cin >> sum;

    int n = 0;
    /*
        for (int x1 = 0; x1 <= sum; x1++) {
            for (int x2 = 0; x2 <= sum; x2++) {
                for (int x3 = 0; x3 <= sum; x3++) {
                    if (x1 + x2 + x3 == sum) {
                        n++;
                    }
                }
            }
        }
    */

    for (int x1 = 0; x1 <= sum; x1++) {
        for (int x2 = x1; x2 <= sum; x2++) {
            n++;
        }
    }
        cout << n << endl;

    return 0;
}
