/* El código solicita un número entero por consola, se almacena el valor en una variable y se evalúa mediante condicionales
"if" los posibles casos para determinar si el número es positivo y par. Finalmente se imprime el */ 


#include <iostream>
using namespace std;


int main(){

    int num; // Como el número es entero, se declara como tal

    cout << "Ingresa un número: "; // Se solicita el dato al usuario

    cin >> num; // Se almacena el dato ingresado en "num"

    if ( ( num > 0 ) && ( num % 2 == 0 ) ){ // Se evalua si el número ingresado es mayor que cero y su módulo es cero, es decir si es positivo y par
        cout << "El número es par y positivo." << endl;
    }
    else if( num == 0 ){    // Si el número ingresado es cero, la paridad y signo son ambiguos.
        cout << "El número es cero. Sus atributos de paridad y signo son ambiguos." << endl;
    }
    else{   // Si ninguna condición se cumplió, el número tiene las condiciones contrarias a las evaluadas
        cout << "El número no es par, o no es positivo, o no es ninguna de las dos." << endl;
    }

}