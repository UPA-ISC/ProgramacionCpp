/* Unidad 2. Uso del if anidado
   Autor: Luis Ernesto Anaya Tiscareño
   Fecha: 01/09/2022
   Descripción: Muestra el uso del if anidado
   Una tienda de zapatos tiene una promoción de descuentos para mayoreo. Si son mas de 10 tiene el 10% de descuento, 
   si es mayor a 20 y menor de 30 tiene el 20% y mayor de 30 el 40% de descuento. Cada zapato cuesta $50
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main()
{
   int zapatosVendidos;
   int costoZapatos = 50;
   float montoTotal;
   float descuento;

   //Se solicita la cantida de zapatos vendidos
   cout << "Ingrese la cantidad de zapatos vendidos: ";
   cin >> zapatosVendidos;

   //Se calcula el monto total para aplicar el descuento
   montoTotal = zapatosVendidos*costoZapatos;

   //Se calcula el descuento aplicable
   if (zapatosVendidos <= 10)
      descuento = 0;
   else if (zapatosVendidos <= 20)
      descuento = 0.1;
   else if (zapatosVendidos <= 30)
      descuento = 0.2;
   else if (zapatosVendidos > 30)
      descuento = 0.3;

   //Se imprime el monto total sin descuento
   cout << "El monto total es: $" << montoTotal << endl;

   //Se aplica el descuento
   montoTotal -= montoTotal*descuento;

   //Se imprime el resultado
   cout << "El descuento aplicado fue de " << descuento*100 << "%" <<endl;
   cout << "El monto final con descuento es de: $" << montoTotal <<endl;

   /*Ejercicio: Realizar un programa en el que se consideran 3 inversionistas, quien haya dado mas dinero
   será el dueño de la empresa, el segundo será el gerente y el último solo inversor.
   Considere que dos personas no pueden dar la misma cantidad de dinero. */

    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}