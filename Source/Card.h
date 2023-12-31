#pragma once

#include <Fight.h>
#include <cstddef>
#include <vector>
#include <ctime>
#include <random>

// Number of card groups
#ifndef NUMBER_OF_CARD_GROUPS_H
#define NUMBER_OF_CARD_GROUPS_H
extern long long Desktop_Grid;
extern long long Number_Of_Card_Groups();
#endif // NUMBER_OF_CARD_GROUPS_H

// Direction values
#ifndef Direction_Value_H
#define Direction_Value_H

extern short CardLevel;
extern long long East;
extern long long South;
extern long long West;
extern long long North;
extern long long Southeast;
extern long long Southwest;
extern long long Northwest;
extern long long Northeast;
extern long long Top;
extern long long Back;
extern long long Other_Directions;
extern long long Direction_Value();
#endif 

// Card attributes
#ifndef Card_attribute_H
#define Card_attribute_H

extern char Card_Name;
extern char Card_Background_Story;
extern char Card_Acquisition_Method;
extern char Card_Grade;
extern long long Card_Price;
extern short Card_Users;
extern char Card_Proprietor;
extern short Card_Precedence;
extern short Card_Limit;
extern int Card_Removal;
extern short Card_Skin;
extern bool Card_Wish;

#endif

#ifndef Draw_Cards_H
#define Draw_Cards_H

extern std::vector<long long> Card_Groups_Stuff();
extern short Run_Card_Identification;
extern short* Run_Card_Groups = NULL;
extern bool Card_Player_Skill_Ready;
extern short Hand_Area_Maximum;
extern std::vector<short> Hand_Area;

#endif

#ifndef Card_Precedence_H
#define Card_Precedence_H



#endif

#ifndef Card_Fight_H
#define Card_Fight_H

extern int Random_Draw_Card();
extern long long Remaining_Grid_Occupancy;
extern long long Grid_Occupation() {
    return Desktop_Grid - Remaining_Grid_Occupancy;
}
extern bool Draw_Cards_Skill;
extern short Player_Selected_Identification;
#endif

#ifndef Card_Skill_H
#define Card_Skill_H

extern bool Card_Skill_Visibility;
extern short Card_Skill_Type;
extern short Card_Normal_Skill_Identification;

#endif
