#include <stdio.h> 
#include <stdlib.h> // system("pause"); system("cls");
#include <locale.h> // setlocale(LC_ALL, "Portuguese");
#include <conio.h> // getch();
#include <string.h>
#include <time.h> //adicionar horario
#define termino "nao" //do while
#include <Windows.h> // Sleep();
#define outro "sim" //do while
#define TAM 200

void tela_inicial ();
void cadastrar_funcionarios ();
void imprimir_funcionarios ();
void salvar_funcionarios ();
void deletar_funcionario ();
void pesquisar_funcionarios ();
void modificar_funcionarios ();

typedef struct tCadastro {  //ESTRUTURA DE DADOS DO CADASTRO

	int idade[TAM];
	int cpf[TAM];
	char nome [TAM][50];
	char ter [5]; //do while
	char iu [5]; //do while
	
}tCadastro;

typedef struct tmo { //ESTRUTURA DE MARCAÇÃO DE HORARIO
	
int sec, min, hour, dia, mes, ano; 

}tmo;

int tecla () { //ESTRUTURA QUE HABILITA USO DE TECLAS
    int varTecla;
    while (1) {
        if (kbhit()) {
            varTecla = getch();
            return varTecla;
        }
    }
}

int main () { //FUN��O PRINCIPAL
	
	setlocale(LC_ALL, "Portuguese"); //LINGUA LOCAL PORTUGU�S
	
	tCadastro cadastro;
	
	tela_inicial ();
	
return 0;
}

void tela_inicial () { //PAGINA INICIAL DO PROGRAMA
	
	tmo *atual;
	time_t segundos; //FORMATA PARA SEGUNDOS
	time(&segundos); //LOCAL DE MEMORIA DOS SEGUNDOS
//	atual = localtime(&segundos); //HORARIO DO LOCAL ATUAL

    int c, i;
    int linha = 0;
    
    system("cls");
    	
		for(i=0;i<5;i++){ //TELA DE CARREGAMENTO
		printf("\n\n\t/ / / / / / CARREGANDO / / / / / /");
		Sleep(100);
		//system("color CF");
		system("cls");
		printf("\n\n\t| | | | | | CARREGANDO | | | | | |");
		Sleep(100);
		//system("color AF");
		system("cls");
		printf("\n\n\t\\ \\ \\ \\ \\ \\ CARREGANDO \\ \\ \\ \\ \\ \\ ");
		Sleep(100);
		//system("color 3F");
		system("cls");
		printf("\n\n\t- - - - - - CARREGANDO - - - - - -");
		Sleep(100);
		//system("color 7F");
		system("cls");
	}
	//TELA PRINCIPAL COM OP��ES
	printf("\t\t %d:%d:%d  %d/%d/%d \n", atual->hour, atual->min, atual->sec, atual->dia, atual->mes, atual->ano+1900);
    printf("1 ~> Cadastro de funcion�rio \n"
           "2    Lista de funcion�rios cadastrados \n"
           "3    Salvar Funcionarios \n"
		   "4    Deletar um cadastro de funcionario \n"
		   "5    Pesquisar o cadastro de um funcion�rio \n"
		   "6    Modificar informa��es sobre cadastro de um funcion�rio \n"
		   "0    Sair");

    while (1) { // CONDICIONAL PARA USO DAS TECLAS
        if (kbhit()) {
            system("cls");
            c = tecla();

            if (c == 80) { //APERTAR PARA BAIXO
                linha++;
                if (linha > 6)
                    linha = 0;
            }
            if (c == 72) {  // APERTAR PARA CIMA
                linha--;
                if (linha < 0)
                    linha = 6;
            }
            if (c == 13)  {  // APERTAR ENTER
            	if (linha == 0) {
                	
                    cadastrar_funcionarios ();

                } else if (linha == 1) {
                	
                    imprimir_funcionarios ();

                } else if (linha == 2) {
                	
                    salvar_funcionarios ();
                
                } else if (linha == 3) {
                	
                    deletar_funcionario ();
                    
                } else if (linha == 4) {
                	
 					pesquisar_funcionarios ();
 					
                } else if (linha == 5) {
                	
					modificar_funcionarios ();
					
                } else if (linha == 6) {
                    system("cls");
                    	for(i=0;i<5;i++){ // TELA DE CARREGAMENTO
							printf("\n\n\t/ / / / / / FECHANDO PROGRAMA / / / / / /");
							Sleep(100);
							//system("color CF");
							system("cls");
							printf("\n\n\t| | | | | | FECHANDO PROGRAMA | | | | | |");
							Sleep(100);
							//system("color AF");
							system("cls");
							printf("\n\n\t\\ \\ \\ \\ \\ \\ FECHANDO PROGRAMA \\ \\ \\ \\ \\ \\ ");
							Sleep(100);
							//system("color 3F");
							system("cls");
							printf("\n\n\t- - - - - - FECHANDO PROGRAMA - - - - - -");
							Sleep(100);
							//system("color 7F");
							system("cls");
							}
                    exit(0);
                }
            }// POSI��ES DA SETA
            if (linha == 0) { 
            	printf("\t\t %d:%d:%d  %d/%d/%d \n", atual->hour, atual->min, atual->sec, atual->dia, atual->mes, atual->ano+1900);
	            printf("1 ~> Cadastro de funcion�rio \n"
           		"2    Lista de funcion�rios cadastrados \n"
           		"3    Salvar Funcionarios \n"
		   		"4    Deletar um cadastro de funcionario \n"
		   		"5    Pesquisar o cadastro de um funcion�rio \n"
		   		"6    Modificar informa��es sobre cadastro de um funcion�rio \n"
		   		"0    Sair");

            }
            if (linha == 1) {
            	printf("\t\t %d:%d:%d  %d/%d/%d \n", atual->hour, atual->min, atual->sec, atual->dia, atual->mes, atual->ano+1900);
	            printf("1    Cadastro de funcion�rio \n"
           		"2 ~> Lista de funcion�rios cadastrados \n"
           		"3    Salvar Funcionarios \n"
		   		"4    Deletar um cadastro de funcionario \n"
		   		"5    Pesquisar o cadastro de um funcion�rio \n"
		   		"6    Modificar informa��es sobre cadastro de um funcion�rio \n"
		   		"0    Sair");

            }
            if (linha == 2) {
            	printf("\t\t %d:%d:%d  %d/%d/%d \n", atual->hour, atual->min, atual->sec, atual->dia, atual->mes, atual->ano+1900);
	            printf("1    Cadastro de funcion�rio \n"
           		"2    Lista de funcion�rios cadastrados \n"
           		"3 ~> Salvar Funcionarios \n"
		   		"4    Deletar um cadastro de funcionario \n"
		   		"5    Pesquisar o cadastro de um funcion�rio \n"
		   		"6    Modificar informa��es sobre cadastro de um funcion�rio \n"
		   		"0    Sair");
            }
            if (linha == 3) {
            	printf("\t\t %d:%d:%d  %d/%d/%d \n", atual->hour, atual->min, atual->sec, atual->dia, atual->mes, atual->ano+1900);
	            printf("1    Cadastro de funcion�rio \n"
           		"2    Lista de funcion�rios cadastrados \n"
           		"3    Salvar Funcionarios \n"
		   		"4 ~> Deletar um cadastro de funcionario \n"
		   		"5    Pesquisar o cadastro de um funcion�rio \n"
		   		"6    Modificar informa��es sobre cadastro de um funcion�rio \n"
		   		"0    Sair");
			}
			if (linha == 4) {
				printf("\t\t %d:%d:%d  %d/%d/%d \n", atual->hour, atual->min, atual->sec, atual->dia, atual->mes, atual->ano+1900);
	            printf("1    Cadastro de funcion�rio \n"
           		"2    Lista de funcion�rios cadastrados \n"
           		"3    Salvar Funcionarios \n"
		   		"4    Deletar um cadastro de funcionario \n"
		   		"5 ~> Pesquisar o cadastro de um funcion�rio \n"
		   		"6    Modificar informa��es sobre cadastro de um funcion�rio \n"
		   		"0    Sair");
			}
			if (linha == 5) {
				printf("\t\t %d:%d:%d  %d/%d/%d \n", atual->hour, atual->min, atual->sec, atual->dia, atual->mes, atual->ano+1900);
	            printf("1    Cadastro de funcion�rio \n"
           		"2    Lista de funcion�rios cadastrados \n"
           		"3    Salvar Funcionarios \n"
		   		"4    Deletar um cadastro de funcionario \n"
		   		"5    Pesquisar o cadastro de um funcion�rio \n"
		   		"6 ~> Modificar informa��es sobre cadastro de um funcion�rio \n"
		   		"0    Sair");
			}
			if (linha == 6) {
				printf("\t\t %d:%d:%d  %d/%d/%d \n", atual->hour, atual->min, atual->sec, atual->dia, atual->mes, atual->ano+1900);
	            printf("1    Cadastro de funcion�rio \n"
           		"2    Lista de funcion�rios cadastrados \n"
           		"3    Salvar Funcionarios \n"
		   		"4    Deletar um cadastro de funcionario \n"
		   		"5    Pesquisar o cadastro de um funcion�rio \n"
		   		"6    Modificar informa��es sobre cadastro de um funcion�rio \n"
		   		"0 ~> Sair");
			}
        }
    }
}

void cadastrar_funcionarios () { //TELA DE CADASTRO
	
	int id;
	tCadastro cadastro;
	
	do{
	
		system("cls");
			
	printf("Informe o nome do funcion�rio: ");
	fflush(stdin);
	fgets(cadastro.nome[id], 50, stdin);
		
	printf("Informe a idade do funcion�rio: ");
	scanf("%d", &cadastro.idade[id]);
	
	printf("Informe o CPF do duncion�rio: ");
	scanf("%d", &cadastro.cpf[id]);
        	
	system("cls");
	
	printf("\n\n----------- Funcion�rio ------------\n\n");
	printf("Nome: %s \n", cadastro.nome[id]);
	printf("Idade: %d \n", cadastro.idade[id]);
	printf("CPF: %d \n", cadastro.cpf[id]);
	printf("------------------------------------\n\n");
	
	printf("\n\nFuncion�rio Cadastrado com sucesso! \n\n");
	
	printf("\n\nDeseja adicionar outro cadastro? \n");
	fflush(stdin);
	scanf("%s", &cadastro.iu);
	
		system("cls");

	id++; //PARA AVAN�AR DE LUGAR NO VETOR		
	} while (strcmp(outro, cadastro.iu) == 0);
		
}

void imprimir_funcionarios () { //TELA DE IMPRESS�O DE FUNCIONARIOS
	
	tCadastro cadastro;

	int i;
	
		system("cls");
	
	for(i=0;i<TAM;i++) {
		if(cadastro.idade[i]>0) {
			printf("\n\n----------- Funcion�rio ------------\n\n");
			printf("Nome: %s \n", cadastro.nome[i]);
			printf("Idade: %d \n", cadastro.idade[i]);
			printf("CPF: %d \n", cadastro.cpf[i]);
			printf("------------------------------------\n\n");
		} else {
			break;
		}
	}
		
	system("pause");
	system("cls");
	
}

void salvar_funcionarios () { //SALVA EM ARQUIVO .BIN
	
	int i;
	tCadastro cadastro;
	FILE *file = fopen("cadastros.bin", "wb");
	
		
			if (file == NULL) {
				printf("Arquivo n�o abriu");
			}
			
			fwrite(&cadastro, sizeof(tCadastro), 1, file);
			
			printf("\n\nFuncion�rio salvo! \n\n");
			system("pause");
			system("cls");
			fclose (file);
	
}

void deletar_funcionario () { //"DELETA" FUNCIONARIO SELECIONADO
	
	tCadastro cadastro;
	int pesquisa, i;
	
	do {
		printf("Digite o CPF do funcion�rio: ");
		scanf("%d", &pesquisa);
		
		for(i=0;i<TAM;i++){
			if(cadastro.cpf[i] == pesquisa){
				cadastro.idade[i]=0; //ATRIBUI VALOR DA IDADE A ZERO
				printf("\nCadastro deletado\n\n");
				system("pause");
				break;
			}
		}
		
		system("cls");
			
	} while (strcmp(outro, cadastro.iu) == 0);	
		
}

void pesquisar_funcionarios () {//VARRE OS DADOS E INFORMA O SELECIONADO
	
	tCadastro cadastro;
	int pesquisa, i;
	
	do {
		printf("Digite o CPF do funcion�rio: ");
		scanf("%d", &pesquisa);
		
		for(i=0;i<TAM;i++){
			if(cadastro.cpf[i] == pesquisa){
			printf("\n\n----------- Funcion�rio ------------\n\n");
			printf("Nome: %s \n", cadastro.nome[i]);
			printf("Idade: %d \n", cadastro.idade[i]);
			printf("CPF: %d \n", cadastro.cpf[i]);
			printf("------------------------------------\n\n");
			} 
		}
		  
	printf("Deseja pesquisar outro cadastro? \n");
	fflush(stdin);
	scanf("%s", &cadastro.iu);
	
		system("cls");
			
	} while (strcmp(outro, cadastro.iu) == 0);
}

void modificar_funcionarios ()  {//PESQUISA E MODIFICA OS DADOS
	
	tCadastro cadastro;
	int pesquisa, i, aux;
	char aux1[50];
	
	do {
		printf("Digite o CPF do funcion�rio: ");
		scanf("%d", &pesquisa);
		
		for(i=0;i<TAM;i++){
			if(cadastro.cpf[i] == pesquisa){
				printf("\n\n----------- Funcion�rio ------------\n\n");
				printf("Nome: %s \n", cadastro.nome[i]);
				printf("Idade: %d \n\n\n", cadastro.idade[i]);
				printf("CPF: %d \n", cadastro.cpf[i]);
				printf("------------------------------------\n\n");
				
				printf("Digite o novo nome: ");
				fflush(stdin);
				fgets(aux1, 50, stdin);
				strcpy(cadastro.nome[i], aux1);

				printf("Digite a nova idade: ");
				scanf("%d", &aux);
				cadastro.idade[i] = aux;
				
				printf("\n\n----------- Funcion�rio ------------\n\n");
				printf("Nome: %s \n", cadastro.nome[i]);
				printf("Idade: %d \n\n\n", cadastro.idade[i]);
				printf("CPF: %d \n", cadastro.cpf[i]);
				printf("------------------------------------\n\n");
			} 
		}
		  
	printf("Deseja modificar outro cadastro? \n");
	fflush(stdin);
	scanf("%s", &cadastro.iu);
	
		system("cls");
			
	} while (strcmp(outro, cadastro.iu) == 0);	
	
	
}
