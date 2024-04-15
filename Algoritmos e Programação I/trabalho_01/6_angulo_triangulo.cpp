/******************************************************************************

 Dado três ângulos, crie um algoritmo que determina se um triângulo 
 é acutângulo, retângulo ou obtusângulo.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){

	float angulo1 = 0;
	float angulo2 = 0;
	float angulo3 = 0;

	cout << "Digite os três ângulos do trângulo:" << endl;
	cin >> angulo1;
	cin >> angulo2;
	cin >> angulo3;

//verifica se é um triângulo e compara as variáveis para impressão do nome do triângulo

	if(angulo1 + angulo2 + angulo3 == 180){
		if(angulo1 == 90 || angulo2 == 90 || angulo3 == 90){
		cout << "O Triângulo é Retangulo";
		}else if(angulo1 > 90 || angulo2 > 90 || angulo3 > 90){
		cout << "O Triângulo é obtusângulo";
		}else if(angulo1 < 90 && angulo2 < 90 && angulo3 < 90){
		cout << "O Triângulo é acuângulo";
		}
	} else {
		cout << "Os ângulos inseridos não são de um triângulo." << endl << "Tente novamente";
	}

}