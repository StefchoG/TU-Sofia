#include <stdio.h>

int main()
{
    int choice;
    
    scanf("%d", &choice);
    
    if(choice == 0){
        printf("inside if body: %d", choice);
        return 0;
    }
    else if(choice == 1){
        printf("inside else body: %d", choice);
    }
    
    return 0;
}
