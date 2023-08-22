// By: Cauã Pires Soares, graduando em ADS, IFPB-CZ
// 22/08/2023

/*DESAFIO = Escreva um subprograma recursivo que receba como entrada um vetor de dez
números inteiros já ordenados, um número inteiro X, e dois índices M e N e verifique
se o número X está presente no vetor entre as posições M e N. Esta verificação deve
ser feita através de uma busca binária.*/

#include <stdio.h>

const int TAM = 10;

//Printando vetor
void printar( int vet[TAM]){
	int controle;
	for (controle = 0; controle<TAM; controle++){
		printf ("%d  ", vet[controle]);
	}
}

//Ordenando vetor
void ordenar (int vet[TAM]){
	int k, c;
	for (k = 0; k < TAM; k++){
		for (c = k+1; c < TAM; c++){
			if(vet[k] > vet[c]){
				int aux = vet[k];
				vet[k] = vet[c];
				vet[c] = aux;
			}
		}
	}
}


//Busca binaria com chamada recursiva
int busca (int vet[TAM], int inicio, int final, int num){
	
	int meio = (inicio + final)/2;
	
	if (meio < 0){
		return 0;
	}
	
	if (vet[meio] == num){
		return 1;
	}
	else if (vet[meio] > final){
		return busca(vet, inicio, final = meio, num);
	}
	else{
		return busca(vet, inicio = meio, final, num);
	}
	
	
}

void main(){
	
	//Declarando vairaveis
	int vet[TAM], controle, inicio, final, num;
	
	//Lendo vetor
	for (controle = 0; controle<TAM; controle++){
		printf ("Informe um numero: \n");
		scanf ("%d", &vet[controle]);
	}
	ordenar(vet);
	
	printf ("Este eh o vetor ordenado, informe o intervalo de busca (0 a 9): \n");
	printar (vet);
	
	printf ("\n\nDigite o valor inicial: \n");
	scanf ("%d", &inicio);
	printf ("Digite o valor final: \n");
	scanf ("%d", &final);
	printf ("Numero para ser encontrado: \n");
	scanf ("%d", &num);
	
	//Teste que recebe um valor "booleano"(na linguagem C não possui essa valor, e sim 0(false) e 1(true))
	int teste = busca(vet, inicio, final, num);
	
	if (teste){
		printf ("Esta presente :)");
	}
	else{
		printf ("Nao esta presente :(");
	}
	
	getch();
}
