/*

Calcular n! (fatorial de n).

*/

#include <iostream>

using namespace std;

int main(){
    int fatorial = 0;
    
    cout << "Digite um fatorial: ";
    cin >> fatorial;
    
    int total = 1;
    
    while (fatorial >= 1){
        total = total * (fatorial * 1);
        fatorial--;
    }
    
    cout << total;
    return 0;
}