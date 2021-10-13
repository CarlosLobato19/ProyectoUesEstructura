#include <stdio.h>
#include <stdlib.h>
#include "LrArrays.h"

/*Cambio de variables*/
void cambioValorEntera(int *valor1, int *valor2) {
    int almacenador;
    almacenador = *valor1;
    *valor1 = *valor2;
    *valor2 = almacenador;
}

void cambioValorDouble(double *valor1, double *valor2) {
    double almacenador;
    almacenador = *valor1;
    *valor1 = *valor2;
    *valor2 = almacenador;
}

void cambioValorFloat(float *valor1, float *valor2) {
    float almacenador;
    almacenador = *valor1;
    *valor1 = *valor2;
    *valor2 = almacenador;
}

void cambioValorChar(char *valor1, char *valor2) {
    int almacenador;
    almacenador = *valor1;
    *valor1 = *valor2;
    *valor2 = almacenador;
}

/*Declararion de funciones Ordenar*/
int OrdenarEntero(int *array, size_t tamanio) {

    if (tamanio > 1) {
        for (int i = 0; i < tamanio; i++) {
            for (int j = 0; j < tamanio - 1; j++) {
                if (array[j] > array[j + 1]) {
                    cambioValorEntera(&array[j], &array[j + 1]);
                }
            }
        }
        return 1;
    }

    return 0;
}

int OrdenarDouble(double *array, size_t tamanio) {
    if (tamanio > 1) {
        for (int i = 0; i < tamanio; i++) {
            for (int j = 0; j < tamanio - 1; j++) {
                if (array[j] > array[j + 1]) {
                    cambioValorDouble(&array[j], &array[j + 1]);
                }
            }
        }
        return 1;
    }
    return 0;
}

int OrdenarFloat(float *array, size_t tamanio) {
    if (tamanio > 1) {
        for (int i = 0; i < tamanio; i++) {
            for (int j = 0; j < tamanio - 1; j++) {
                if (array[j] > array[j + 1]) {
                    cambioValorFloat(&array[j], &array[j + 1]);
                }
            }
        }
        return 1;
    }
    return 0;
}

int OrdenarChar(char* array, size_t tamanio) {
    if (tamanio > 1) {
        for (int i = 0; i < tamanio; i++) {
            for (int j = 0; j < tamanio - 1; j++) {
                if (array[j] > array[j + 1]) {
                    cambioValorChar(&array[j], &array[j + 1]);
                }
            }
        }
        return 1;
    }
    return 0;


}

/*Declaracion de funciones Mostrar*/
int MostrarEntero(int *array, size_t tamanio) {
    if (tamanio > 0) {
        for (int i = 0; i < tamanio; i++) {
            printf(" %d ,", array[i]);
        }
        return 1;
    }
    return 0;
}

int MostrarDouble(double *array, size_t tamanio) {
    if (tamanio > 0) {
        for (int i = 0; i < tamanio; i++) {
            printf(" %lf ,", array[i]);
        }
        return 1;
    }
    return 0;
}

int MostrarFloat(float *array, size_t tamanio) {
    if (tamanio > 0) {
        for (int i = 0; i < tamanio; i++) {
            printf(" %.2f ,", array[i]);
        }
        return 1;
    }
    return 0;
}

int MostrarChar(char* array, size_t tamanio) {
    if (tamanio > 0) {
        for (int i = 0; i < tamanio; i++) {
            printf(" %c ,", array[i]);
        }
        return 1;
    }
    return 0;

}

/*Declaracion de funciones Entero*/
int EliminarEntero(int *array, size_t tamanio, int posicion) {
    int almacen = posicion;
    if (posicion >= 0 && posicion < tamanio) {
        array[almacen] = 0;
        return 0;
    } else {
        return 1;
    }
}

int ELiminarDouble(double *array, size_t tamanio, int posicion) {
    int almacen = posicion;
    if (posicion >= 0 && posicion < tamanio) {
        array[almacen] = 0;
        return 0;
    } else {
        return 1;
    }
}

int EliminarFloat(float *array, size_t tamanio, int posicion) {
    int almacen = posicion;
    if (posicion >= 0 && posicion < tamanio) {
        array[almacen] = 0;
        return 0;
    } else {
        return 1;
    }
}

int EliminarChar(char *array, size_t tamanio, int posicion) {
    int almacen = posicion;
    if (posicion >= 0 && posicion < tamanio) {
        array[almacen] = ' ';
        return 0;
    } else {
        return 1;
    }
}

/*Declaracion de funciones Insertar*/
int InsertarEntero(int *array, size_t tamanio, int posicion, int dato) {
    int almacen = posicion;
    int datoInsertar = dato;
    if (posicion >= 0 && posicion < tamanio && array[almacen] == 0) {
        array[almacen] = datoInsertar;
        return 0;

    } else {
        return 1;
    }
}

int InsertarDouble(double *array, size_t tamanio, int posicion, double dato) {
    int almacen = posicion;
    double datoInsertar = dato;
    if (posicion >= 0 && posicion < tamanio && array[almacen] == 0) {
        array[almacen] = datoInsertar;
        return 0;
    } else {
        return 1;
    }
}

int InsertarFloat(float *array, size_t tamanio, int posicion, float dato) {
    int almacen = posicion;
    float datoInsertar = dato;
    if (posicion >= 0 && posicion < tamanio && array[almacen] == 0) {
        array[almacen] = datoInsertar;
        return 0;
    } else {
        return 1;
    }
}

int InsertarChar(char *array, size_t tamanio, int posicion, char dato) {
    int almacen = posicion;
    char datoInsertar = dato;
    if (posicion >= 0 && posicion < tamanio && array[almacen] == ' ') {
       
        array[almacen] = datoInsertar;
        return 0;
    } else {
        return 1;
    }
}

/*Declaracion de funciones Remplazar*/
int RemplazarEntero(int *array, size_t tamanio, int posicion, int dato){
    int almacen = posicion;
    int datoInsertar = dato;
    if (posicion >= 0 && posicion < tamanio) {
        array[almacen] = datoInsertar;
        return 0;

    } else {
        return 1;
    }
}
int RemplazarDouble(double *array, size_t tamanio, int posicion, double dato){
    int almacen = posicion;
    double datoInsertar = dato;
    if (posicion >= 0 && posicion < tamanio) {
        array[almacen] = datoInsertar;
        return 0;

    } else {
        return 1;
    }
}
int RemplazarFloat(float *array, size_t tamanio, int posicion, float dato){
    int almacen = posicion;
    float datoInsertar = dato;
    if (posicion >= 0 && posicion < tamanio) {
        array[almacen] = datoInsertar;
        return 0;

    } else {
        return 1;
    }
}

int RemplazarChar(char *array, size_t tamanio, int posicion, char dato){
    int almacen = posicion;
    char datoInsertar = dato;
    if (posicion >= 0 && posicion < tamanio) {
      
        array[almacen] = datoInsertar;
        return 0;

    } else {
        return 1;
    }
}