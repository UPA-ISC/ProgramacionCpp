/* Unidad 3. Valores por referencia
   Autor: Luis Ernesto Anaya Tiscareño
   Fecha: 01/09/2022
   Descripción: Muestra la forma de retornar multiples valores de una función por referencia
*/

#include <iostream>

using namespace std;

//El & en el tipo de variable hace que el valor se retorne por referencia, se apunta a la 
//dirección de memoria donde se encuentra la variable
void operaciones(int, int, int&, int&, int&, float&);

int main(){
    int num1, num2;
    int suma=0, resta=0, multiplicacion = 0;
    float division = 0;

    cout << "Dame un número: ";
    cin >> num1;
    cout << "Dame otro número: ";
    cin >> num2;

    operaciones(num1, num2, suma, resta, multiplicacion, division);

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicación es: " << multiplicacion << endl;
    cout << "La división es: " << division << endl;

    return 0;
}

void operaciones(int num1, int num2, int& suma, int& resta, int& multiplicacion, float& division){
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1*num2;

    //Se convierten los enteros a flotantes para retornar un flotante
    division = (float)num1/(float)num2;
}