#include <Card.h>
#include <Fight.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

short int Card_Groups_Stuff(short arr[]) {
    for (short i = 0; i < Number_Of_Card_Groups; i++) {
        arr[i] = i + 1;
    }
    return 0;
}

void Initialize_Random() {
    srand((unsigned short)time(NULL));
}

short Random_Draw_Card() {
    return rand() % Number_Of_Card_Groups + 1;
}

int Card_Drawing_Mechanism_Selection() {

    switch (switch_on)
    {
        Initialize_Random();
    case 'S':
        if (Draw_Cards_Skill()) {

        }
        else {
            break;
        }
        break;
    case 'H':
        break;
    case 'R': {
        short arr[Number_Of_Card_Groups];
        Card_Groups_Stuff(arr); 

        short drawnCards[Number_Of_Card_Groups] = { 0 }; // ������飬0��ʾδ��ȡ��1��ʾ�ѳ�ȡ

        for (int i = 0; i < Hand_Area; i++) {
            short DrawnCard;
            do {
                DrawnCard = Random_Draw_Card();
            } while (drawnCards[DrawnCard - 1] == 1); // ����Ѿ���ȡ��������ȡ

            drawnCards[DrawnCard - 1] = 1; // ���Ϊ�ѳ�ȡ

    }
        break;
    }

    return 0;
}