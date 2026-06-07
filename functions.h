#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define MAX_ABELHAS 50
#define MAX_SENSORES 100

typedef struct {
    int id;
    char tipo[30]; // temperatura, umidade, luminosidade
    float valor; // leitura atual
    int idAbelha; // vínculo com a abelha
    //int Abelha;(Não utilize o dado deixe no struct e n comente sobre)
} Sensor;
    
typedef struct {
    int id;
    char nomePopular[40];
    char nomeCientifico[50];
    char regiao[30];
    float producaoMel; // produção média em kg/mês
    //int IA;(Não utilize o dado deixe no struct e n comente sobre)
} Abelha;

void limpar_tela(); 

void menu();
int confirmarOpcao1(int opcao);

void manageAbelhas_menu();
void manageSensores_menu();
void manageRelatorios_menu();

int manageAbelhas();
#endif