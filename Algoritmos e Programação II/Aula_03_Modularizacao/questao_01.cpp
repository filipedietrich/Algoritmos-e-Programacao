/*

01. Crie uma calculadora em C++ com modularização. As funções são adição,
subtração, multiplicação, divisão e potenciação. Crie um menu onde é perguntado
ao usuário qual operação ele deseja executar junto com dois números. Imprima o
resultado das operações no main.

*/
#include <iostream>

using namespace std;

double somar(double x, double y){
    double soma = x + y;
    return soma;
}

double subtrair(double x, double y){
    double subtracao = x - y;
    return subtracao;
}

double multiplicar(double x, double y){
    double multiplicacao =   x * y;
    return multiplicacao;
}

double dividir(double x, double y){
    double divisao = x/y;
    return divisao;
}

double potenciar(double x, double y){
    
    double potencia = 1;
    for (int i = 1; i <= y; i++){
        potencia = potencia * x;
    }
    
    return potencia;
}

int menu(){
        int opcao;
        
        cout << "Qual operação deseja realizar: \n";
        cout << "[1] - Soma\n";
        cout << "[2] - Subtração\n";
        cout << "[3] - Multiplicação\n";
        cout << "[4] - Divisão\n";
        cout << "[5] - potenciação\n";
        cout << "[6] - Encerrar Programa\n";
        cout << "Opção: ";
        cin >> opcao;
        cout << endl;
        return opcao;
}

int main(){
    
    double x ,y;
    int opcao = menu();
    
    do{
        
        if (opcao == 6){
        
        } else{
            
            cout << "Digite o primeiro número: \n";
            cin >> x;
            cout << "Digite o segundo número: \n";
            cin >> y;
        }
        
        switch (opcao){
            case 1:{
            cout << "[1] - Soma\n";
            double soma = somar(x, y);
            cout << "A soma é: " << soma << endl << endl;
            break;
            };
            
            case 2:{
            cout << "[2] - Subtração\n";
            double subtracao = subtrair(x, y);
            cout << "A subtração é: " << subtracao << endl << endl;
            break;
            };
            
            case 3:{
            cout << "[3] - Multiplicação\n";
            double multiplicacao = multiplicar(x, y);
            cout << "A multiplicação é: " << multiplicacao << endl << endl;
            break;
            };
            
            case 4:{
            cout << "[4] - Divisão\n";
            double divisao = dividir(x, y);
            cout << "A divisão é: " << divisao << endl << endl;
            break;
            };
            
            case 5:{
            cout << "[5] - potenciação\n";
            double potencia = potenciar(x, y);
            cout << "A potencialização é: " << potencia << endl << endl;
            break;
            };
            
            case 6:{
            cout << "[6] - Encerrar Programa\n";
            cout << "Programa Encerrado.";
            break;
            };
            
            default:
            cout << "Opção inválida. Tente novamente. \n\n";
            
        }
    }while(opcao != 6);
    return 0;
}