#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int vectora[20];
    int maximo = 0;
    int contenedor = 0;
    for (size_t i = 0; i < 20; i++)
    {
        vectora[i] = rand() % 10 + 1;
    }
    for (size_t i = 0; i < 20; i++)
    {
        printf("%d ", vectora[i]);
        if (vectora[i] > maximo)
        {
            maximo = vectora[i];
        }
    }
    printf("\n Numero maximo es : %d", maximo);

    for (int i = 0; i < 20; i++)
    {
        if (maximo == vectora[i])
        {
            contenedor++;
            printf("\n Posicion del vector es de : %d ", i + 1);
        }
    }

    return 0;
}
