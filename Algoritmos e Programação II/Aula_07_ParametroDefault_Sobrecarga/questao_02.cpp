/*

2. Usando a biblioteca cmath, crie funções com valores default para:
a) Calcular a potência de um número. Por padrão, o expoente é 2.

b) Calcular a raiz de um número. Por padrão, calcula-se o raiz quadrada.
-> A raiz pode ser calculada como número^(1/índice), use o método pow.

c) Calcular o logaritmo de um número. Por padrão, calcula-se o logaritmo na base
10.
➔O logaritmo de um número numa base b pode ser calculado como:
➔o logaritmo do número na base 10/logaritmo de b na base 10.
➔Use o método log10

*/
#include <iostream>
#include <cmath>
using namespace std;

float pot(float base, int expoente = 2){
    return pow(base, expoente);
}

float raiz(float valor, int indice = 2){
    return pow(valor,(1/indice));
}

float calcularLog(float numero, int base = 10){
    return log10(numero)/log10(base);
}

int main(){
    float base;
    cout << "Potênciação: \nDigite o valor da base: \n";
    cin >> base;
    float potencia = pot(base);
    cout << base <<"^2 = " << potencia;
    
    float radicando;
    cout << "Raiz: \nDigite o valor do radicando: \n";
    cin >> radicando;
    char opc;
    cout << "O indice da raiz é 2? (s/n): ";
    cin >> opc;
    float resultado;
    if(opc == 's'){
        resultado = raiz(radicando);
    }else{
        int indice;
        cout << "Digiete o valor do indice: ";
        cin >> indice;
        resultado = raiz(radicando, indice);
    }
    cout << "A raiz de " << radicando << "vale: " << resultado;
    
    float logaritimando;
    cout << "Logaritimo de base 10: \nDigite o valor do logaritimando: \n";
    cin >> logaritimando;
    float logaritimo = calcularLog(logaritimando);
    cout << "O log de " << logaritimando << "na base 10 é igual a: " << logaritimo;
    
    return 0;
}