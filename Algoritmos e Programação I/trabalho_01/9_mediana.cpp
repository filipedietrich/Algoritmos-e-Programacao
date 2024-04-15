/*************************************************************
 
Crie um algoritmo para encontrar a mediana de três valores.

*************************************************************/

#include <iostream>

using namespace std;

int main(){

	float numero1 = 0;
	float numero2 = 0;
	float numero3 = 0;

	cout << "Digite três números" << endl;
	cin >> numero1;
	cin >> numero2;
	cin >> numero3;

	float elemento1 = 0;
	float elemento2 = 0;
	float elemento3 = 0;


//Compara os dados, coloca em ordem crescente e imprime a mediana

	if(numero1 <= numero2 && numero1 <= numero3 && numero2 <= numero3){
		elemento1 = numero1, elemento2 = numero2, elemento3 = numero3;
		cout << "A mediana é: " << elemento2; 
	}else if(numero1 <= numero3 && numero1 <= numero2 && numero3 <= numero2){
		elemento1 = numero1, elemento2 = numero3, elemento3 = numero2;
		cout << "A mediana é: " << elemento2; 
	}else if(numero2 <= numero1 && numero2 <= numero3 && numero1 <= numero3){
		elemento1 = numero2, elemento2 = numero1, elemento3 = numero3; 
		cout << "A mediana é: " << elemento2; 
	}else if(numero2 <= numero3 && numero2 <= numero1 && numero3 <= numero1){
		elemento1 = numero2, elemento2 = numero3,elemento3 = numero1;
		cout << "A mediana é: " << elemento2; 
	}else if(numero3 <= numero1 && numero3 <= numero2 && numero1 <= numero2){
		elemento1 = numero3, elemento2 = numero1, elemento3 = numero2;
		cout << "A mediana é: " << elemento2; 
	}else if(numero3 <= numero2 && numero3 <= numero2 && numero2 <= numero1){
		elemento1 = numero3, elemento2 = numero2, elemento3 = numero1;
		cout << "A mediana é: " << elemento2; 
	}

}