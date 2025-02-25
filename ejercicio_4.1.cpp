/* El código solicita los cinco números por consola y se van agregando progresivamente a las posiciones de un arreglo
previamente declarado, para lo cual es necesario añadir la librería de arreglos. Se calcula la suma recorriendo y sumando
los elementos del arreglo, y finalmente se imprime por consola el resultado de la suma junto a sus propiedades de paridad
y signo */

#include <iostream>
#include <array>
using namespace std;

int main(){

    int arreglo[5];
    int suma = 0;

    cout << "Ingresa el primer número entero: "; // Se solicita por consola el primer número
    cin >> arreglo[0];  // Se almacena el número ingresado por consola dentro de la primera posición del arreglo

    for (int i = 1; i < 4; i++){    /* Se solicitan los tres siguientes números y se almacenan en sus respectivas posiciones del arreglo
                                      arreglo */
        cout << "Ingresa el siguiente número entero: ";
        cin >> arreglo[i];
    }

    cout << "Ingresa el último número entero: ";  // Se solicita por consola el último número
    cin >> arreglo[4];  // Se almacena el número ingresado por consola dentro de la última posición del arreglo

    for (int i = 0; i < 5; i++){    // Se calcula la suma de todos los elementos del arreglo al recorrerlo

        suma = arreglo[i] + suma;

    }
    
    cout << "La suma de los números ingresados es: " << suma << endl;   // Se imprime el valor de la suma

    if ( ( suma > 0 ) && ( suma % 2 == 0 ) ){   /* Se evaluan distintos casos para conocer la paridad y signo utiliando
                                                condicionales y módulos, tal como se hizo en el ejercicio 2.2, y posteriormente
                                                se imprime el resultado */
        cout << "Además, esta suma es positiva y par." << endl;
    }
    else if ( ( suma < 0 ) && ( suma % 2 == 0 ) ){
        cout << "Además, esta suma es negativa y par." << endl;
    }
    else if ( ( suma > 0 ) && ( suma % 2 != 0 ) ){
        cout << "Además, esta suma es positiva e impar." << endl;
    }
    else if ( ( suma < 0 ) && ( suma % 2 != 0 ) ){
        cout << "Además, esta suma es negativa e impar." << endl;
    }
    else{
        cout << "Además, esta suma da cero, por lo tanto su paridad y signo son ambiguos." << endl;
    }
   

}