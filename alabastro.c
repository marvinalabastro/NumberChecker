#include <stdio.h>
#include <string.h>
int main (){
    // Check if the number is even or odd
    int number;
    char choice[10];

    do{
        printf("Enter Any Number: ");
        scanf("%d", &number);
    if(number % 2 == 0){
        printf("%dEven number!", number);
    }else{
        printf("%d odd number!", number);
    }

        printf("\nDo you want to check another number? (yes/no: )");
        printf("%s", choice);

    }while (strcmp(choice, "yes") == 0);
    printf("Thankyou for using the program!");
    
    return 0;
}    