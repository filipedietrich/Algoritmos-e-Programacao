/***************************************************************************

Crie um algoritmo para calcular a posição de um objeto em função do tempo 
conforme a equação horária da posição.

***************************************************************************/

#include <iostream>

using namespace std;

int main(){

//Variáveis da equação

	float posicao_inicial = 0;
	float velocidade_inicial = 0;
	float tempo_final = 1;
	float aceleracao = 0;
	string pergunta; 

// Obtenção das variáveis	

	cout << "Qual a posicao inicial em metros? ";
	cin >> posicao_inicial;
	cout << "Qual a velocidade inicial em m/s? ";
	cin >> velocidade_inicial;
	cout << "Qual o tempo final em segundos? ";
	cin >> tempo_final;
	cout << "Você sabe a aceleração? ";
	cin >> pergunta;

	if(pergunta == "sim" || pergunta == "Sim"){

		cout << "Qual a aceleracao em m/sˆ2? ";
		cin >> aceleracao;

// Cálculo da aceleração

	}else{ 

		float velocidade_parcial = 0;
		float tempo_inicial = 0;
		float tempo_parcial = 0;

		cout << "Qual a velocidade parcial em m/s? ";
		cin >> velocidade_parcial;
		cout << "Qual o tempo inicial em segundos? ";
		cin >> tempo_inicial;
		cout << "Qual o tempo tempo parcial em segundos? ";
		cin >> tempo_parcial;

		aceleracao = (velocidade_parcial - velocidade_inicial) / (tempo_parcial - tempo_inicial);

		cout << "A acelereção vale: " << aceleracao <<"m/sˆ2" << endl;
	}

// Fórmula da Função horária no MRUV 

	float posicao_final = posicao_inicial + (velocidade_inicial * tempo_final) + ((aceleracao * (tempo_final * tempo_final)) / 2);

// Resposta da equação

	cout << "A posição do objeto no instante " << tempo_final << "s é de: " << posicao_final << "m";
}