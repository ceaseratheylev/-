#pragma once

#include <Card.h>

#ifndef Role_panel_H
#define Role_panel_H

extern int Health_Point_Limit;
extern int Health_Point;
extern int Magic_Point_Limit;
extern int Magic_Point;
extern int Stamina_Point_Limit;
extern int Stamina_Point;
extern int Sanity_Point_Limit;
extern int Sanity_Point;
extern short Anger_Point_Limit;
extern short Anger_Point;
extern short Hunger_Point_Limit;
extern short Hunger_Point;
extern short  Temperature_Point_Limit;
extern short  Temperature_Point;
extern long long Libido_Point_Limit;
extern long long Libido_Point;
extern short Excretory_Point_Limit;
extern short Excretory_Point;
float Luck_Point_Limit = 1.0;
extern float Luck_Point();

#endif 

#ifndef Situation_Judgment_H
#define Situation_Judgment_H
extern bool Advantage;
extern bool Disadvantageous;
#endif 

#ifndef Enter_Card_Battle_H
#define Enter_Card_Battle_H

extern double Card_Player_Identification() {
    return Health_Point / Health_Point_Limit;
}
#endif