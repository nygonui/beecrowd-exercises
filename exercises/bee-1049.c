/*
    filo - vertebrado; invertebrado
    classe - ave, mamimefero, inseto, anelideo
    familia - carnivoro, onivoro, herbivoro ...
    especie - aguia, pomba, homem

    to-do:
        * a atribuição de strings não está funcionando do jeito certo, arrumar
*/
_Bool stringIguais(char string1[], char string2[]);
void atribuicaoDeStrings(char string1[], char string2[]);

#include <stdio.h>

int main()
{
    char filo[15];
    char classe[15];
    char familia[15];
    char especie[15];

    scanf("%s\n%s\n%s", filo, classe, familia);
    // no scanf de um array char não precisa usar &, ainda não sei pq

    if (stringIguais(filo, "vertebrado"))
    {
        if (stringIguais(classe, "ave"))
        {
            if (stringIguais(familia, "carnivoro"))
            {
                atribuicaoDeStrings(especie, "aguia");
            }
            else
            {
                atribuicaoDeStrings(especie, "pomba");
            }
        }
        else
        {
            if (stringIguais(familia, "onivoro"))
            {
                atribuicaoDeStrings(especie, "homem");
            }
            else
            {
                atribuicaoDeStrings(especie, "vaca");
            }
        }
    }
    else
    {
        if (stringIguais(classe, "inseto"))
        {
            if (stringIguais(familia, "hematofago"))
            {
                atribuicaoDeStrings(especie, "pulga");
            }
            else
            {
                atribuicaoDeStrings(especie, "lagarta");
            }
        }
        else
        {
            if (stringIguais(familia, "hematofago"))
            {
                atribuicaoDeStrings(especie, "sanguessuga");
            }
            else
            {
                atribuicaoDeStrings(especie, "minhoca");
            }
        }
    }

    printf("%s\n", especie);

    return 0;
}

_Bool stringIguais(char string1[], char string2[])
{
    int i = 0;
    while (string1[i] == string2[i] && string1[i] != '\0' && string2[i] != '\0')
        i++;
    if (string1[i] == '\0' && string2[i] == '\0')
        return 1;
    else
        return 0;
}

void atribuicaoDeStrings(char string1[], char string2[])
{
    int i = 0;
    while (string2[i] != '\0')
    {
        string1[i] = string2[i];
        i++;
    }
    string1[i] = '\0'; // sem colocar o \0 no final da palavra dentro do array de char ele não entende
    // que a palavra acabou e preenche com alguns caracteres aleatórios
}
