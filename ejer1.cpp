/*implementar una funcion que reciba un arreglo de enteros y su tamañno y 
retorne la cantidad de numeros primos del arrglo. debe implementar la funcion principal para probar su funcion*/

#include <iostream> 
using namespace std;

int contarPrimos(const int arr[], const int tamaño){
    int contador = 0;

    for (int i = 0; i < tamaño; i++){
        int num = arr[i];
        bool Primo = true; 
        int x=2;

        if (num<=1){        
            Primo=false;
        } 
        else{
            while (x<num){                        
                if (num % x == 0){ 
                    Primo = false;
                    break; 
                }
                x++;
            }
        }

        if (Primo){
            contador++;  
        }
    }

    return contador; 
}

int main() {
    int tamaño;
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tamaño;

    int arr[tamaño];
    cout<<"Ingrese los valores: "<<endl;

    for (int i=0;i<tamaño;i++){
        cin>>arr[i]; 
    }
    cout<<"La cantidad de numeros primos es: "<<contarPrimos(arr, tamaño)<<endl;

    return 0;
}