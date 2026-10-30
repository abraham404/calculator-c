#include <stdio.h>
#include <stdlib.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"


void operation(int *op){

    float result = 0;
    float a = 0, b = 0;

    switch(*op){

        case 1:
            int count = 0;
            float number;
            printf(YELLOW "--------------------------------------\n" RESET);
            printf(YELLOW "----------------SUMA------------------\n" RESET);
            printf(YELLOW "--------------------------------------\n" RESET);
            
            while(1){

                printf("Ingresa el número %d: ", count + 1);

                if(scanf("%f", &number) != 1){
                    printf("Entrada inválida.\n");
                    break;
                }

                if(number == 0.0f){
                    printf(GREEN "La suma es: %.2f\n"RESET, result);
                    break;
                }

                result += number;
                count++;
            }

            break;

        case 2:
           
            printf(BLUE "--------------------------------------\n" RESET);
            printf(BLUE "----------------RESTA-----------------\n" RESET);
            printf(BLUE "--------------------------------------\n" RESET);
            printf("Ingresa en número 1: ");
            scanf("%f", &a);
            printf("Ingresa en número 2: ");
            scanf("%f", &b);
            result = a - b;
            printf(GREEN "\nLa resta es: %.2f\n" RESET, result);

            break;
        case 3:

            printf(MAGENTA "--------------------------------------\n" RESET);
            printf(MAGENTA "------------MULTIPLICACION------------\n" RESET);
            printf(MAGENTA "--------------------------------------\n" RESET);
            printf("Ingresa en número 1: ");
            scanf("%f", &a);
            printf("Ingresa en número 2: ");
            scanf("%f", &b);
            result = a * b;
            printf(GREEN "\nLa Multiplicación es: %.2f\n"RESET, result);
            break;

        case 4:

            printf(RED "--------------------------------------\n" RESET);
            printf(RED "----------------DIVICION--------------\n" RESET);
            printf(RED "--------------------------------------\n" RESET);
            printf("Ingresa en número 1: ");
            scanf("%f", &a);
            printf("Ingresa en número 2: ");
            scanf("%f", &b);
            result = a / b;
            printf(GREEN "\nLa divición es: %.2f\n" RESET, result);
            break;
    }
    
}


int main(){
    int op;

    printf("----------------\n");
    printf("Calculadora\n");
    printf("----------------\n");
    printf("Por favor elija la operación\n\n");

    printf("1) Suma\n");
    printf("2) Resta\n");
    printf("3) Multiplicación\n");
    printf("4) Divición\n");
    printf("0) Salir\n");
    scanf("%d", &op);

    system("clear");
    operation(&op);



    return 0;
}