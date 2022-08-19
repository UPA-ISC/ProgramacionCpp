
#include <iostream>

using namespace std;

int factorial(int);

int main(){
    int numero;

    cout << "Dame un número: ";
    cin >> numero; 

    cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
    return 0;
}

int factorial(int numero){
    if (numero == 0 )
        numero = 1;
    else{
        numero *= factorial(numero-1);
    }
    return numero;
}