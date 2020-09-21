#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <Windows.h>
int x = 0;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //setlocale(LC_ALL, "Portuguese_Brasil");
    while (x < 10)
    {
        printf("Digite um número menor que 10: ");
        scanf("%d", &x);
    }
    system("pause");

    return 0;
}