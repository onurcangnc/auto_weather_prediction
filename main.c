#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define FORMULA_CONST1 32
#define FORMULA_CONST2 1.8

int main(void) {
    
    double    fheit, celcs;
    
    printf("Enter the temperature by Fahrenheit:  ");
    scanf(" %lf", &fheit);

    celcs = (fheit - FORMULA_CONST1) / FORMULA_CONST2;
    
    printf("\n%.0f fahrenheit equals to %.2f centigrate\n", fheit, celcs);
    
    
    if (celcs >= -40 && celcs < 0 )
        printf("\nVery Cold\n\n");
    
    else if (celcs >= 0 && celcs < 10)
        printf("\nCold\n\n");
    
    else if (celcs >= 10 && celcs < 20)
        printf("\nNormal\n\n");
    
    else if (celcs >= 20 && celcs < 30)
        printf("\nHot\n\n");
    
    else if (celcs >= 30 && celcs < 50)
        printf("\nVery Hot\n\n");
    
    else
        printf("\nOut of Range\n\n");
    
    
    return (0);
}
