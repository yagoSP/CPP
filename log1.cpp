#include <iostream>
int main(void){
	
	int a = 0;
	int b = 0;
	int c = 0;

	std::cout << "Insira o valor A: ";
	std::cin >> a;
	
	std::cout << "Insira o valor B: ";
	std::cin >> b;

	std::cout << "Insira o valor C: ";
	std::cin >> c;

	if((a+b) > c){
		std::cout << "Maior";
	}
	else{
		std::cout << "Menor";
	}


	


	return 0;
}
/*
 * Faça um algoritmo que leia os valores de A, B, C e em seguida imprima na tela se a soma entre A e B e mostre se a soma é maior que c
 */

