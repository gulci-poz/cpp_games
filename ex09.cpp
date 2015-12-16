#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    float score1 = 0;
    float score2 = 0;
    float score3 = 0;
    float average = 0;

    cout << "Enter score no1: ";
    cin >> score1;
    cout << "Enter score no2: ";
    cin >> score2;
    cout << "Enter score no3: ";
    cin >> score3;

    average = (score1 + score2 + score3) / 3.0;
    cout << "Average score is " << average << endl;

    return 0;

}
