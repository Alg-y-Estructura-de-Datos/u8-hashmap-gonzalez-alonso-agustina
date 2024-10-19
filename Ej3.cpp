/*Ejercicio N°3
Registro de productos en una tienda. Almacenar productos de una tienda usando un código
único como clave y el nombre del producto como valor. Usa el HashMap para almacenar los
productos. El código de producto es la clave y el nombre es el valor.
Implementa opciones para:
● Añadir productos.
● Buscar productos por su código.
● Actualizar el nombre de un producto existente.
● Eliminar productos.
● Imprimir todos los productos registrados.
● Desafío adicional: Implementa el manejo de colisiones, y lanza excepciones cuando se
intenten agregar productos con códigos ya existentes o buscar productos no
registrados.
*/

#include <iostream>
#include "HashMap/HashMap.h"
using namespace std;

int main (){
    cout << "Ej 3" << endl;

    HashMap<int, string>productos(10);
    int opcion, clave;
    string prod;

    do{
        cout << "----------MENU----------" << endl;
        cout << "1. Añadir productos" << endl;
        cout << "2. Buscar productos por su código" << endl;
        cout << "3. Actualizar el nombre de un producto existente" << endl;
        cout << "4. Eliminar productos" << endl;
        cout << "5. Imprimir todos los productos registrados" << endl;
        cout << "6. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el nombre del producto" << endl;
                cin >> prod;
                cout << "Ingrese la clave" << endl;
                cin >> clave;

                try {
                    productos.put(clave, prod);
                }catch (int e){
                    cout << "Error" << endl;
                }
                break;

            case 2:
                try {
                  cout << productos.get(clave) << endl;
                }catch (int e){
                    cout << "Error" << endl;
                }
                break;

            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
        }

    }while (opcion!=6);
}