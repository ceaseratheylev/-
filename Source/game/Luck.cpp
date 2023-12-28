#include <Fight.h>
#include <cstdlib>  
#include <ctime>    

float Generate_Random_Luck() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int RandomValue = rand();
    float NormalizedValue = static_cast<float>(RandomValue) / RAND_MAX;
    return NormalizedValue;
}

float Luck_Point() {  
    float Generated_Luck = Generate_Random_Luck();
    if (Generated_Luck > Luck_Point_limit) {
        return Luck_Point_limit;
    }
    return Generated_Luck;
}