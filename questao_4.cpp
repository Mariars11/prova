//Nome: Maria Clara Rodrigues Silva
//Matrícula: UC21100014

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3;
	//usuario informa os 3 numeros
	printf("Informe o número 1: ");
	scanf("%d", &num1);
	printf("Informe o número 2: ");
	scanf("%d", &num2);
	printf("Informe o número 3: ");
	scanf("%d", &num3);
	
	printf("\n");
	//comparação do menor numero
	if(num1 < num2 && num1 < num3){
		printf("O número %d é o menor número", num1);
	}
		else if(num2 < num1 && num2 < num3){
			printf("O numero %d é o menor numero", num2);
		}
			else if(num3 < num1 && num3 < num2){
				printf("O numero %d é o menor numero", num3);
			}
	//comparação do maior numero
	if(num1 > num2 && num1 > num3){
		printf("\nO numero %d é o maior numero", num1);
	}
		else if(num2 > num1 && num2 > num3){
			printf("\nO numero %d é o maior numero", num2);
		}
			else if(num3 > num1 && num3 > num2){
				printf("\nO numero %d é o maior numero", num3);
			}
}
