/*

Calcular a média de k números.

*/

#include <iostream>

using namespace std;

int main(){
   float qtd, valor;
   float media = 0;
   
   cout << "Deseja calcular a média de quantos numeros? ";
   cin >> qtd;
   
   for(int i = 1; i <= qtd; i++){
       cout << "Qual o valor " << i << " ? ";
       cin >> valor;
       media = media + valor;
       
   }
   
   media = media / qtd;
   cout << "A media é de: " << media;
    return 0;
}
    