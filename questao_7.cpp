//Nome: Maria Clara Rodrigues Silva
//Matr�cula: UC21100014

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int aux;
	//do-while para que o switch continue ate que o usuario informe 0
	do{
		//menu de contextualiza��o para o usuario
		printf("\n|0| - Sair\n|1| - Comprar Abacaxi\n|2| - Comprar Ma��\n|3| - Comprar Pera\n");
		printf("\nEscolha a op��o: ");
		scanf("%d", &aux);
		
		switch(aux){
			case 0:{
				//finaliza o do-while
				printf("\nSaindo...");
				break;
			}
			case 1:{
				//abacaxi	
				printf("\nVoc� comprou um abacaxi!\n");
				break;
			}
			case 2:{
				//ma��
				printf("\nVoc� comprou uma ma��!\n");
				break;
			}
			case 3:{
				//pera
				printf("\nVoc� comprou uma pera!\n");
				break;
			}
			default:{
				//para op��es al�m de 0,1,2,3
				printf("\nOp��o inv�lida!\n");
				break;
			}	
		}
	}while(aux != 0);
	
}
