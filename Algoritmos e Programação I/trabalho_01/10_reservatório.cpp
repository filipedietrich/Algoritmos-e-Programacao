/******************************************************************************************************
 
Crie um algoritmo que auxilie os utilizadores de reservatório de água a 
controlarem o seu consumo. Dada as dimensões de um reservatório 
(altura, largura e comprimento, em centímetros) e o consumo 
médio diário dos utilizadores do reservatório (em litros/dia), informe:

a) A capacidade total do reservatório, em litros;
b) A autonomia do reservatório, em dias;
C)A classificação do consumo, de acordo com a quantidade de dias de autonomia, podendo ser:
	● Consumo elevado, se a autonomia for menor que 2 dias;
	● Consumo moderado, se a autonomia estiver entre 2 e 7 dias;
	● Consumo reduzido, se a autonomia for maior do que 7 dias.

Observação: Considere que cada litro equivale a 1000 cm3 ou 1 dm3 .

******************************************************************************************************/

#include <iostream>

using namespace std;

int main(){

	float altura = 0;
	float largura = 0;
	float comprimento = 0;
	float consumo = 0;

	cout << "Qual a altura em cm? ";
	cin >> altura;
	cout << "Qual a largura em cm? ";
	cin >> largura;
	cout << "Qual o comprimento em cm? ";
	cin >> comprimento;
	cout << "Qual o consumo médio diário em litros? ";
	cin >> consumo;

// Calculo do volume e da autonomia 
	
	int volume = altura * largura * comprimento;
	int volume_litros = volume / 1000;
	int autonomia = volume_litros / consumo;

	cout << "A) A capacidade total do reservatório é " << volume_litros << " litros" << endl;
	cout << "B) A autonomia do reservatório é de " << autonomia << " dias." << endl;

	if(autonomia < 2){
		cout << "C) A classificação do consumo é: Consumo elevado";
	}else if(autonomia >=2 && autonomia <=7){
		cout << "C) A classificação do consumo é: Consumo moderado";
	}else if(autonomia > 7){
		cout << "C) A classificação do consumo é: Consumo reduzido";
	}
}
