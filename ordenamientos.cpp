//Bibliotecas propias o precargadas
#include <iostream> //entradas y salidas de nuestro programa
#include <stdlib.h> //Generar números aleatorios
#include <time.h> //tiempo de la computadora

//Espacio de nombres
using namespace std;

//Dos lugares para almacenar datos Stack y el Heap

//Generar arreglos aleatorios
void generarArreglo(int arreglo [],int tam){
    //inicializar la semilla de generacion de numeros aleatorios
    srand((unsigned)time(0));
    for(int i=0;i<tam;i++)
        arreglo[i]=rand()%100; //Genera un número pseudoaleatori de o a 100
}

//Imprimir un arreglo
void imprimirArreglo(int arreglo [], int tam){
    for(int i=0;i<tam;i++)
        cout<< arreglo[i]<<" ";
    cout<<endl;
}

int main(/*Parametros de entrada*/){
    int tam;
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tam;
    //Declaración de arreglo
    int arreglo[tam];
    //Generar arreglo aleatorio
    generarArreglo(arreglo,tam);
    //Imprimir arreglo
    imprimirArreglo(arreglo,tam);
    //Metodos de ordenamiento
}