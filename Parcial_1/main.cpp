#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float xa=0,xe,ya,ye,anga,ange;
    int  opcion=1;
    cout << "El programa definira las coordenadas de impacto de las balas." << endl;
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
        cout << "caniones defensivo y ofensivo puedan ser destruidos." << endl;
        cout << "Elija la opción o 0 para salir:" << endl;
        cin >> opcion;
        switch (opcion) {
            case 0:{break;}
            case 1:{
                xe = xe - (0.05*xe);
                ye = ye - (0.05*ye);
                float vi=0, t = 0,vf=0;
                t = sqrt((ye-(xe*tan (anga)))/-4.9);
                vi = xe / (cos(anga)*t);
                vf = (vi*sin(anga))-(9.8*t);
                cout << "La bala impactara el canion defensivo si se lanza con una velocidad inicial: "<< vi << endl;
                cout << "Y el tiempo en el que explotara la bala es:" << t << " .Y su velocidad final sera: " << vf;
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




}
