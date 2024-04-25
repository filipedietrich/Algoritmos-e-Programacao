#include <iostream>
using namespace std;

int main(){
    
    /*
    4. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
    Associe as variáveis aos ponteiros. Modifique os valores de cada variável via ponteiros. Imprima os valores das variáveis antes e após a modificação.
    */
    
    int i = 10, *ptrI = &i ;
    float f = 5.5, *ptrF = &f;
    char c = 'f', *ptrC = &c;
    
    cout << "Valor do inteiro antes: " << i << endl;
    cout << "Valor do real antes: " << f << endl;
    cout << "Valor do char antes: " << c << endl << endl;
    
    *ptrI = 20;
    *ptrF = 60.45;
    *ptrC = 'F';
    
    cout << "Valor do inteiro depois: " << i << endl;
    cout << "Valor do real depois: " << f << endl;
    cout << "Valor do char depois: " << c << endl << endl;
    
    /*
    5. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior.
    */
    
    int a = 4, b = 8;
    
    if(&a > &b){
        cout << "O endereço de a > endereço de b" << endl;
    }else{
        cout << "O endereço de a < endereço de b" << endl;
    }

    return 0;
}