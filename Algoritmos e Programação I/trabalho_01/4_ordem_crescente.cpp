/*****************************************************************************************
 
 Crie um algoritmo que lê três números e independentemente da ordem em que são fornecidos,
 os números deverão ser impressos na ordem crescente.

 ****************************************************************************************/

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

// Comparação das variáveis e impressão na ordem crescente

	if(numero1 <= numero2 && numero1 <= numero3 && numero2 <= numero3){
		cout << endl << "A ordem crescente é:" << numero1 <<", " << numero2 << ", " << numero3; 
	}else if(numero1 <= numero3 && numero1 <= numero2 && numero3 <= numero2){
		cout << endl << "A ordem crescente é:" << numero1 <<", " << numero3 << ", " << numero2; 
	}else if(numero2 <= numero1 && numero2 <= numero3 && numero1 <= numero3){
		cout << endl << "A ordem crescente é:" << numero2 <<", " << numero1 << ", " << numero3; 
	}else if(numero2 <= numero3 && numero2 <= numero1 && numero3 <= numero1){
		cout << endl << "A ordem crescente é:" << numero2 <<", " << numero3 << ", " << numero1;
	}else if(numero3 <= numero1 && numero3 <= numero2 && numero1 <= numero2){
		cout << endl << "A ordem crescente é:" << numero3 <<", " << numero1 << ", " << numero2;
	}else if(numero3 <= numero2 && numero3 <= numero2 && numero2 <= numero1){
		cout << endl << "A ordem crescente é:" <<  numero3 <<", " << numero2 << ", " << numero1;
	}
}