/*Ejercicio N°4
Sistema de votaciones
Objetivo: Crear un sistema de votaciones donde cada votante tiene un número de
identificación y vota por un candidato.
La clave será el número de identificación del votante y el valor será el nombre del candidato
por el que ha votado.
Implementa funciones para:
● Registrar un voto.
● Verificar por quién votó una persona (buscando por su ID).
● Eliminar un voto si fue incorrecto.
● Imprimir todos los votos registrados.
Puntos clave:
● Prevenir que un votante registre más de un voto.
● Mostrar un error si se intenta eliminar un voto no existente*/

#include <iostream>
#include "HashMap/HashMap.h"
using namespace std;

int main (){
    cout << "Ej 4" << endl;

    HashMap<int, string>votaciones (10);
    int opcion, clave;
    string voto;

    do{
        cout << "----------MENU----------" << endl;
        cout << "1. Registrar un voto" << endl;
        cout << "2. Verificar por quién votó una persona" << endl;
        cout << "3. Eliminar un voto si fue incorrecto" << endl;
        cout << "4. Imprimir todos los votos registrados" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
            cout << "Ingrese la clave" << endl;
            cin >> clave;
            cout << "Ingrese el voto" << endl;
            cin >> voto;

                try{
                    votaciones.put(clave,voto);
                }catch (int e){
                    cout << "Error" << endl;
                }
                break;

            case 2:
                cout << "Ingrese la clave de quien desea revisar el voto" << endl;
                cin >> clave;

                try{
                   cout <<  votaciones.get(clave) << endl;
                }catch (int e){
                    cout << "Error" << endl;
                }

                break;
            case 3:
                cout << "Ingrese la clave de la persona con voto incorrecto" << endl;
                cin >> clave;

                try{
                    votaciones.remove(clave);
                }catch (int e){
                    cout << "Error" << endl;
                }

                break;
            case 4:
                votaciones.print();

                break;
            case 5:
                break;
        }
    } while (opcion !=5);
}