#include <stdio.h>
#include <stdlib.h>

int CalculateBonus(int YearsWorked);

int main()
{
    int FelixBonus = CalculateBonus(23);
    int AntonBonus = CalculateBonus(21);
    int JockeBonus = CalculateBonus(46);
    int MimmiBonus = CalculateBonus(48);

    printf("Felix din bonus e: %d \n", FelixBonus);
    printf("Anton din bonus e: %d \n", AntonBonus);
    printf("Jocke din bonus e: %d \n", JockeBonus);
    printf("Mimmi din bonus e: %d \n", MimmiBonus);

    return 0;
}

int CalculateBonus(int YearsWorked){
    int bonus = YearsWorked * 250;

    if(YearsWorked < 10){
        bonus += 1000;
    }
    else if(YearsWorked > 10){
        bonus += 500;
    }

    return bonus;
}
