#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    num3 = num1 + num2;
    
    printf("The sum of %d and %d is %d.", num1, num2, num3);
    
    return 0;
}
