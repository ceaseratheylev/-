#pragma once

#include <Card.h>

#ifndef Role_panel
#define Role_panel

extern int Health_Point_limit;
extern int Health_Point;
extern int Magic_Point_limit;
extern int Magic_Point;
extern int Stamina_Point_limit;
extern int Stamina_Point;
extern int Sanity_Point_limit;
extern int Sanity_Point;
extern short Anger_Point_limit;
extern short Anger_Point;
extern short Hunger_Point_limit;
extern short Hunger_Point;
extern short  Temperature_Point_limit;
extern short  Temperature_Point;
extern long long Libido_Point_limit;
extern long long Libido_Point;
extern short Excretory_Point_limit
extern short Excretory_Point;
float Luck_Point_limit = 1.0;
extern float Luck_Point();

#endif 

#ifndef Situation_Judgment
#define Situation_Judgment
extern bool Advantage;
extern bool Disadvantageous;
#endif 

#ifndef Enter_Card_Battle
#define Enter_Card_Battle

extern short Card_Player_Identification;

#endif