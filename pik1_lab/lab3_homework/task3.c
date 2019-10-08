#include <stdio.h>

int main()
{
    float num;
    
    scanf("%f", &num);
    
    int choice;
    scanf("%d", &choice);
    
    if(choice == 1){
        num /= 3.28;
        printf("distance in meters: %.2f", num);
        return 0;
    }
    if(choice == 2){
        num *= 3.28;
        printf("distance in feets: %.2f", num);
    }
    return 0;
}
