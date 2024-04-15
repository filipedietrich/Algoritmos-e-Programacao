/*

Determinar quantos valores são divisíveis por um n em um array

*/
#include <iostream>

using namespace std;

void preencherArray(int array[], int tam){
    for(int i = 0; i < tam; i++){
        cout << "Digite um número" << endl;
        cin >> array[i];
    }
}
void perguntaDivisor(int &divisor){
    cout << "Qual divisor você deseja verificar?\n";
    cin >> divisor;
}
int verificaDivisao(int array[], int tam, int divisor){
    int verificador = 0;
    for(int i = 0; i < tam; i++){
        if(array[i] % divisor == 0){
            verificador ++;
        }
    }
    return verificador;
}

int main(){
   
    int tam = 5;
    int divisor;
    int elementos[tam];
  
    preencherArray(elementos, tam);
    perguntaDivisor(divisor);
    int verificador = verificaDivisao(elementos, tam, divisor);
    cout << verificador << " Número(s) são divisiveis por " << divisor;
    
    
    return 0;
}
