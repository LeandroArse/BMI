#include <stdio.h>

int main(void) {
    float peso, altura, bmi;

    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    if (peso <= 0 || altura <= 0) {
        printf("Error: el peso y la altura deben ser mayores que cero.\n");
        return 1;
    }

    bmi = peso / (altura * altura);

    printf("\nSu índice de masa corporal es: %.2f\n", bmi);

    printf("Categoría: ");
    if (bmi < 18.5) {
        printf("Bajo peso\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Peso normal\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("Sobrepeso\n");
    } else if (bmi >= 30.0) { 
        printf("Obesidad\n");
    }

    printf("\nÍndice\t\tCondición\n");
    printf("-----------------------------\n");
    printf("<18.5\t\tBajo peso\n");
    printf("18.5 - 24.9\tNormal\n");
    printf("25.0 - 29.9\tSobrepeso\n");
    printf(">=30.0\t\tObesidad\n");

    return 0;
}
