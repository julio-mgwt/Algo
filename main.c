
#include <stdio.h>
#include <windows.h>
#include "functions.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);

    int ler, saiu = 0;

    menu(); // print do menu

    /* ===== SISTEMA BEE MONITOR =====
1. Gerenciar Abelhas
2. Gerenciar Sensores
3. Relatórios
4. Sair
Escolha uma opção:*/
    
    do{ // fica em loop até que a var saiu se torne V(1)
        
        //limpar buffer caso usuário digite algo diferente de inteiro no input para a var ler.
        if(scanf("%d", &ler) != 1){
            scanf("%*[^\n]");
            getchar();
            printf("Comando inválido, por favor, tente novamente.\nEscolha uma opção: ");
            continue;
        }
        
        if(ler >= 1 && ler <= 4){ //garante que a função confirmarOpcao não quebre por erro de usuário sempre digitando a frase inicial com qualquer input.
            if (!confirmarOpcao1(ler)){
                ler = 0; //para quando ler for válido e confirmarOpcao = N, e o usuário digitar algo inválido no início do loop, não acontecer da var ler não ser alterada e repetir o input do valor anterior.
                continue;
            }
        }
            
            switch (ler)
            {
            case 1:
                manageAbelhas_menu(); // tem que fazer a função manageAbelha() pro submenu

                break;
            case 2:
                manageSensores_menu(); // tem que fazer a função manageSensores() pro submenu

                break;
            case 3:
                manageRelatorios_menu(); // tem que fazer a função manageRelatorios() pro submenu

                break;
            case 4:
                printf("Você saiu.\n");
                saiu = 1;
                break;
            default:
                printf("Comando inválido, por favor, tente novamente.\nEscolha uma opção: ");
            }
    }while(saiu == 0);
    
    limpar_tela(); 

    return 0;
}