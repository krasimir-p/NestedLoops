#include <iostream>

using namespace std;

int main()
{
    char startChar, endChar, missedChar;
    cin >> startChar >> endChar >> missedChar;

    int counter = 0;

    for (char firstChar=startChar; firstChar <= endChar; firstChar++) {
        if (firstChar == missedChar) {
            continue;
        }
        for (char secondChar = startChar; secondChar <= endChar; secondChar++) {
            if (secondChar == missedChar) {
                continue;
            }
            for (char thirdChar = startChar; thirdChar <= endChar; thirdChar++) {
                if (thirdChar == missedChar) {
                    continue;
                }
                cout << firstChar << secondChar << thirdChar << " ";
                counter++;
            }
        }
    }

    cout << counter;

    return 0;
}
