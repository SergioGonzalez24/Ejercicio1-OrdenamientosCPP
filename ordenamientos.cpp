//Bibliotecas propias o precargadas
#include <iostream> //entradas y salidas de nuestro programa
#include <stdlib.h> //Generar números aleatorios
#include <time.h> //tiempo de la computadora

//Espacio de nombres
using namespace std;

//Dos lugares para almacenar datos Stack y el Heap

//Generar arreglos aleatorios
void generarArreglo(int arreglo [],int tam) {
    //inicializar la semilla de generacion de numeros aleatorios
    srand((unsigned)time(0));
    for(int i=0;i<tam;i++)
        arreglo[i]=rand()%100; //Genera un número pseudoaleatori de o a 100
}

//Imprimir un arreglo
void imprimirArreglo(int arreglo [], int tam) {
    for(int i=0;i<tam;i++)
        cout<< arreglo[i]<<" ";
    cout<<endl;
}

//METODOS DE ORDENAMIENTOS BASICOS
///////////////////////////////////////////////////////////////////
void metodoIntercambio(int arreglo [], int tam) {
    int i,j,aux;
    for (i=0;i<=tam-1;i++) { //Va a ser para las pasadas, tiene control de indice fijo
        for (j=i+1;j<tam;j++) { //Indice de comparracion
            if (arreglo[i]>arreglo[j]) { //validar que el elemento de comparacion es mayor a nuestro indice fijo
                aux = arreglo[j];
                arreglo[j] = arreglo[i];
                arreglo[i] = aux;

            }

        }
    }
}

void metodoBurbuja(int arreglo [], int tam) {
    int i,j,aux;
    bool flag = true;
    //Control de pasadas
    for (i=0;i<tam&&flag;i++) {
        flag = false;
        for (j=0;j<tam-1-i;j++) {
            if (arreglo[j+1]<arreglo[j]) {
                aux = arreglo[j];
                arreglo[j]=arreglo[j+1];
                arreglo[j+1]=aux;
                flag=true;
            }
        }
    }
}
//***********************************************************
void metodoSeleccionTarea(int arreglo [], int tam) { //TAREA

    int i,j,aux;
    for (i=0; i<tam;i++){
        for (j = 0; j < tam;j++){
            if (arreglo[i]<arreglo[j])
            {
                 aux = arreglo[j];
                 arreglo[j]=arreglo[i];
                 arreglo[i]=aux;

            }
        }
    }
}
//***********************************************************


void metodoSeleccion(int arreglo [], int tam) { 
    int pasada,j,indicemenor,aux;
    for(pasada=0;pasada<tam-1;pasada++) {
        indicemenor=pasada;
        //Busqueda del indice del menor valor
        for(j=indicemenor+1;j<tam;j++) {
            if(arreglo[j]<arreglo[indicemenor]) {
                indicemenor=j; //Actualizar el indice del elemento menor actual
            }
        }
        //Swap o intercambio
        aux=arreglo[pasada];
        arreglo[pasada]=arreglo[indicemenor];

    }
}


void metodoInsercion(int arreglo [], int tam) {
    int i,j,aux;
    for(i=1;i<tam;i++) {
        j=i;
        aux=arreglo[i];
        while(j>0&&aux<arreglo[j-1]) { //Rcorrrer elementos mayores a la derecha
            arreglo[j]=arreglo[j-1];
            j--;
        }
        arreglo[j]=aux;
    }
}
////////////////////////////////////////////////////////////////////////

//METODOS DE ORDENAMIENTO AVANZADOS
void merge(int arreglo[], int inicio, int mitad, int final) {
    //N+numero de elementos e la parte izq 
    //Numero de elementos en la parte derecha
    //Declarar mis arreglos auxiliares de izq a derecha
    //Copiar los datos del arreglo originale en izq y der
    //Realizar el merge
    //vaciar rematentes

}

void mergeSort(int arreglo [], int inicio, int final) {
    if (inicio<final) { //Caso recursivo
        //obtener el indice medio
        int mitad=inicio+(final-inicio)/2;
        //Parte Izquierda
        mergeSort(arreglo,inicio,mitad);
        //Parte Final
        mergeSort(arreglo,inicio+1,final);
    } 
    //Caso base
    else {
        merge(arreglo,inicio,mitad,fin);
    }


}





int main(/*Parametros de entrada*/) {

    int tam;
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>tam;
    //Declaración de arreglo
    int arreglo[tam];
    //Generar arreglo aleatorio
    generarArreglo(arreglo,tam);
    //Imprimir arreglo
    cout << "Areglo ORIGINAL" << endl;
    imprimirArreglo(arreglo,tam);

    //Imprimir arreglo ordenado
    cout << "Metodo Intercambio" << endl;
    metodoIntercambio(arreglo,tam);
    imprimirArreglo(arreglo,tam);
    //Metodos de ordenamiento

    cout << "Metodo Burbuja" << endl;
    metodoBurbuja(arreglo,tam);
    imprimirArreglo(arreglo,tam);

    cout << "Metodo Seleccion" << endl;
    metodoSeleccionTarea(arreglo,tam);
    imprimirArreglo(arreglo,tam);

}