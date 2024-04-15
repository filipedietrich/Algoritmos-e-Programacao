/*

Apresente o IMC do usuário com base na tabela (procurar tabela na internet)

*/

#include <iostream>

using namespace std;

int main(){
     
     float peso = 0;
     float altura = 1;
     float imc = peso / (altura * altura);
     
     cout << "Qual sua altura? " << endl;
     cin >> altura;
     
     cout << "Qual seu peso? " << endl;
     cin >> peso;
     
     imc = peso / (altura * altura);
     
     if(imc <= 18.5){
         cout << "Abaixo do peso" << endl;
     } else if (imc <= 18.6 && imc >= 24.9){
         cout << "Peso ideal" << endl;
     } else if (imc <= 25.0 && imc >= 29.9){
         cout << "Levemente acima do peso" << endl;
     } else if (imc <= 30.0 && imc >= 34.9){
         cout << "Obesidade grau I" << endl;
     } else if (imc <= 35.0 && imc >= 39.9){
         cout << "Obesidade grau II" << endl;
     } else {
          cout << "Obesidade grau III" << endl;
     }
    
}