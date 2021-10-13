#include <stdio.h>
#include <stdlib.h>
#include "LrArrays.h"

int main(int argc, char** argv) {
    int arrayI[10] = {0, 0, 3, 4, 5, 6, 7, 8, 9, 0};
    float arrayF[12] = {1.3, 4.5, 6.3, 8.5, 7.4, 1.9, 7.8, 8.2, 3.4, 5.7, 6.8, 5.20};
    char arrayC[5] = {'c', 'c', 'c', 'c', 'c'};

    //InsertarChar(arrayC,12,1,5);

    
    puts("");

    printf("\n %d \n", RemplazarEntero(arrayI, 10, 0, 15));
    
    for(int i=0; i< 10 ;i++){
      printf(" [%d]",arrayI[i]);
    }
    
    
    return (EXIT_SUCCESS);
}

