// busca_binaria.cpp
#include "busca.h"

int busca(const int *arr, int tamanho, int chave)
{
    int baixo, alto;
    baixo = 0;
    alto = tamanho - 1;

    while (baixo <= alto)
    {
        int meio = (baixo + alto) / 2;

        if (arr[meio] == chave)
            return meio;
        else if (arr[meio] > chave)
            alto = meio - 1;
        else
            baixo = meio + 1;
    }

    return -1;
}