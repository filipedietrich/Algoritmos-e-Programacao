/*

Determinar se um número é positivo e par.

*/

#include <iostream>

using namespace std;

int main(){

	int numero;

	cout << "Digite um número: ";
	cin >> numero;

	if(numero % 2 == 0 && numero > 0){
		cout << "O numero é positivo e par";
	}else if (numero % 2 == 0 && numero < 0){
		cout << "O numero é negativo e par";
	}else if (numero % 2 != 0 && numero > 0){
		cout << "O numero é positivo e impar";
	}else if (numero % 2 != 0 && numero < 0){
		cout << "O numero é negativo e impar";
	}

	return 0;
}


