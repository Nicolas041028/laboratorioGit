#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main () {
    ifstream archivoEntrada("input/archivoEntrada.txt");

    if(archivoEntrada.is_openI()){
        cout<<"Archivo Abierto"<<endl;
        string linea;

        while(getline(archivoEntrada, linea)){
            
        }
    }


	
	
}
