/*Ejercicio N°2
Sistema de gestión de empleados. Usar HashMap para almacenar y gestionar empleados por
su número de identificación (ID).
● La clave será el número de identificación del empleado y el valor será su nombre.
● Implementa un menú con opciones para:
● Agregar un nuevo empleado.
● Buscar un empleado por su número de identificación.
● Eliminar un empleado del sistema.
● Imprimir la lista completa de empleados.
*/

#include <iostream>
#include "HashMap/HashMap.h"
using namespace std;


int main() {

    cout << "Ejercicio N° 2" << endl;
    unsigned int tamanoTabla = 11;
    int opcion, clave;
    string nom;
    HashMap<int,string> empleados(tamanoTabla);

    do {
        cout << "----------MENU----------" << endl;
        cout << "1. Agregar un nuevo empleado" << endl;
        cout << "2. Buscar un empleado por su número de identificación" << endl;
        cout << "3. Eliminar un empleado del sistema" << endl;
        cout << "4. Imprimir la lista completa de empleados" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el nombre" << endl;
                cin >> nom;
                cout << "Ingrese la clave" << endl;
                cin >> clave;

                try{
                    empleados.put(clave, nom);
                    cout << "agregado" << endl;
                }
                catch (int e){
                    cout << "clave ya existente" << endl;
                }
                break;

            case 2:
                cout << "Ingrese la clave del empleado que busca" << endl;
                cin >> clave;

                try{
                    cout << empleados.get(clave) << endl;
                }
                catch (int e){
                    cout << "Clave no encontrada" << endl;
                }
                break;

            case 3:
                cout << "Ingrese la clave del empleado que desea remover" << endl;
                cin >> clave;

                try{
                    empleados.remove(clave);
                    cout << "Empleado removido" << endl;
                }
                catch (int e){
                    cout << "Clave no encontrada" << endl;
                }

                break;
            case 4:
                empleados.print();
                break;
            case 5:
                break;
        }

    }while (opcion !=5);

    return 0;
}
