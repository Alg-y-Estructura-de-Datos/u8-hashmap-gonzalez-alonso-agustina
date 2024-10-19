/*Ejercicio N°5
Biblioteca digital
Objetivo: Gestionar una colección de libros usando un sistema de hash.
● La clave será el ISBN del libro y el valor será el título del libro.
● Crea funciones para:
● Agregar nuevos libros a la biblioteca.
● Buscar un libro por su ISBN.
● Eliminar libros del sistema.
● Imprimir todos los libros registrados.
Desafíos:
● Implementar la resolución de colisiones.
● Verificar que no se repitan libros con el mismo ISBN.*/

#include <iostream>
#include "HashMap/HashMap.h"
using namespace std;

int main (){
    cout << "Ej 5" << endl;

    HashMap<int, string>bibloteca(10);
    int opcion, clave;
    string titulo;

    do{
        cout << "----------MENU----------" << endl;
        cout << "1. Agregar nuevos libros a la biblioteca" << endl;
        cout << "2. Buscar un libro por su ISBN" << endl;
        cout << "3. Eliminar libros del sistema" << endl;
        cout << "4. Imprimir todos los libros registrados" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese la clave" << endl;
                cin >> clave;
                cout << "Ingrese el titulo" << endl;
                cin >> titulo;

                try{
                    bibloteca.put(clave,titulo);
                }catch (int e){
                    cout << "Error" << endl;
                }
                break;

            case 2:
                cout << "Ingrese la clave del libro que desea buscar" << endl;
                cin >> clave;

                try{
                    cout <<  bibloteca.get(clave) << endl;
                }catch (int e){
                    cout << "Error" << endl;
                }

                break;
            case 3:
                cout << "Ingrese la clave del libro que desea eliminar" << endl;
                cin >> clave;

                try{
                    bibloteca.remove(clave);
                }catch (int e){
                    cout << "Error" << endl;
                }

                break;
            case 4:
                bibloteca.print();

                break;
            case 5:
                break;
        }
    }while (opcion !=5);
}