/*

Imprima a tabuada de um número n de 0 até k.

*/

#include <iostream>

using namespace std;

int main(){
   int num, multi, tabuada;
   
   cout << "Qual a tabuada desejada? ";
   cin >> num;
   cout << "Até quanto quer multiplicar? ";
   cin >> multi;
   
   for(int i = 0; i <= multi; i++){
       tabuada = num * i;
       cout << num << " x " << i << " = " << tabuada << endl;
   }
    return 0;
}
    