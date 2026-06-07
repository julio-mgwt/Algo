#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void limpar_tela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


void menu()
{
    limpar_tela();

    printf("===== SISTEMA BEE MONITOR =====\n");
    printf("1. Gerenciar Abelhas\n2. Gerenciar Sensores\n3. Relatórios\n4. Sair\nEscolha uma opção: ");
}

int confirmarOpcao1(int opcao) //menu PRINCIPAL
{
    char confirmacao;

    // Pra mostrar nomes diferentes das opções
    printf("Você quer mesmo ");
    switch (opcao)
    {
    case 1:
        printf("acessar Gerenciar Abelhas");
        break;
    case 2:
        printf("acessar Gerenciar Sensores");
        break;
    case 3:
        printf("acessar Relatorios");
        break;
    case 4:
        printf("Sair");
        break;
    default:
        return 1; // vai direto pro default do switch case principal, basicamente acaba a função aqui.
    }
    printf("? (Y/N): ");
    
    while (1){
        // limpa o buffer pra n pular a leitura ou ficar em repetição, o getchar() é para capturar o enter.
        scanf(" %c", &confirmacao);
        scanf("%*[^\n]"); 
        getchar();

        // Retorna 1 se for Sim (Y/y) e 0 se for Não (N/n)
        if (confirmacao == 'Y' || confirmacao == 'y')
        {
            return 1;
        } else if (confirmacao == 'N' || confirmacao == 'n'){
            if (opcao == 4) { //no caso de ser cancelamento de saída.
                    printf("Operação de sair cancelada.");
                } else {
                    printf("Operação cancelada."); // em todos os outros casos
                }
                printf("\nEscolha uma opção do menu: ");
                return 0;
        } else {
            printf("Por favor, digite um caractere válido. (Y/N): "); //caso não for nem N nem Y
        }
    }
}

void manageAbelhas_menu() //submenu abelhas
{
    limpar_tela();
    
    printf("===== GERENCIAR ABELHAS =====\n");
    printf("6. Cadastrar Abelha\n7. Listar Todas\n8. Buscar por Nome Popular\n9. Alterar Dados\n10. Remover\n11. Voltar\nEscolha uma opção: ");
}

void manageSensores_menu(){ //submenu sensores
    limpar_tela();
    
    printf("===== GERENCIAR SENSORES =====\n");
    printf("6. Cadastrar Sensor\n7. Listar Sensores\n8. Buscar por ID da Abelha\n9. Alterar Leitura\n10. Remover\n11. Voltar\nEscolha uma opção: ");
}

void manageRelatorios_menu(){ //submenu relatórios
    limpar_tela();
    
    printf("===== RELATÓRIOS =====\n");
    printf("4. Média Geral de Produção de Mel\n5. Média de Temperatura dos Sensores\n6. Quantidade de Abelhas por Região\n7. Voltar\nEscolha uma opção: ");
}