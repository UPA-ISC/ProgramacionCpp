/* Unidad 2. Uso de ciclo For
   Autor: Luis Ernesto Anaya Tiscareño
   Fecha: 01/09/2022
   Descripción: Muestra el uso de la sentencia For
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main()
{
   int contador;
   
   /* For sentence
        for(expr1; logic condition; expr2){
            sentences
        }
   */
   //El ciclo termina cuando contador es igual a 3
   for(contador = 1; contador <= 10; contador++){
    if (contador == 3){
        break;
    }
    cout << "El valor del contador es: " << contador << endl;
   }
   cout << "======================="<<endl;

   // El ciclo omite la iteración cuando contador es igual a 3
   for(contador = 1; contador <= 10; contador++){
    if (contador == 3){
        continue;
    }
    cout << "El valor del contador es: " << contador << endl;
   }

    //Espera a que el usuario presione una tecla para terminar el programa
    cout << "Presiona enter para terminar.";
    int c = getchar();

    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}