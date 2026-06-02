
#include <stdio.h>
#include <windows.h>
#include "functions.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int ler;

    menu(); //print do menu

    scanf("%d", &ler);

    switch (ler)
    {
    case 1:
        printf("gerenciou abelhas.");
        break;
    case 2:
        printf("gerenciou sensores.");
        break;
    case 3:
        printf("viu os relatórios");
        break;
    default:
        printf("você saiu");
        break;
    }

    return 0;
}