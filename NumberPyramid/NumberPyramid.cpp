#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int counter = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << counter << " ";
            counter++;
            if (counter > n) {
                return 0;
            }
        }
        cout << endl;
    }
    return 0;
}
