#include <iostream>

using namespace std;

void alCuadrado(int vector[], int tamaño){
    for (int i=0; i<tamaño;i++) {
        vector[i]= vector[i] * vector[i]; 
    }
}

int main(){
    int tamaño =2;
    int vector[tamaño];

    cout<<"Ingrese los valores: ";
    for (int i=0;i<tamaño;i++) {
        cin>>vector[i];
    }

    alCuadrado(vector,tamaño);
    cout<<"Los números elevados al cuadrado son: ";
    for (int i=0; i<tamaño;i++) {
        cout<<vector[i]<<" ";
    }
    return 0;

}

