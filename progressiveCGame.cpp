#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int acoes(){
	std::cout<<"[1] Atirar \n";
	std::cout<<"[2] Correr \n";
	std::cout<<"[3] Usar item aleat�rio \n";
	std::cout<<"[4] Sair \n";
	std::cout<< "Aguardando jogador... \n";
}

int atirar(int RNG){
	if(RNG > 5){
		std::cout<<"Caralho voc� � muito bom! \n";
	}else{
		std::cout<<"Tu � podre \n";
	}
}

int main() {
	setlocale(LC_ALL,"");
	std :: cout << "Escolha uma das 4 a��es \n";

	acoes();

	int inputAction = 0;

	while(inputAction != 4){

		std :: cin >> inputAction;

		switch(inputAction){
			case 1:
			    int random_value = rand() % 11; // gerar um valor aleat�rio entre 0 e 10
				atirar(random_value);
				break;

			case 2:
			    int i = 10;
				std :: cout << "Correu pelo menos uns 10km, parab�ns... \n";
				break;

			case 3:
				std :: cout << "Voc� usou um item aleat�rio e fez algo muito aleat�rio. \n";
				break;

			case 4:
				std :: cout << "Saindo... \n";
				break;

			default:
				std :: cout << "Sei l� \n";
				break;
		}

		std :: cout << "Escolha uma acao novamente \n";
	}
	system("EXIT");
}
