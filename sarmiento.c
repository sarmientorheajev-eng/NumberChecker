#include <stdio.h>
#include <string.h>
int main (){
    //check if the number is even or odd

    int number;
    char choice[10];
    do
    {
        printf("Enter any number: ");
        scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is an even number!", number);
    }else{
        printf("%d is an odd number!", number);
    }

    printf("\nDo you want to check another number? (Yes/No): ");
    scanf("%s", choice);

    
    }while(strcmp(choice, "Yes") == 0);
    printf("Thank you for using this program!");


return 0;   
}