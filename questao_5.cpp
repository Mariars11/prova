//Nome: Maria Clara Rodrigues Silva
//Matrícula: UC21100014

#include <stdio.h>

int main(){
	float numero[4], soma = 0.0, media = 0.0;
	
	//armazena 4 numeros em um vetor
	for(int i = 0; i < 4; i++){
		printf("Informe o numero(%d): ", i+1);
		scanf("%f", &numero[i]);
		soma += numero[i];
	}
	
	//calculo da media
	media = soma / 4;
	
	//print da media
	printf("Media Aritmetica: %.2f", media);
	return 0;
}
