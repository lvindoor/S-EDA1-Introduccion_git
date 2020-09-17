#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char nombre[100];

    printf("Hola mundo\n");
    
    printf("Nombre: ");
    scanf("%s",nombre);
    printf("Hola %s\n", nombre);

    return 0;
}