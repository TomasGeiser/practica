#include <stdio.h>
#include <stdlib.h>
float suma(float a,float b);
float resta(float a,float b);
float division(float a,float b);
float multiplicacion(float a,float b);
int main()
{
        char elegir;
        float x,y;
        char salir = "n";
    do
     {
        printf("ingrese el primer operando:");
        scanf("%f",&x);
        printf("ingrese el segundo operando:");
        scanf("%f",&y);
        fflush(stdin);
        system("cls");
        fflush(stdin);
        system("cls");
        printf("\t.Menu opciones.");
        printf("\nOperador 1:%.2f",x);
        printf("\nOperador 2:%.2f",y);
        printf("\n1.Sumar:");
        printf("\n2.Restar:");
        printf("\n3.Dividir:");
        printf("\n4.Multiplicar:");
        printf("\n5.Factorial:");
        printf("\n6.Salir:");
        printf("\nIndique una opcion:");
        elegir = getchar();


        switch(elegir)
        {
            case '1':
                printf("Ingreso sumar");
                float sumar = suma(x,y);
                break;
            case '2':
                printf("Ingreso restar");
                float restar = resta(x,y);
                break;
            case '3':
                printf("Ingreso dividir");
                float dividir = division(x,y);
                break;
            case '4':
                printf("Ingreso multiplicar");
                float multiplicar = multiplicacion(x,y);
                break;
        }
    }while( salir == "n");
        return 0;
}

float suma(float a,float b)
{
    float resultado;
    resultado = a + b;
    printf("\nEl resultado es:%.2f",resultado);
    return resultado;
}
float resta(float a,float b)
{
    float resultado;
    resultado = a - b;
    printf("\nEl resultado es:%.2f",resultado);
    return resultado;
}
float division(float a,float b)
{
    float resultado;
    resultado = a/b;
    printf("\nEl resultado es:%.2f",resultado);
    return resultado;
}
float multiplicacion(float a,float b)
{
    float resultado;
    resultado = a*b;
    printf("\nEl resultado es:%.2f",resultado);
    return resultado;char elegir;
}


