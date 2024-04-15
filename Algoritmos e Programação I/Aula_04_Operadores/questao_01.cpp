/*

Determinar se uma pessoa tem direito a fazer a CNH.

*/

#include <iostream>

using namespace std;

int main(){
	int idade;

	cout << "Qual a sua idade? ";
	cin >> idade;

	if (idade >= 18){
		cout << "Você tem direito a fazer a CNH";
	}else{
		cout << "Você não tem direito a fazer a CNH";
	}

	return 0;
}
