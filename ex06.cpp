#include <iostream>
using namespace std;

main() {

    unsigned int score = 5000;
    cout << "score: " << score << endl;

    score = score + 100;
    // score += 100;
    cout << "score: " << score << endl;

    int lives = 3;
    cout << "lives: " << lives << endl;

    lives = 3;
    lives++;
    cout << "lives: " << lives << endl;

    lives = 3;
    int bonus = ++lives * 10;
    cout << "lives, bonus: " << lives << ", " << bonus << endl;

    lives = 3;
    bonus = lives++ * 10;
    cout << "lives, bonus: " << lives << ", " << bonus << endl;

    // integer wrap around
    // jeśli dodamy do maksymalnej wartości danego typu, to licznik jest przekręcany i dostaniemy minimalną wartość danego typu
    score = 4294967295;
    cout << "\nscore: " << score << endl;
    ++score;
    cout << "score: " << score << endl;

    // wrap around działa również w drugą stronę, jeśli odejmiemy od minimalnej wartości, to dostaniemy maksymalną
    score = 0;
    score -= 1;
    cout << "score: " << score << endl;

    return 0;

}
