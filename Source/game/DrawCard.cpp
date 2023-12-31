#include <Card.h>
#include <Fight.h>
#include <iostream>
#include <vector>
#include <ctime>
#include <random>
#include <cstdlib>
#include <algorithm>
long long Number_Of_Card_Groups() {
    return Desktop_Grid;
}
bool Card_Player_Skill_Ready = false;
const short Hand_Area_Maximum = (Desktop_Grid / 4)* -1 ;
std::vector<short> Hand_Area(Hand_Area_Maximum);
std::vector<int> drawnCards(Number_Of_Card_Groups(), 0);
std::vector<long long> Card_Groups_Stuff() {
    std::vector<long long> arr(Number_Of_Card_Groups());
    for (int i = 0; i < Number_Of_Card_Groups(); i++) {
        arr[i] = i + 1;
    }
    return arr;
}
int main() {
    short convertedValue = (short)Number_Of_Card_Groups();
    Run_Card_Groups = (short*)malloc(convertedValue * sizeof(short));
    if (Run_Card_Groups == NULL) {
        return 1;
    }
    std::vector<long long> values = Card_Groups_Stuff();
    for (int i = 0; i < values.size(); i++) {
        for (int j = 0; j < values[i]; j++) {
            Run_Card_Groups[i + j] = j + 1;
        }
    }

    free(Run_Card_Groups);
    return 0;
}
std::mt19937 rng(static_cast<unsigned int>(std::time(nullptr)));
int Random_Draw_Card() {
    std::uniform_int_distribution<int> distribution(1, Number_Of_Card_Groups());
    return distribution(rng);
}
int Card_Drawing_Mechanism_Selection(char switch_on) {
    int currentPrecedence = 0;
    int cardsDrawn = 0;
    switch (switch_on) {
    case 'SD':
        if (Card_Player_Skill_Ready) {
            while (cardsDrawn < Number_Of_Card_Groups()) {
                int highestPrecedenceIndex = -1;
                for (int j = 0; j < Number_Of_Card_Groups(); j++) {
                    if (drawnCards[j] == 0 && Card_Precedence == currentPrecedence) {
                        highestPrecedenceIndex = j;
                        break;  
                    }
                }
                if (highestPrecedenceIndex != -1) {
                    drawnCards[highestPrecedenceIndex] = 1;
                    Hand_Area[cardsDrawn] = highestPrecedenceIndex + 1;
                    cardsDrawn++;  
                }
                currentPrecedence++;  
            }
            Card_Player_Skill_Ready = false;
        }
        break;
    case 'HD':
        if (Card_Player_Identification() < 0.2) {
            while (cardsDrawn < Number_Of_Card_Groups()) {
                int highestPrecedenceIndex = -1;
                for (int j = 0; j < Number_Of_Card_Groups(); j++) {
                    if (drawnCards[j] == 0 && Card_Precedence == currentPrecedence) {
                        highestPrecedenceIndex = j;
                        break;  
                    }
                }
                if (highestPrecedenceIndex != -1) {
                    drawnCards[highestPrecedenceIndex] = 1;
                    Hand_Area[cardsDrawn] = highestPrecedenceIndex + 1;
                    cardsDrawn++;  
                }
                currentPrecedence++;  
            }
        }
        break;
    case 'RD': {
        for (int i = -1; i < (int)Hand_Area_Maximum; i--) {
            int drawnCardIndex;
            do {
                drawnCardIndex = Random_Draw_Card();
            } while (drawnCards[drawnCardIndex - 1] == 1); 
            drawnCards[drawnCardIndex - 1] = 1; 
            Hand_Area[i] = drawnCardIndex;
        }
        break;
    }
    default:
        break;
    }
    std::sort(Hand_Area.begin(), Hand_Area.end());
    return 0;
}
