//Nome: Maria Clara Rodrigues Silva
//Matr�cula: UC21100014

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3;
	//usuario informa os 3 numeros
	printf("Informe o n�mero 1: ");
	scanf("%d", &num1);
	printf("Informe o n�mero 2: ");
	scanf("%d", &num2);
	printf("Informe o n�mero 3: ");
	scanf("%d", &num3);
	
	printf("\n");
	//compara��o do menor numero
	if(num1 < num2 && num1 < num3){
		printf("O n�mero %d � o menor n�mero", num1);
	}
		else if(num2 < num1 && num2 < num3){
			printf("O numero %d � o menor numero", num2);
		}
			else if(num3 < num1 && num3 < num2){
				printf("O numero %d � o menor numero", num3);
			}
	//compara��o do maior numero
	if(num1 > num2 && num1 > num3){
		printf("\nO numero %d � o maior numero", num1);
	}
		else if(num2 > num1 && num2 > num3){
			printf("\nO numero %d � o maior numero", num2);
		}
			else if(num3 > num1 && num3 > num2){
				printf("\nO numero %d � o maior numero", num3);
			}
}
