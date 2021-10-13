


#ifndef FCABECERA_H
#define FCABECERA_H
/*Obtiene el tamanio de un vector*/
#define LENGHT(X) (sizeof(X)/sizeof((X)[0]));



/*Ordena un vector de N elementos de todos tipos de Datos*/
#define Ordenar(array, tamanio) _Generic((array), \
    int*: OrdenarEntero, \
    double*: OrdenarDouble, \
    float*: OrdenarFloat, \
    char*: OrdenarChar \
)(array, tamanio)

/*Muestra el valor N elementos de un array de Todo Tipo de Dato*/
#define Mostrar(array, tamanio) _Generic((array), \
    int*: MostrarEntero, \
    double*: MostrarDouble, \
    float*: MostrarFloat, \
    char*: MostrarChar \
)(array, tamanio)

/*Convierte a 0 un valor del array de Todo Tipo de Dato*/
#define Eliminar(array, tamanio, posicion) _Generic((array), \
    int*: EliminarEntero, \
    double*: ELiminarDouble, \
    float*: EliminarFloat, \
    char*: EliminarChar \
    )(array,tamanio,posicion)

/*Inserta datos en un array ya creado si tiene espacio al o si el valor es 0*/
#define Insertar(array,tamanio,posicion,dato) _Generic((array), \
    int* InsertarEntero, \
    double*: InsertarDouble, \
    float*: InsertarFloat, \
    char*: InsertarChar \
)(array,tamanio,posicion,dato)

/*Remplaza un dato ya asignado de un array*/
#define Remplazar(array,tamanio,posicion,dato) _Generic((array), \
    int* RemplazarEntero, \
    double*: RemplazarDouble, \
    float*: RemplazarFloat, \
    char*: RemplazarChar \
)(array,tamanio,posicion,dato)


/*-----------------------------------------------*/
/*Cambio de variables*/
void cambioValorEntera(int *valor1, int *valor2);
void cambioValorDouble(double *valor1, double *valor2);
void cambioValorFloat(float *valor1, float *valor2);
void cambioValorChar(char *valor1, char *valor2);

/*Declararion de funciones Ordenar*/
int OrdenarEntero(int *array, size_t tamanio);
int OrdenarDouble(double *array, size_t tamanio);
int OrdenarFloat(float *array, size_t tamanio);
int OrdenarChar(char *array, size_t tamanio);

/*Declaracion de funciones Mostrar*/
int MostrarEntero(int *array, size_t tamanio);
int MostrarDouble(double *array, size_t tamanio);
int MostrarFloat(float *array, size_t tamanio);
int MostrarChar(char *array, size_t tamanio);

/*Declaracion de funciones Entero*/
int EliminarEntero(int *array, size_t tamanio, int posicion);
int ELiminarDouble(double *array, size_t tamanio, int posicion);
int EliminarFloat(float *array, size_t tamanio, int posicion);
int EliminarChar(char *array, size_t tamanio, int posicion);

/*Declaracion de funciones Insertar*/
int InsertarEntero(int *array, size_t tamanio, int posicion,int dato);
int InsertarDouble(double *array, size_t tamanio, int posicion,double dato);
int InsertarFloat(float *array, size_t tamanio, int posicion,float dato);
int InsertarChar(char *array, size_t tamanio, int posicion, char dato);

/*Declaracion de funciones Remplazar*/ 
int RemplazarEntero(int *array, size_t tamanio, int posicion,int dato);
int RemplazarDouble(double *array, size_t tamanio, int posicion,double dato);
int RemplazarFloat(float *array, size_t tamanio, int posicion,float dato);
int RemplazarChar(char *array, size_t tamanio, int posicion,char dato);
#endif /* LrArrays */