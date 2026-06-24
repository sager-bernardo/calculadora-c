#include <stdio.h>

int main(){
    double option, x, y, result;
    char operator, new = 'y';

    printf("====================\n");
    printf("Simple Calculator \n");
    printf("====================\n");
    while (new == 'y'){
        printf("Select an operation: \n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n 5. Exit\n Option: ");
        scanf("%lf", &option);

        if (option == 1){
            operator = '+';
            printf("Enter the first number: ");
            scanf("%lf", &x);
            printf("Enter the second number: ");
            scanf("%lf", &y);
            result = x + y;
            printf("Result: %.2lf %c %.2lf = %.2lf\n", x, operator, y, result);

        } else if (option == 2){
            operator = '-';
            printf("Enter the first number: ");
            scanf("%lf", &x);
            printf("Enter the second number: ");
            scanf("%lf", &y);
            result = x - y;
            printf("Result: %.2lf %c %.2lf = %.2lf\n", x, operator, y, result);

        } else if (option == 3){
            operator = '*';
            printf("Enter the first number: ");
            scanf("%lf", &x);
            printf("Enter the second number: ");
            scanf("%lf", &y);
            result = x * y;
            printf("Result: %.2lf %c %.2lf = %.2lf\n", x, operator, y, result);

        } else if (option == 4){
            operator = '/';
            printf("Enter the first number: ");
            scanf("%lf", &x);
            printf("Enter the second number: ");
            scanf("%lf", &y);
            if (y == 0){
                printf("Error: Division by zero is not allowed.\n");
            }
            else {
                result = x / y;
                printf("Result: %.2lf %c %.2lf = %.2lf\n", x, operator, y, result);
            }
        } else if (option == 5){
            break;
        } else {
            printf("Invalid value! Please try again.\n");
        }
        do {
            printf("Do you want to perform another operation? (y/n): ");
            scanf(" %c", &new);
            if (new != 'y' && new != 'n'){
                printf("Invalid response. Please type 'y' for yes or 'n' for no.\n");
            }
        }
        while (new != 'y' && new != 'n' && new != 'Y' && new != 'N');
    } 

    printf("Thank you for using the calculator! See you next time.\n");
    
    return 0;
}
