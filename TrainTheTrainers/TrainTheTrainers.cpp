#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int juryMembers;
    cin >> juryMembers;
    

    string presentation;
    double assessment, sumAssessments=0;
    int presentationNumbers = 0;
 
    cout << fixed << setprecision(2);

    while (true) {
        cin.ignore();
        getline(cin, presentation);

        if (presentation == "Finish") {
            break;
        }

        double sumPresentationAssessments = 0;

        for (int i = 1; i <= juryMembers; i++) {
            cin >> assessment;
            sumPresentationAssessments += assessment;
        }

        cout << presentation << " - " << sumPresentationAssessments / juryMembers << "." << endl;
        
        sumAssessments += sumPresentationAssessments;
        presentationNumbers++;
    }
   
    cout << "Student's final assessment is " << sumAssessments / juryMembers / presentationNumbers << "." << endl;
    return 0;
}
