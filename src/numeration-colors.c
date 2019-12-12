#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int aposta;
	int ns; //Variavel que irá guardar o número sorteado
	int sair = 0;
	
	do{
		system("cls");
		printf("Qual sua aposta?");
		scanf("%d", &aposta);
		
		srand(time(0));
		ns = rand() % 37;
		
		if(ns==0) {
		    printf("Numero sorteado: %d - Cor Verde.\n", ns);
		} else if ((ns >= 1 && ns <= 9) && ns % 2 != 0) {
			  printf("Numero sorteado: %d - Cor Vermelha.\n", ns);
		} else if ((ns >= 12 && ns <= 18) && ns % 2 == 0) {
			  printf("Numero sorteado: %d - Cor Vermelha.\n", ns);
		} else if ((ns >= 19 && ns <= 27) && ns % 2 != 0) {
			  printf("Numero sorteado: %d - Cor Vermelha.\n", ns);
		} else if ((ns >= 30 && ns <= 36) && ns % 2 == 0) {
			  printf("Numero sorteado: %d - Cor Vermelha.\n", ns);
		} else if ((ns >= 2 && ns <= 10) && ns % 2 == 0) {
			  printf("Numero sorteado: %d - Cor Preta.\n", ns);
		} else if ((ns >= 11 && ns <= 17) && ns % 2 != 0) {
			  printf("Numero sorteado: %d - Cor Preta.\n", ns);
		} else if ((ns >= 20 && ns <= 28) && ns % 2 == 0) {
			  printf("Numero sorteado: %d - Cor Preta.\n", ns);
		} else if ((ns >= 29 && ns <= 35) && ns % 2 != 0) {
			  printf("Numero sorteado: %d - Cor Preta.\n", ns);
		}
		
		
		printf("Deseja continuar? 1-Sim | 0-Nao");
		scanf("%d", &sair);
	
	} while(sair != 0);
	
	return 0;
}
