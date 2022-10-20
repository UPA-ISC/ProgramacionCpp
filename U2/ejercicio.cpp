#include<iostream>

using namespace std;

int main()
{
    int contador=0;
    float temperatura;
    float tempAcum = 0;
    do{
        cout << "Give me the temperature: ";
        cin >> temperatura;
        tempAcum += temperatura;
        contador++;
    }while(contador <= 6);

    cout << "The average of temperature today is: " << tempAcum/6 << endl;  
    
 
  return 0;
}

