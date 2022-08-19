/* Unidad 4. Arreglos
   Autor: Luis Ernesto Anaya Tiscareño
   Fecha: 01/09/2022
   Descripción: Muestra la forma de crear arreglos unidimensionales
*/

/* Definición de un vector:
    tipo nombre[tamaño];
*/

#include <iostream>

using namespace std;

int main(){
    //Se crea un vector de 5 numeros enteros sin valores 
    int numeros[5];

    //Almacenamiento de los valores del vector
    for (int contador = 0; contador<5; contador++){
        cout << "Dame el valor del vector en la posición " << contador << ": ";
        cin >> numeros[contador];
    }

    //Mostrar elementos de un vector
    for (int contador = 0; contador<5; contador++){
        cout << "Dame el valor del vector en la posición " << contador << ": " << numeros[contador]<<endl;
    }

    return 0;
}