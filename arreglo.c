#include <stdio.h>
int main(int argc, char const *argv[])
{
    int vector1[10];
    // Se mostrata los vetores
    // Se trabaja con for para usar el i (indice) para que nos pueda mostrar al final el resultado
    for (size_t i = 0; i < 10; i++)
    {
        printf("Ingrese el contenido del vector : \n ");
        scanf("%d", &vector1[i]);
    }
    // Se mete otro for para la imprencion del resultado usando el indice
    for (size_t i = 0; i < 10; i++)
    {

        printf("%d ", vector1[i]);
    }
    return 0;
}
