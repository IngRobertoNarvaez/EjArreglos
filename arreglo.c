#include <stdio.h>
// nuevas librerias
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    // semilla
    srand(time(NULL));
    int vector1[10];
    // Se mostrata los vetores
    // Se trabaja con for para usar el i (indice) para que nos pueda mostrar al final el resultado
    for (size_t i = 0; i < 10; i++)
    {
        vector1[i] = rand() % 10 + 1;
        /*printf("Ingrese el contenido del vector : \n ");
        scanf("%d", &vector1[i]);*/
    }
    // Se mete otro for para la imprencion del resultado usando el indice
    for (size_t i = 0; i < 10; i++)
    {

        printf("%d ", vector1[i]);
    }
    /*char vector2[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    for (size_t i = 0; i < 10; i++)
    {

        printf("%c ", vector2[i]);
    }*/
    return 0;
}
