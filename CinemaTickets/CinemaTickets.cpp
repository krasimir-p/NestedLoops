#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string movieName;
    string type;
    int studentTickets = 0, standardTickets = 0, kidTickets = 0;
    
    cout << fixed << setprecision(2);

    while (true) {
        getline(cin, movieName);
        if (movieName == "Finish") {
            break;
        }
        
        int seats;
        cin >> seats;

        int movieTickets = 0;
        
        for (int i = 1; i <= seats; i++) {
            cin >> type;
            if (type == "End") {
                break;
            }
            
            movieTickets++;
            
            if (type == "student") {
                studentTickets++;
            }
            else if (type == "standard") {
                standardTickets++;
            }
            else if (type == "kid") {
                kidTickets++;
            }
        }
        cin.ignore();

        cout << movieName << " - " << static_cast<double>(movieTickets) / seats * 100 << "% full." << endl;

    }

    int totalTickets = studentTickets + standardTickets + kidTickets;
    cout << "Total tickets: " << totalTickets << endl;
    cout << static_cast<double>(studentTickets) / totalTickets * 100 << "% student tickets." << endl;
    cout << static_cast<double>(standardTickets) / totalTickets * 100 << "% standard tickets." << endl;
    cout << static_cast<double>(kidTickets) / totalTickets * 100 << "% kids tickets." << endl;

    return 0;
}
