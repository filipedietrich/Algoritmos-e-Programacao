/*

08. Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, 
    e um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, 
    calcule o tempo necessário para que a população do país A ultrapasse a população do país B. 

*/

#include <iostream>

using namespace std;

int main() {
    float a = 5000000;
    float b = 7000000;
    int ano = 0;

    while(b > a){
        a *= 1.03;
        b *= 1.02;
        ano ++;
    }

    cout << "País A terá mais habitantes que o país B depois de " << ano << " anos.";


    return 0;
}