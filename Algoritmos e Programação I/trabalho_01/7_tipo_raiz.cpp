/*******************************************************************************************

Crie um algoritmo que determina o tipo da raiz de uma equação do segundo grau axˆ2+bx+c=0.

*******************************************************************************************/


#include <iostream>

using namespace std;

int main(){

	float a = 0;
	float b = 0;
	float c = 0;

	cout << "Digite o valor de a: ";
	cin >> a;
	cout << "Digite o valor de b: ";
	cin >> b;
	cout << "Digite o valor de c: ";
	cin >> c;

// Resolução do delta

	int delta = (b * b) - (4 * a * c);
	cout << "Delta vale: " << delta << endl;

// Teste do delta	

	if(delta >= 0){
		int valor = 0;
		int teste = 0;
		
		for (int i = 0; i <= delta; i++){

		valor = i * i;

		if(valor == delta){
		    teste = 1;
			break;
			 
		}
		}if(teste == 1) {
		cout << "Raiz exata";
		}else{
		cout << "Raiz não exata";
		}
	}else {
		cout << "Raiz inexistente";
	}
}