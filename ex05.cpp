#include <iostream>
using namespace std;

main() {

    int score;
    double distance;
    char playAgain;
    bool shieldsUp;
    short lives, aliensKilled;

    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    aliensKilled = 10;

    double engineTemp = 6572.89;

    cout << "\nscore" << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;
    cout << "lives: " << lives << endl;
    cout << "aliensKilled: " << aliensKilled << endl;
    cout << "engineTemp: " << engineTemp << endl;

    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;

    typedef unsigned short int ushort;
    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;

    // short - zmniejsza liczbę możliwych wartości i przestrzeń do zapisu liczby, działa dla int
    // long - działa dla int i double
    // signed, unsigned - tylko dla int, zmienia się zakres wartości
    // signed - domyślnie
    // unsigned - tylko wartości dodatnie
    // short int, long int - po prostu short lub long

    return 0;

}
