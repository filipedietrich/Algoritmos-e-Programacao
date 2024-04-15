/*

01. Verificar a menor quantidade de cédulas e moedas que um valor monetário n pode ser decomposto.  
As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas consideradas são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01.

*/

#include <iostream>

using namespace std;

int main(){

	float valor;
	int valorint, nota100, nota50, nota20, nota10, nota5, nota2, moeda1, moeda50, moeda25, moeda10, moeda5, moeda01;
	int sobra100, sobra50, sobra20, sobra10, sobra5, sobra2, sobram1, sobram50, sobram25, sobram10, sobram5, sobram01;

	cout << "Qual valor monetário deseja decompor? R$:";
	cin >> valor;
	cout << "\nPara decompor R$:" << valor << " na menor quantidade de cédulas e moedas serão necessários:\n\n";

	valorint = valor * 100;

	while(valorint != 0){

		if(valorint >= 10000){
			nota100 = valorint / 10000;
			cout << nota100 << " Nota(s) de R$100,00\n";
			sobra100 = valorint % 10000;
			valorint = sobra100;
		}else if(valorint >= 5000){
			nota50 = valorint / 5000;
			cout << nota50 << " Nota(s) de R$50,00\n";
			sobra50 = valorint % 5000;
			valorint = sobra50;
		}else if(valorint >= 2000){
			nota20 = valorint / 2000;
			cout << nota20 << " Nota(s) de R$20,00\n";
			sobra20 = valorint % 2000;
			valorint = sobra20;
		}else if(valorint >= 1000){
			nota10 = valorint / 1000;
			cout << nota10 << " Nota(s) de R$10,00\n";
			sobra10 = valorint % 1000;
			valorint = sobra10;
		}else if(valorint >= 500){
			nota5 = valorint / 500;
			cout << nota5 << " Nota(s) de R$5,00\n";
			sobra5 = valorint % 500;
			valorint = sobra5;
		}else if(valorint >= 200){
			nota2 = valorint / 200;
			cout << nota2 << " Nota(s) de R$2,00\n";
			sobra2 = valorint % 200;
			valorint = sobra2;
		}else if(valorint >= 100){
			moeda1 = valorint / 100;
			cout << moeda1 << " Moeda(s) de R$1,00\n";
			sobram1 = valorint % 100;
			valorint = sobram1;
		}else if(valorint >= 50){
			moeda50 = valorint / 50;
			cout << moeda50 << " Moeda(s) de R$0,50\n";
			sobram50 = valorint % 50;
			valorint = sobram50;
		}else if(valorint >= 25){
			moeda25 = valorint / 25;
			cout << moeda25 << " Moeda(s) de R$0,25\n";
			sobram25 = valorint % 25;
			valorint = sobram25;
		}else if(valorint >= 10){
			moeda10 = valorint / 10;
			cout << moeda10 << " Moeda(s) de R$0,10\n";
			sobram10 = valorint % 10;
			valorint = sobram10;
		}else if(valorint >= 5){
			moeda5 = valorint / 5;
			cout << moeda5 << " Moeda(s) de R$0,05\n";
			sobram5 = valorint % 5;
			valorint = sobram5;
		}else if(valorint >= 1){
			moeda01 = valorint / 1;
			cout << moeda01 << " Moeda(s) de R$0,01\n";
			sobram01 = valorint % 1;
			valorint = sobram01;
		}
	}


	return 0;
}