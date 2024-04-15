/*

Determinar quantos anos serão necessários para que um pé de Eucalipto seja maior que uma Palmeira. 
Considere que o Eucalipto tem 1,10m e cresce 3 centímetros por ano 
enquanto que a Palmeira tem 1,50m e cresce 2 centímetros por ano.

*/

#include <iostream>

using namespace std;

int main(){
    float eucalipto = 1.10; //cresce 3cm/ano
    float palmeira = 1.50; //cresce 2cm/ano
    
    int ano = 0;
    
    while (palmeira > eucalipto){
        
        palmeira = palmeira + 0.02;
        eucalipto = eucalipto + 0.03;
        ano = ano + 1;
    }
    
   cout <<"O Eucalipto ira passar a palmeira após o ano " << ano;
    
    return 0;
}