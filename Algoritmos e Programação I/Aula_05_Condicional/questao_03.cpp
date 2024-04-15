/*

Calcular o desconto de acordo com os itens comprados em uma padaria. Se o
cliente comprar 10 pães franceses e mais um queijo, ele ganha 10% de
desconto. Se o cliente comprar uma bisnaga ou um pão de forma, ele tem um
desconto de 15%. Agora se o cliente comprar leite e pão doce ou suspiro, ele
ganha 5% de desconto. Os preços dos produtos devem ser definidos por você.
O desconto não é acumulativo e será aplicado o maior percentual, de acordo
com as regras, uma única vez no final da compra. 

*/

#include <iostream>

using namespace std;

int main(){
 
    int pao_frances = 0;
    float preco_pao_frances = 3.00;
    float total_pao_frances = pao_frances * preco_pao_frances;
    
    int queijo = 0;
    float preco_queijo = 5.00;
    float total_queijo = queijo * preco_queijo;
    
    int bisnaga = 0;
    float preco_bisnaga = 2.00;
    float total_bisnaga = bisnaga * preco_bisnaga;
    
    int pao_forma = 0;
    float preco_pao_forma = 4.00;
    float total_pao_forma = pao_forma * preco_pao_forma;
    
    int leite = 0;
    float preco_leite = 5.00;
    float total_leite = leite * preco_leite;
    
    int pao_doce = 0;
    float preco_pao_doce = 6.00;
    float total_pao_doce = pao_doce * preco_pao_doce;
    
    int suspiro = 0;
    float preco_suspiro = 1.00;
    float total_suspiro = suspiro * preco_suspiro;
    
    cout << "Qual a quantidade de pão frances? ";
    cin >> pao_frances;
    cout << "Qual a quantidade de queijo? ";
    cin >> queijo;
    cout << "Qual a quantidade de bisnaga? ";
    cin >> bisnaga;
    cout << "Qual a quantidade de pão de forma? ";
    cin >> pao_forma;
    cout << "Qual a quantidade de leite? ";
    cin >> leite;
    cout << "Qual a quantidade de pao doce? ";
    cin >> pao_doce;
    cout << "Qual a quantidade de suspiro? ";
    cin >> suspiro;
    
    total_pao_frances = pao_frances * preco_pao_frances;
    total_queijo = queijo * preco_queijo;
    total_bisnaga = bisnaga * preco_bisnaga;
    total_pao_forma = pao_forma * preco_pao_forma;
    total_leite = leite * preco_leite;
    total_pao_doce = pao_doce * preco_pao_doce;
    total_suspiro = suspiro * preco_suspiro;
    
    int total = total_pao_frances + total_queijo + total_bisnaga + total_pao_forma + leite + pao_doce + suspiro;
    
    if (pao_frances >= 10 && queijo >= 1)
    
}