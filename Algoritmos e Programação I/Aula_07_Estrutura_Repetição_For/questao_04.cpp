/*

Imprimir os números ímpares inteiros de X a Y.

*/

#include <iostream>

using namespace std;

int main(){
   int num1, num2;
   
   cout << "Qual o primeiro numero? ";
   cin >> num1;
   cout << "Qual o ultimo numero? ";
   cin >> num2;
   
   for(num1; num1 <= num2; num1++){
       if(num1 % 2 != 0){
           cout << num1 << endl;
       }
   }
    return 0;
}
    