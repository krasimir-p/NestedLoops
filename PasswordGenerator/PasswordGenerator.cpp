#include <iostream>

using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    for (int fd = 1; fd <= n; fd++) {
        for (int sd = 1; sd <= n; sd++) {
            for (char fLetter = 'a'; fLetter <= 97+l-1; fLetter++) {
                for (char sLetter = 'a'; sLetter <= 97+l-1; sLetter++) {
                    for (int td = 1; td <= n; td++) {
                        if (td > fd && td > sd) {
                            cout << fd << sd << fLetter << sLetter << td << " ";
                        }
                    }
                }
            }
        }
    }
    return 0;
}
