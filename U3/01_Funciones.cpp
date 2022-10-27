/* Unidad 3. Funciones
   Autor: Luis Ernesto Anaya Tiscareño
   Fecha: 01/09/2022
   Descripción: Muestra la creación y manejo de funciones
*/

/* Funcion:
    tipo nombre(tipo var1, tipo var2,...tipo varn){
        instrucciones;
    }
*/

#include <iostream>

using namespace std;

//Prototipado de funciones
int getMaxVal(int num1, int num2);

//Función principal
int main(){
    int primerValor, segundoValor;
    int valorMax;

    cout << "Dame un número: ";
    cin >> primerValor;
    cout << "Dame otro número: ";
    cin >> segundoValor;

    cout << "\n ================ \n";
    valorMax =getMaxVal(primerValor, segundoValor);

    cout << "El valor máximo es: " << valorMax << endl;
    return 0;
}

int getMaxVal(int num1, int num2){
    return (num1>num2)?num1:num2;
}
