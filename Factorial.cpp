/**
Archivo: Factorial.cpp

Descripcion:
Este programa realiza dos funciones, 1:El proceso de factorial con el valor que el usuario ingrese, mediante el metodo de recursividad, 2: Realiza una simulacion de un cajero, para consultar saldo y reirar

Autor: Luis Ubaldo Flores Pineda
Fecha de creacion: 29/10/2024
Ultima modificacion: 29/10/2024

Version: 1.0

Uso:
1. Ejecute el programa
2. Seleccion de la funcion que desea escojer
3: Si selecciona la de Factorial
    3.1. Ingrese hasta que valor desea realizar el factorial
    3.2. El programa mostrara el falor de factorial hasta donde se indico
    3.3. Podra seleccionar si desea salir o continuar
4: Si selecciona el cajero automatico
    4.1. Podra seleccionar la opcion de ver saldo, consultar saldo y salir del menu
    4.2. Al seleccionar la opcion de consultar saldo
        4.2.1. Se motrara el saldo actual del usuario
    4.3. Al seleccionar la opcion de retirar saldo
        4.3.1. El usuario ingresara el saldo a retorar
        4.3.2. Se mostrara cuanto saldo de reitro
        4.3.3. Se mostrara el saldo actual
    4.4. Al seleccionar salir, regresara al menu anterior 
4. Al selccionar salir, concluye el programa*/

/**LIBRERIAS*/
#include <iostream>  
using namespace std;

/**Funcion Factorial - Realiza el calculo recursivo del factorial*/
int factorial(int i){
    /**Caso base: si el número es 0, retorna 1 (0! = 1)*/
    if(i == 0){
        return 1;    
    }
    /**Caso recursivo: multiplica el número actual por el factorial del número anterior*/
    /**Ejemplo: 5! = 5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2 * 1*/
    return i * factorial(i-1);    
}

/**Funcion Principal*/
int main(){
    /**Declaración de variables para los menus*/
    int opcion,opcion2,opcion3;
    int i; /**Variable para almacenar el número del factorial*/

    /**Bucle principal del programa*/
    do{
        /**Menú principal*/
        cout<<"Bienvenido, Ingrese que seccion va a utilizar: "<<endl;
        cout<<"Opciones: 1: Factorial - 2: Cajero - 3:Salir"<<endl;
        cout<<"Opcion: ";
        cin>>opcion;
        
        /**Opción 1: Cálculo de Factorial*/
        if(opcion==1){
            do{
                cout<<"----- FACTORIAL -----"<<endl;
                cout<<"Ingrese hasta que valor desea obtener Factorial: "<<endl;
                cin >> i; /**Lee el número para calcular su factorial*/
                cout << factorial(i) << endl; // Muestra el resultado
                /**Pregunta si desea continuar calculando factoriales*/
                cout<<"Desea seguir en esta seccion? 1: Si - 2: No "<<endl;
                cout<<"Opcion: "<<endl;
                cin>>opcion2;
            }while(opcion2 != 2); /**Continúa hasta que el usuario elija salir*/
        }

        /**Opción 2: Sistema de Cajero*/
        else if(opcion==2){
            int saldo=20000,retiro; /**Inicializa saldo con 20000*/

            do{
                /**Menú del cajero*/
                cout<<"----- CAJERO -----"<<endl;
                cout<<"Bienvenido, que desea realizar?"<<endl;
                cout<<"1: Consultar saldo - 2: Retrirar dinero - 3: Salir"<<endl;
                cout<<"Opcion: ";
                cin>>opcion3;

                /**Opción 1: Consulta de saldo*/
                if(opcion3==1){
                    cout<<"Su saldo es de: "<<saldo<<endl;
                }
                /**Opción 2: Retiro de dinero*/
                else if(opcion3==2){
                    if(saldo>0){ /**Verifica que haya saldo disponible*/
                        cout<<"Ingrese cuanto desea retirar: "<<endl;
                        cin>>retiro;
                        /**Bucle para validar que el retiro no exceda el saldo*/
                        do {
                            if(retiro>saldo){
                                cout<<"No puede sacar mas de lo que tiene en su cuenta, ingrese otro valor: "<<endl;
                                cin>>retiro;
                            }
                        }while(retiro>saldo);
                        
                        /**Procesa el retiro*/
                        cout<<"Acaba de retirar: "<<retiro<<endl; 
                        saldo=saldo-retiro; /**Actualiza el saldo*/
                        cout<<"Le queda en la cuenta: "<<saldo<<endl;
                    }else{
                        cout<<"YA NO PUEDE RETIRAR MAS DINERO"<<endl;
                    }
                }
            }while(opcion3 != 3); /**Continúa hasta que el usuario elija salir*/
        }
    }while(opcion != 3); /**Continúa el programa hasta que el usuario elija salir*/    

return 0;
system("pause");/**Evita que se cierre de inmediato el programa en el .exe */
}
