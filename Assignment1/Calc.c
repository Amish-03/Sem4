#include <stdio.h>

int main() {
    char operation;
    float num1, num2, result;


    FILE *outputFile;
    outputFile = fopen("Calc.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file!\n");
        return 1;
    }


    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);


    switch(operation) {
        case '+':
            result = num1 + num2;
            fprintf(outputFile, "Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            fprintf(outputFile, "Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            fprintf(outputFile, "Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                fprintf(outputFile, "Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                fprintf(outputFile, "Error: Division by zero\n");
            }
            break;
        default:
            fprintf(outputFile, "Error: Invalid operation\n");
    }


    fclose(outputFile);

    printf("Calculation completed. Check 'Calc.txt' for the result.\n");

    return 0;
}
