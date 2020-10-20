#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float xa=0,xe,ya,ye,anga,ange,pi=3.1416;
    int  opcion=1;
    cout << "El programa definira las coordenadas de impacto de las balas." << endl;
    cout << "Posicion en y del canion ofensivo: " << endl;
    cin >> ya;
    cout << "Posicion en x del canion defensivo: " << endl;
    cin >> xe;
    cout << "Posicion en y del canion defensivo: " << endl;
    cin >> ye;
    while (opcion != 0){
        cout << "1.Generar disparos (al menos 3) ofensivos que comprometan la integridad del canion defensivo." << endl;
        cout << "2.Generar disparos defensivos que comprometan la integridad del canion ofensivo." << endl;
        cout << "3.Dado un disparo ofensivo, generar (al menos tres) disparos defensivos que impida que el ";
        cout<<"canion defensivo sea destruido sin importar si el canion ofensivo pueda ser destruido." << endl;
        cout << "4.Dado un disparo ofensivo, generar (al emnos tres) disparo defensivos que impidan que los";
        cout << "caniones defensivo y ofensivo puedan ser destruidos." << endl;
        cout << "Elija la opcion o 0 para salir:" << endl;
        cin >> opcion;
        switch (opcion) {
            case 0:{break;}
            case 1:{
                for (int i = 0; i < 3; i++){
                    cout << "Angulo sobre la horizontal del canion ofensivo: " << endl;
                    cin >> anga;
                    xe = xe - (0.05*xe);
                    ye = ye - (0.05*ye);
                    float vi=0, t = 0,vf=0, angra = 0;
                    angra = (anga*pi)/180;
                    t = sqrt((ye-ya-(xe*tan (angra)))/-4.9);
                    vi = xe / (cos(angra)*t);
                    vf = (vi*sin(angra))-(9.8*t);
                    cout << "La bala impactara el canion defensivo si se lanza con una velocidad inicial: "<< vi << endl;
                    cout << "Y el tiempo en el que explotara la bala es:" << t << " .Y su velocidad final sera: " << vf<< endl;
                }
                cout << "Recuerde que el signo de la velocidad solo indica la direccion." << endl << endl;
            }break;
            case 2:{
            for (int i = 0; i < 3; i++){
                cout << "Angulo sobre la horizontal del canion defensivo: " << endl;
                cin >> ange;
                float vi=0, t = 0,vf=0, angra = 0;
                angra = (anga*pi)/180;
                t = sqrt((-ye+ya+(xe*tan (angra)))/4.9);
                vi = -xe / (cos(angra)*t);
                vf = (vi*sin(angra))+(9.8*t);
                cout << "La bala impactara el canion defensivo si se lanza con una velocidad inicial: "<< vi << endl;
                cout << "Y el tiempo en el que explotara la bala es:" << t << " .Y su velocidad final sera: " << vf<< endl;
            }
            cout << "Recuerde que el signo de la velocidad solo indica la direccion." << endl << endl;
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
