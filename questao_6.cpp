//Nome: Maria Clara Rodrigues Silva
//Matrícula: UC21100014

#include <stdio.h>

int main(){
	//armazena os valores dentro da matriz
	int matriz[4][4] = 	{
							{45,32,83,95},
							{26,14,37,42},
							{40,43,65,77},
							{74,79,48,55},
						};
	float media, soma = 0.0;
	//impressão da matriz
	printf("\n  === Matriz ===\n\n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("%4d", matriz[i][j]);
		}
		printf("\n");
	}
	//soma dos valores da matriz
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			soma += matriz[i][j]; //855
		}
	}
	//media dos valores
	media = soma / 16;
	printf("\n  Media Aritmetica: {%.2f}", media);
	return 0;
}
