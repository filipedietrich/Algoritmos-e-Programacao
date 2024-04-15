/*

Crie uma função que calcula tanto a área do retângulo quanto o seu perímetro. Os resultados devem ser impressos a partir do main

*/
#include <iostream>

using namespace std;

void calculos(float &area, float &perimetro){
    float largura, altura;
    
    cout << "Qual a largura do retângulo? \n";
    cin >> largura;
    cout << "Qual a altura do retângulo? \n";
    cin >> altura;
    cout << endl;
    
    area = largura * altura;
    
    perimetro = (largura + altura) * 2;
}

int main(){
    float area, perimetro;
    
    calculos(area, perimetro);
    
    cout << "A area do retângulo é igual a: " << area << endl;
    cout << "O perimetro do retângulo é igual a: " << perimetro << endl;
    
    
    
    
    return 0;
}