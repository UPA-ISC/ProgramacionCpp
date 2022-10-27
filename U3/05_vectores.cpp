/*
Autor: Luis Ernesto Anaya Tiscareño
Fecha: 26/10/22
Descripcion: Ejemplo de carga e impresión de vectores
*/
#include <iostream>
#include<stdio.h>

using namespace std;
 
//Función para cargar un vector entero con valores
void cargarVector(int v[], int tamano){
    for (int elemento = 0; elemento < tamano; elemento++)
    {
        cout << "Dame el valor " << elemento << ": ";
        cin >> v[elemento];
    }
}

//Función para imprimir un vector de tipo entero
void imprimirVector(int v[], int tamano){
    for (int elemento = 0; elemento < tamano; elemento++)
    {
        cout << v[elemento] << " ";
    }
    cout << endl;  
}

int main(){
    //Declaración de un vector de tipo entero inicializado en cero
    int numeros[100] = {0};

    //Definicion de un vector de tipo char
    char c[6];

    //Se manda cargar un vector entero
    cargarVector(numeros,6);

    //Se manda imprimir los valores de un vector entero
    imprimirVector(numeros,6);

    cout << endl; 
    getchar();


    return 0;
}




