#include <iostream>
using namespace std;

int main() {
    string opcion;
    string personaje;

    cout << "Bienvenido a su juego de Monkey King" << endl;
    cout << "Digite su nombre de jugador: " << endl;
    cin >> personaje;
    cout << "Bienvenido " << personaje << ". El juego consiste en luchar con distintos jefes de nivel. El juego consiste en 10 niveles y cada uno tiene su respectivo jefe de nivel. Tienes 3 vidas. Si necesitas mas informacion escribe 'si' o 'no': " << endl;
    cin >> opcion;

do
{
    
    if (opcion == "si") {
        cout << "ccdcdcd" << endl;

    } else if (opcion == "no") {
        cout << "Su juego empieza en breve" << endl;
    } else {
        cout << "Digite una opcion valida " << endl;
    }
    cout<<"necesitas mas ayuda?"<<endl;
    cout<<"si"<<endl;
    cout<<" no"<<endl;
    cin>>opcion;
} while (opcion == "si");
cout<<personaje<<" ""tu rival es Sanchez apellido Ceren "" ""te lanzo laminasos , Que vas hacer?Elige tu opcion con su respectivo numero"<<endl;
cout<<"1. Enviarle un nayib" << endl;
cout << "2. Saltar" << endl;
cout << "3. Machetearlo" << endl;
cin>>opcion;
switch (opcion == "1")
{
case 1:
    cout << "si" << endl;
    break;  
default:
    break;
}

    return 0;
}