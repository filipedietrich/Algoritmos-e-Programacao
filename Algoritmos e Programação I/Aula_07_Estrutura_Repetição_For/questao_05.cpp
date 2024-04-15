/*

Imprimir os números ímpares inteiros de X a Y.

*/

#include <iostream>

using namespace std;

int main(){
   int k, num, menor = 0;
   
   cout << "Qual a quantidade de numeros? ";
   cin >> k;
   
   for(int i = 1; i <= k; i++){
       cout << "Qual o numero " << i << " ? ";
       cin >> num;
       if(i == 1){
           menor = num;
       }else if(menor > num){
           menor = num;
       }
   }
   
   cout << "O menor numero digitado foi: " << menor;
    return 0;
}
    