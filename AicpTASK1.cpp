#include <iostream>
#include <string>
using namespace std;

const int MAX_PUPILS = 5;

int main() {


    double weights[MAX_PUPILS], weightDifferences[MAX_PUPILS];
    string names[MAX_PUPILS];

    cout << " ENTER NAMES AND WEIGHT FOR " << MAX_PUPILS << " PUPILS\n";

    for (int i = 0; i < MAX_PUPILS; ++i) {
        cout << "Name for pupil " << i + 1 << ": ";
        cin >> names[i];

        cout << "Weight for " << names[i] << " (in kg): ";
        cin >> weights[i];

        while (weights[i] < 0) {
            cout << "Invalid weight. Enter a valid weight: ";
            cin >> weights[i];
        }

        cout<<" "<<endl;
    }

    cout<<"ENTER WEIGHTS ON THE LAST DAY:"<<endl;

    for (int i = 0; i < MAX_PUPILS; ++i) {
        cout << names[i] << "'s weight (in kg): ";
        cin >> weightDifferences[i];
        weightDifferences[i] -= weights[i];
    }


    cout << "\nPUPILS WITH A WEIGHT DIFFERENCE < 2.5 kg:\n";

    for (int i = 0; i < MAX_PUPILS; ++i) {
        if (abs(weightDifferences[i]) < 2.5) {
            cout  << names[i] << " has a difference of " << weightDifferences[i] << " kg " <<endl;
        }
    }

    cout<<" "<<endl;

    cout << "\nPUPILS WITH A WEIGHT DIFFERENCE > 2.5 kg:\n";

    for (int i = 0; i < MAX_PUPILS; ++i) {
        if (abs(weightDifferences[i]) > 2.5) {
            string message = (weightDifferences[i] > 0) ? "RISE" : "FALL";
            cout << names[i] << " has a difference of " << weightDifferences[i] << " kg, which is " << message << "\n";
        }
    }

    return 0;
}
