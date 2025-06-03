// Escribir un programa que solicite le ingreso de una serie de numeros
// por cada numero ingresado debe informar si es o no numero capicua
// debe validar q lo ingresado sea n.positivo. Termina cuando se ingresa 0

#include <stdio.h>
#include <stdbool.h>

bool Es_capicua (int numero_ingresado){
    int original = numero_ingresado;
    int invertido = 0;

    while(numero_ingresado > 0){
        int digito = numero_ingresado %10;
        invertido = invertido * 10 +digito;
        numero_ingresado /= 10; 

    }
    return original == invertido;
}


void solicitar_ingreso (int *numero_ingresado){
    
    printf("ingrese un numero(0 para terminar): ");
    scanf("%d", numero_ingresado );
}
    
void procesar_numero(int numero_ingresado){

    if (Es_capicua(numero_ingresado)){
        printf("el numero [%d] ES CAPICUA \n ", numero_ingresado);
    }else {
        printf("el numero [%d] NO ES CAPICUA \n ", numero_ingresado);
    };
}

int main (){
    int numero_ingresado ;

    
    solicitar_ingreso(&numero_ingresado);
    
    while (numero_ingresado != 0){

        if (numero_ingresado < 0){
            printf("MAL! vuelva a ingresar un numero(0 para terminar): ");
            scanf("%d", &numero_ingresado );
        }else if (numero_ingresado > 0){
            procesar_numero(numero_ingresado);
            solicitar_ingreso(&numero_ingresado);
        }
    }
    

    return 0;
}