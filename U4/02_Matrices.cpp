/* Unidad 4. Matrices
   Autor: Luis Ernesto Anaya Tiscareño
   Fecha: 01/09/2022
   Descripción: Muestra la forma de crear arreglos bidimensionales
*/

/* Definición de un vector:
    tipo nombre[renglones][columnas];
*/

#include <iostream>

using namespace std;

int main(){
    //Se crea una matriz de 3 renglones y 4 filas
    int numeros[3][4];
    bool modoDespliegue = true;

    //Almacenamiento de los valores de la matriz
    for (int renglon = 0; renglon<3; renglon++){
        for (int columna = 0; columna<4; columna++){
            cout << "Valor [" << renglon << "]["<< columna<< "]: ";
            cin >> numeros[renglon][columna];
        }
    }

    //Mostrar elementos de la matriz
    for (int renglon = 0; renglon<3; renglon++){
        for (int columna = 0; columna<4; columna++){
            if(modoDespliegue == 0)
                cout << "El valor de la matriz["<<renglon<<"]["<< columna <<"]: " << numeros[renglon][columna]<<endl;
            else
                cout << numeros[renglon][columna] << "\t";
        }
        cout << "\n";
    }


    return 0;
}