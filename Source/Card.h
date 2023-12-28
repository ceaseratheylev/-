#pragma once

#include <Fight.h>

// Number of card groups
#ifndef Number_Of_Card_Groups
#define Number_Of_Card_Groups
extern long long Number_Of_Card_Groups;

extern long long Desktop_Grid() {
    return Number_Of_Card_Groups;
}
#endif 

// Direction values
#ifndef Direction_Value
#define Direction_Value

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

extern long long Direction_Value() {
    return East + South + West + North + Southeast + Southwest + Northwest + Northeast + Back + Top + Other_directions;
}
#endif 

// Card attributes
#ifndef Card_attribute
#define Card_attribute

extern char Card_Name;
extern char Card_Background_Story;
extern char Card_Acquisition_Method;
extern char Card_Grade;
extern long long Card_Price;
extern short Card_Users;
extern char Card_Proprietor;
extern short Card_Precedence;
extern short Card_Limit;
extern bool Card_Removal;
extern bool Card_Skin;

#endif

#ifndef Draw_Cards
#define Draw_Cards

extern short Run_Card_Identification;
extern short Run_Card_Groups[Number_Of_Card_Groups];
extern short Hand_Area() {
    return Desktop_Grid() /4;
};

#endif

#ifndef CardPrecedence
#define CardPrecedence



#endif

#ifndef Card_Fight
#define Card_Fight

extern long long Remaining_Grid_Occupancy;
extern long long Grid_Occupation() {
    return Desktop_Grid() - Remaining_Grid_Occupancy;
}
extern bool Draw_Cards_Skill

#endif