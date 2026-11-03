#include <stdio.h>
int main (){
    // Check if the number is even or odd
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("%dEven number!", number);
    }else{
        printf("%d odd number!", number);
    }
    return 0;
}