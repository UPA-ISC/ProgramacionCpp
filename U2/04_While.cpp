/* Unidad 2. Uso de ciclo While
   Autor: Luis Ernesto Anaya Tiscareño
   Fecha: 01/09/2022
   Descripción: Muestra el uso de la sentencia While
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main()
{
   int contador;
   //Inicialización del contador, inicia en 1
   contador = 1;
   
   while (contador <= 15){
    //Imprime el valor del contador
    cout << "El contador es: " << contador << endl;

    //Incremento del contador, si no se incrementa 
    //el ciclo se mantiene indefinidamente
    contador++;
    //contador = contador +1;
    //contador += 1;
   }   
   
    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}