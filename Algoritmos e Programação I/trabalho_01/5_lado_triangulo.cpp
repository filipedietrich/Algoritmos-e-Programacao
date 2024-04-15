#include <iostream>

using namespace std;

int main(){

// Declaração de variáveis

	float lado1 = 0;
	float lado2 = 0;
	float lado3 = 0;

// Inserção dos dados

	cout << "Digite os três lados do trângulo:" << endl;
	cin >> lado1;
	cin >> lado2;
	cin >> lado3;

// Comparação das variáveis e impressão na do nome do triângulo

	if(lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
		cout << "O triângulo é equilátero";
	}else if(lado1 == lado2 && lado1 != lado3 || lado1 == lado3 && lado1 != lado2 || lado2 == lado3 && lado2 != lado1){
		cout << "O triângulo é isósceles";
	}else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
		cout << "O triângulo é escaleno";
	}

}