#include <iostream>

using namespace std;

int main()
{
    char lastSector;
    int firstSectorRows;
    int oddRowSeats;
    cin >> lastSector >> firstSectorRows >> oddRowSeats;

    int sectors = 0;
    int seats = 0;

    for (char sector = 'A'; sector <= lastSector; sector++) {
        sectors++;
        for (int rows = 1; rows <= firstSectorRows + sectors - 1; rows++) {
            int isEvenRow = 0;
            if (rows % 2 == 0) {
                isEvenRow = 2;
            }
            for (char seat = 'a'; seat <= 'a' + oddRowSeats - 1 + isEvenRow; seat++) {
                cout << sector << rows << seat << endl;
                seats++;
            }
        }
    }

    cout << seats << endl;

    return 0;
}
