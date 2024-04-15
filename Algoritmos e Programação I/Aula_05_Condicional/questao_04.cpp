/*

Crie um programa para calcular a média aritmética de um aluno em um bimestre. 
Seu programa deve pedir a nota do teste, a nota da prova e a quantidade
de faltas do aluno. Se o aluno tiver a média maior ou igual a 7.0 e menos que 10
faltas, ele estará aprovado. Se o aluno tiver média entre 5.0 e 6.9 e menos que 10
faltas, ele estará em recuperação. Se o aluno tiver média menor que 5.0 ou mais
que 10 faltas, ele estará reprovado.

*/


#include <iostream>

using namespace std;

int main(){

	float teste = 0;
	float prova = 0;
	int falta = 0;

	cout << "Qual a nota do teste? "; 
	cin >> teste;

	cout << "Qual a nota da prova? "; 
	cin >> prova;

	cout << "Qual a quantidade de faltas? "; 
	cin >> falta;

	float media = (teste + prova) / 2;

	if(media >= 7.0 && falta < 10){
		cout << "Aprovado!" << endl;
	} else if(media >= 5.0 && media <= 6.9 && falta < 10){
		cout << "Em recuperação" << endl;
	} else {
		cout << "Reporvado" << endl;
	}


}