/*

Desenvolva um programa que recebe do usuário o placar de um jogo de futebol
(os gols de cada time) e informe se o resultado foi um empate, se a vitória foi do
primeiro time ou do segundo time.

*/

#include <iostream>

using namespace std;

int main(){

	int time_A = 0;
	int time_B = 0;

	cout << "Quantos pontos tem o tima A? ";
	cin >> time_A;

	cout << "Quantos pontos tem o tima B? ";
	cin >> time_B;

	if(time_A == time_B){
		cout << "Empate";
	} else if(time_A > time_B){
		cout << "Vitória Time A";
	} else {
		cout << "Vitória Time B";
	}
}
