/* Unidad 2. Uso de ciclo Do While
   Autor: Luis Ernesto Anaya Tiscareño
   Fecha: 01/09/2022
   Descripción: Muestra el uso de la sentencia Do While
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Libreria para el uso de getchar
#include <stdio.h>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main()
{
   int contador;
   //Inicialización del contador, inicia en 1
   contador = 1;
   
   do{
    //Imprime el valor del contador
    cout << "El contador es: " << contador << endl;

    //Incremento del contador, si no se incrementa el ciclo se mantiene indefinidamente
    //En caso de que se cicle el programa, presiona Ctrl + c para finalizarlo
    contador++;
   }while (contador <= 15);
   
    
    //Espera a que el usuario presione una tecla para terminar el programa
    cout << "Presiona enter para terminar.";
    int c = getchar();
    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}