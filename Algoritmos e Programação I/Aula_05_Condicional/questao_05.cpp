/*

Fazer um algoritmo que ao receber o salário atual de um funcionário, calcule o
valor do novo salário, reajustado de acordo com as seguintes informações:

Abaixo de 500,00 - reajuste de 15%
De 500,00 até 1.000,00 - reajute de 10%
Acima de 1.000,00 - reajuste de 5%

*/

#include <iostream>

using namespace std;

int main(){

	float salario = 0;

	cout << "Qual o seu salário? ";
	cin >> salario;

	if(salario < 500.00) {
		cout << "Seu novo salario será de R$: " << salario * 1.15;
	} else if (salario >= 500.00 && salario <= 1000.00){
		cout << "Seu novo salario será de R$: " << salario * 1.10;
	} else {
		cout << "Seu novo salario será de R$: " << salario * 1.05;
	}
}