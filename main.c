#include <stdio.h>
#include <stdlib.h>

//relational operators: > < >= <= == !=
//logical operators:&& || !
// control structures
// 1. selection/decision making/conditional - if

int menu();
int main()
{
    printf("\Welcome to Wema C Snack Shop!\n");
    menu();
    return 0;
}
int menu()  {
    int item;
    printf("\tToday's Menu\n");
    printf("1. Hamburger - Ksh. 50\n");
    printf("2. Samosa -  Ksh. 50\n");
    printf("3. Coffee - Ksh. 40\n");
    printf("Enter Item No: ");
    scanf("%d",&item);
    if(item > 0 && item <= 3){
        printf("item added to cart\n");
    }
    else{
        printf("invalid item");
        menu();
    }
}

