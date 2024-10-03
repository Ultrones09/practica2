/*implementar una funcion que reciba una cadena y retorne la cantidad de letra que otenga
 dicha cadena. debe implementar la funcion principal para probar su funcion*/

#include <iostream>
using namespace std;

int letra(const char cadena[]) {
    int contador = 0;

    for (int i=0; cadena[i]; i++) {
        if (cadena[i]>=97 and cadena[i]<=122) {
            contador++;
        }
    }
    return contador;
}

int main() {
    char cadena[100];
    cout<<"Ingrese una cadena: ";
    cin>>cadena;

    cout<<"La cantidad de letras en la cadena es: "<<letra(cadena)<<endl;

    return 0;
}