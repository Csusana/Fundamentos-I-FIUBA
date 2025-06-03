//EJERCICIO 2 DEL PARCIAL 1
//Desarrolar ina func en c que reciba como parametro uan matriz ya cargada y su MaxLogico
//Devuelve una variable bool que indique si hay numero impar presente en la matriz

#include <stdio.h>
#include <stdbool.h>

typedef int Tvec;

bool validar_impar (int ml_f, int ml_c, Tvec matriz[ml_f][ml_c]){
    bool hay_impar = false;
    int i=0;
    int j=0;
    while (i<ml_f && !hay_impar){
        while (j<ml_c && !hay_impar){
            if (matriz[i][j] %2 != 0){
                hay_impar = true;
            }
            j++;   
        }
        i++;
    
    }
    return hay_impar;
}

void cargar_matriz(int ml_f, int ml_c, Tvec matriz[ml_f][ml_c]){
    int i=0;
    printf ("ingrese el numero en cada posicion: ");
    while (i< ml_f){
        int j=0;
        while (j< ml_c){
            printf ("ingrese posicion [%i][%i]: ", i,j);
            scanf("%i",&matriz[i][j]);
            j++;
        }
    i++;
    }
}


void cargar_ml (int *ml_f, int *ml_c){

    printf("ingrese cantidad FILA: \n");
    scanf("%i", ml_f);
    printf("ingrese cantidad COLUMNA: \n");
    scanf("%i", ml_c);
}

int main (){
    int ml_f, ml_c;
    bool hay_impar;

    cargar_ml (&ml_f,&ml_c);
    Tvec matriz [ml_f][ml_c];
    cargar_matriz (ml_f, ml_c,matriz);
    hay_impar = validar_impar(ml_f, ml_c,matriz);

    if (hay_impar){
        printf ("hay numero impar \n");   
    }else {
        printf ("no hay impar, TODO BIEN \n");
    }

    return 0;
}


