/*

Crie uma função para calcular celsius para fahrenheit e vice-versa. Na primeira versão, use passagem de parâmetros por valor e noutra  use passagem de valor por referência. Imprima os resultados a partir do main.

*/

#include <iostream>

using namespace std;

void mostraMenu(int &opcao){
    
    cout << "[1] - Converter de Celsius para Fahrenheit\n";
    cout << "[2] - Converter de Fahrenheit para Celsius\n";
    cout << "[3] - Encerrar programa\n";
    cin >> opcao;

}

float celsiusFahrenheit(float celsius){
    float fahrenheit;
    fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
}

void fahrenheitCelsius(float fahrenheit, float &celsius){
    celsius = (fahrenheit - 32) / 1.8;
}


int main(){
    
    float celsius, fahrenheit;
    int opcao;
    
    do{
        mostraMenu(opcao);
        
        switch(opcao){
            case 1:{
                cout << "[1] - Converter de Celsius para Fahrenheit\n";
                cout << "Qual a temperatura em celsius?\n";
                cin >> celsius;
                fahrenheit = celsiusFahrenheit(celsius);
                cout << celsius <<"°C equivalem a " << fahrenheit << "°F.\n\n";
                break;
            }
            case 2:{
                cout << "[2] - Converter de Fahrenheit para Celsius\n";
                cout << "Qual a temperatura em fahrenheit?\n";
                cin >> fahrenheit;
                fahrenheitCelsius(fahrenheit, celsius);
                cout << fahrenheit << "°F equivalem a " << celsius << "°C.\n\n";
                break;
                
            }
        }
    }while(opcao != 3);
    
    
    
    return 0;
}