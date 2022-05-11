//Nome: Maria Clara Rodrigues Silva
//Matrícula: UC21100014

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int aux;
	//do-while para que o switch continue ate que o usuario informe 0
	do{
		//menu de contextualização para o usuario
		printf("\n|0| - Sair\n|1| - Comprar Abacaxi\n|2| - Comprar Maçã\n|3| - Comprar Pera\n");
		printf("\nEscolha a opção: ");
		scanf("%d", &aux);
		
		switch(aux){
			case 0:{
				//finaliza o do-while
				printf("\nSaindo...");
				break;
			}
			case 1:{
				//abacaxi	
				printf("\nVocê comprou um abacaxi!\n");
				break;
			}
			case 2:{
				//maçã
				printf("\nVocê comprou uma maçã!\n");
				break;
			}
			case 3:{
				//pera
				printf("\nVocê comprou uma pera!\n");
				break;
			}
			default:{
				//para opções além de 0,1,2,3
				printf("\nOpção inválida!\n");
				break;
			}	
		}
	}while(aux != 0);
	
}
