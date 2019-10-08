#include <stdio.h>

int main()
{
    float choice;
    scanf("%f", &choice);
    
    if(choice >= 0 && choice <= 2)
    printf("you entered value between 0 and 2: %.2f", choice);
    return 0;
}
