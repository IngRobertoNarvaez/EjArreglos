#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int vector3[20];
    int minimo = 10;
    int contenedor = 0;
    for (size_t i = 0; i < 20; i++)
    {
        vector3[i] = rand() % 10 + 1;
    }
    for (size_t i = 0; i < 20; i++)
    {
        printf("%d ", vector3[i]);
        if (vector3[i] < minimo)
        {
            minimo = vector3[i];
        }
    }
    printf("\n Numero minimo es : %d", minimo);
    for (int i = 0; i < 20; i++)
    {
        if (vector3[i] == minimo)
        {
            contenedor++;
        }
    }
    printf("\n Se repite : %d ", contenedor, " veces ");
    return 0;
}
