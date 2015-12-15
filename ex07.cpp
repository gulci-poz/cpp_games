#include <iostream>
using namespace std;

int main() {

    const int ALIEN_POINTS = 150;
    int aliensKilled = 10;
    int score = aliensKilled * ALIEN_POINTS;
    cout << "score: " << score << endl;

    // enumeration - zbiór stałych unsigned int, nazywanych enumerators
    // są numerowane co 1, od 0
    enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
    // może przyjąć wartości NOVICE, EASY, NORMAL, HARD, UNBEATABLE, 0, 1, 2, 3 lub 4
    difficulty myDifficulty = EASY;

    // BOMBER_COST przyjmie poprzednią wartość + 1, tutaj: 26
    enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
    shipCost myShipCost = BOMBER_COST;

    cout << "\nTo upgrade my ship to a Cruiser will cost " << (CRUISER_COST - myShipCost) << " Resource Points.\n";

    return 0;

}
