/* El código utiliza la librería math.h para realizar la operación de potencia más adelante. Se eligen y declaraon los tipos
de variables según lo requerido por la ecuación de interés compuesto. Se solicitan los datos por consola y se realiza la
operación. Finalmente se imprime por consola el resultado de la operación */

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    // Se declaran las variables según lo requerido
    float A;    /* A y P son float por tratarse de datos grandes
                y que pueden tener punto decimal*/
    float P;
                // r es float porque el dato requiere decimales
    float r;
    int n;
    int t;

    // Se solicitan todos los datos y se almacenan en las variables dadas

    cout << "Ingresa la cantidad inicial invertida: ";
    cin >> P;
    cout << "Ingresa la tasa de interés anual en porcentaje: ";
    cin >> r;
    cout << "Ingresa el número de veces que se aplica el interés al año: ";
    cin >> n;
    cout << "Ingresa el número de años: ";
    cin >> t;

    A = P*(pow(1+(r/(100*n)),n*t)); // Se realiza la operación, recordando que pow(numero a elevar, numero elevado).

    cout << "El interés compuesto es: " << A << endl;

}