/*

Crie um conversor de unidades modular. Ele deve:
• converter uma temperatura de Celsius para Fahrenheit.
• converter uma temperatura de Fahrenheit para Celsius.
• converter uma distância de metros para quilômetros.
• converter uma distância de quilômetros para metros.

*/
#include <iostream>

using namespace std;

void celsiusFahrenheit(){

    double celsius;

    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    double fahrenheit = (1,8 * celsius) + 32;
    cout << fahrenheit << "ºF" ;
}


void fahrenheitCelsius(){

    double fahrenheit;

    cout << "Digite a temperatura em Celsius: ";
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) / 1.8;
    cout << celsius << "ºC" ;;

}

void metrosQuilometros(){

    double metro;

    cout << "Digite a distância em metros: ";
    cin >> metro;

    double km = metro / 1000;
    cout << km << "km";

}

void quilometroMetro(){

    double km;

    cout << "Digite a distância em quilômetros: ";
    cin >> km;

    double metro = km * 1000;
    cout << metro << "m";

}



int main(){

        int opcao;
        
    do{
        cout << "Qual operação deseja realizar: \n";
        cout << "[1] - Converter de Celsius para Fahrenheit. \n";
        cout << "[2] - Converter de Fahrenheit para Celsius. \n";
        cout << "[3] - Converter de metros para quilômetros. \n";
        cout << "[4] - Converter de quilômetros para metros.\n";
        cout << "[5] - Encerrar Programa. \n";
        cout << "Opção: ";
        cin >> opcao;
        cout << endl;
        
        switch (opcao){
            case 1:
            cout << "[1] - Converter de Celsius para Fahrenheit.\n";
            celsiusFahrenheit();
            cout << endl << endl;
            break;
            
            case 2:
            cout << "[2] - Converter de Fahrenheit para Celsius.\n";
            fahrenheitCelsius();
            cout << endl << endl;
            break;
            
            case 3:
            cout << "[3] - Converter de metros para quilômetros.\n";
            metrosQuilometros();
            cout << endl << endl;
            break;
            
            case 4:
            cout << "[4] - Converter de quilômetros para metros.\n";
            quilometroMetro();
            cout << endl << endl;
            break;
            
            case 5:
            cout << "[5] - Encerrar Programa\n";
            cout << "Programa Encerrado.";
            break;
            
            default:
            cout << "Opção inválida. Tente novamente. \n\n";
            
        }
    }while(opcao != 5);
    return 0;
}