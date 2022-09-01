#include <iostream>
#include <stdlib.h>
#include<fstream>

using namespace std;

void crearArchivo();
void lecturaArchivo();
void escribirArchivo();
void revisarArchivo(ofstream &archivo);


int main(){

    //escribirArchivo();
    //lecturaArchivo();
    escribirArchivo();
    return 0;
}

void crearArchivo(){
    ofstream archivo;
    //Abriendo archivo 
    archivo.open("datos.txt", ios::out);

    //Error al abrir o crear archivo 
    if (archivo.fail()){    
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    archivo << "Bienvenidos al archivo de datos" << endl;
    archivo << "Este es un txt de prueba" << endl;

    //Cerrando el archivo
    archivo.close();

}

void lecturaArchivo(){
    ifstream archivo;
    string textoArchivo;

    //Abriendo archivo en modo lectura
    archivo.open("datos.txt", ios::in);

    if (archivo.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    while (!archivo.eof()){
        getline(archivo, textoArchivo);
        cout << textoArchivo << endl;
    }

    archivo.close();

}

void escribirArchivo(){
    ofstream archivo;

    archivo.open("datos.txt", ios::app);

    revisarArchivo(archivo);

    archivo << "Nueva linea" << endl;

    archivo.close();
}

void revisarArchivo(ofstream &archivo){
    //Error al abrir o crear archivo 
    if (archivo.fail()){    
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
}