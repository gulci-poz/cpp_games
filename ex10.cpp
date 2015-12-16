#include <iostream>

using namespace std;

int main() {

    if(true) {
        cout << "this is always displayed" << endl;
    }

    if(false) {
        cout << "this is never displayed" << endl;
    }

    unsigned int score = 1000;

    if(score) {
        cout << "positive score, not zero" << endl;
    }

    if(score >= 250) {
        cout << "decent score" << endl;
    }

    if(score >=500) {
        cout << "great score" << endl;
    }

    if(score >= 1000) {
        cout << "impressive score" << endl;
    }

    return 0;

}
