#include <iostream>

using namespace std;

int main()
{
    int xa=0,xe,ya,ye,anga,ange, opcion=1;
    cout << "El programa definirá las coordenadas de impacto de las balas." << endl;
    cout << "Posicion en y del canion amigo: " << endl;
    cin >> ya;
    cout << "Posicion en x del canion enemigo: " << endl;
    cin >> xe;
    cout << "Posicion en y del canion amigo: " << endl;
    cin >> ye;
    cout << "Angulo sobre la horizontal del canion amigo: " << endl;
    cin >> anga;
    cout << "Angulo sobre la horizontal del canion amigo: " << endl;
    cin >> ange;
    while (opcion != 0){
        cout << "1.Generar disparos ofensivos que comprometan la integridad del canion defensivo." << endl;
        cout << "2.Generar disparos defensivos que comprometan la integridad del canion ofensivo." << endl;
        cout << "3.Dado un disparo ofensivo, generar (al menos tres) disparos defensivos que impida que el ";
        cout<<"canion defensivo sea destruido sin importar si el cañón ofensivo pueda ser destruido." << endl;
        cout << "4.Dado un disparo ofensivo, generar (al emnos tres) disparo defensivos que impidan que los";
        cout << "cañones defensivo y ofensivo puedan ser destruidos." << endl;
        cout << "Elija la opción o 0 para salir:" << endl;
        cin >> opcion;
    }
    switch (opcion) {
        case 0:{break;}
        case 1:{

        }break;
        case 2:{

        }break;
        case 3:{

        }break;
        case 4:{

        }break;
        default:{
            cout << "Opcion incorrecta." << endl;
        }break;
    }



}
