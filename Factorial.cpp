/******************************************************************************
  Archivo: Factorial.cpp
 
  Descripcion:
  Este programa realiza el proceso de factorial con el valor que el usuario ingrese, mediante el metodo de recursividad 
 
  Autor: Luis Ubaldo Flores Pineda
  Fecha de creacion: 29/10/2024
  Ultima modificacion: 29/10/2024
 
  Version: 1.0
 
  Uso:
  1. Ejecute el programa
  2. Ingrese hasta que valor desea realizar el factorial
  3. El programa mostrara el falor de factorial hasta donde se indico
 
 ******************************************************************************/

/**LIBRERIAS */
#include <iostream>
using namespace std;

/**Funcion Factorial */
int factorial(int i){

    /**Si el usuario ingresa 1, debe regresar 1 */
    if(i == 0){
        return 1;    // caso base
    }
    /**De lo contario, si el usuario ingresa otro valor se multiplicara el valor ingresado por el otro valor guardado pero va dismiuyendo de uno en uno */
    return i * factorial(i-1);    // multiplicamos en lugar de restar
}

/**Funcion Principal */
int main(){
    
    int i; /**Declaracion de variable */
    cin >> i; /**Obtencion del valor a obtner el factorial */
    cout << factorial(i) << endl; /**Impresion del valor factorial */
}