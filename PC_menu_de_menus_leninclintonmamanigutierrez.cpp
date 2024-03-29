#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcionPrincipal, opcionSubMenu1, opcionSubMenu2, opcionSubMenu3;
    float lado, radio, altura, base, area, volumen, perimetro;

    do {
       cout<<"#############################################"<<endl;
        cout<<"______PENSAMIENTO COMPUTACIONAL______"<<endl;
        cout<<"Ing. Miguel Romilio Aceituno Rojo"<<endl;
        cout<<"Est. Lenin Clinton Mamani Gutierrez"<<endl;
        cout<<"Codigo: 152082"<<endl; 
        cout << "################################################" << endl;
        cout << "     Almacen de Areas, Volumenes y Perimetros     " << endl;
        cout << "################################################" << endl;
        cout << "1. Calcular Area" << endl;
        cout << "2. Calcular Volumen" << endl;
        cout << "3. Calcular Perimetro" << endl;
        cout << "4. Salir" << endl;
        cout << "################################################" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcionPrincipal;

        switch (opcionPrincipal) {
            case 1:
                do {
                    cout << "\n####################################" << endl;
                    cout << "    Submenu 1 - Calcular Area            " << endl;
                    cout << "####################################" << endl;
                    cout << "1. Area de un Cuadrado" << endl;
                    cout << "2. Area de un Circulo" << endl;
                    cout << "3. Area de un Triangulo" << endl;
                    cout << "4. Area de un Rectangulo" << endl;
                    cout << "5. Area de un Rombo" << endl;
                    cout << "6. Area de un Trapecio" << endl;
                    cout << "7. Area de un Pentagono Regular" << endl;
                    cout << "8. Area de un Hexagono Regular" << endl;
                    cout << "9. Area de un Circulo Sector" << endl;
                    cout << "10. Area de un Paralelogramo" << endl;
                    cout << "11. Volver Atras" << endl;
                    cout << "Seleccione una opcion: ";
                    cin >> opcionSubMenu1;

                    switch (opcionSubMenu1) {
                        case 1:
                            cout << "Ingrese el lado del cuadrado: ";
                            cin >> lado;
                            area = lado * lado;
                            cout << "El area del cuadrado es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 2:
                            cout << "Ingrese el radio del circulo: ";
                            cin >> radio;
                            area = M_PI * pow(radio, 2);
                            cout << "El area del circulo es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 3:
                            cout << "Ingrese la base del triangulo: ";
                            cin >> base;
                            cout << "Ingrese la altura del triangulo: ";
                            cin >> altura;
                            area = 0.5 * base * altura;
                            cout << "El area del triangulo es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 4:
                            cout << "Ingrese la base del rectangulo: ";
                            cin >> base;
                            cout << "Ingrese la altura del rectangulo: ";
                            cin >> altura;
                            area = base * altura;
                            cout << "El area del rectangulo es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 5:
                            cout << "Ingrese la diagonal mayor del rombo: ";
                            cin >> base;
                            cout << "Ingrese la diagonal menor del rombo: ";
                            cin >> altura;
                            area = (base * altura) / 2.0;
                            cout << "El area del rombo es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 6:
                            cout << "Ingrese la base mayor del trapecio: ";
                            cin >> base;
                            cout << "Ingrese la base menor del trapecio: ";
                            cin >> lado;
                            cout << "Ingrese la altura del trapecio: ";
                            cin >> altura;
                            area = ((base + lado) * altura) / 2.0;
                            cout << "El area del trapecio es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 7:
                            cout << "Ingrese el lado del pentagono regular: ";
                            cin >> lado;
                            area = 1.0 / 4.0 * sqrt(5 * (5 + 2 * sqrt(5))) * pow(lado, 2);
                            cout << "El area del pentagono regular es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 8:
                            cout << "Ingrese el lado del hexagono regular: ";
                            cin >> lado;
                            area = 3.0 / 2.0 * sqrt(3) * pow(lado, 2);
                            cout << "El area del hexagono regular es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 9:
                            cout << "Ingrese el radio del circulo sector: ";
                            cin >> radio;
                            cout << "Ingrese el angulo en radianes del circulo sector: ";
                            cin >> altura;
                            area = 0.5 * pow(radio, 2) * altura;
                            cout << "El area del circulo sector es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 10:
                            cout << "Ingrese la base del paralelogramo: ";
                            cin >> base;
                            cout << "Ingrese la altura del paralelogramo: ";
                            cin >> altura;
                            area = base * altura;
                            cout << "El area del paralelogramo es: " << area << " unidades cuadradas" << endl;
                            break;

                        case 11:
                            break;

                        default:
                            cout << "Opcion invalida en Submenu 1" << endl;
                            break;
                    }
                } while (opcionSubMenu1 != 11);
                break;

            case 2:
                do {
                    cout << "\n#######################################" << endl;
                    cout << "    Submenu 2 - Calcular Volumen           " << endl;
                    cout << "###############################$$######" << endl;
                    cout << "1. Volumen de un Cubo" << endl;
                    cout << "2. Volumen de un Cilindro" << endl;
                    cout << "3. Volumen de una Esfera" << endl;
                    cout << "4. Volumen de un Cono" << endl;
                    cout << "5. Volumen de un Prisma Rectangular" << endl;
                    cout << "6. Volumen de una Piramide Cuadrangular" << endl;
                    cout << "7. Volumen de un Cilindro Hueco" << endl;
                    cout << "8. Volumen de una Esfera Hueca" << endl;
                    cout << "9. Volumen de una Piramide Triangular" << endl;
                    cout << "10. Volumen de un Cono Truncado" << endl;
                    cout << "11. Volver Atras" << endl;
                    cout << "Seleccione una opcion: ";
                    cin >> opcionSubMenu2;

                    switch (opcionSubMenu2) {
                        case 1:
                            cout << "Ingrese la longitud de la arista del cubo: ";
                            cin >> lado;
                            volumen = pow(lado, 3);
                            cout << "El volumen del cubo es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 2:
                            cout << "Ingrese el radio del cilindro: ";
                            cin >> radio;
                            cout << "Ingrese la altura del cilindro: ";
                            cin >> altura;
                            volumen = M_PI * pow(radio, 2) * altura;
                            cout << "El volumen del cilindro es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 3:
                            cout << "Ingrese el radio de la esfera: ";
                            cin >> radio;
                            volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);
                            cout << "El volumen de la esfera es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 4:
                            cout << "Ingrese el radio de la base del cono: ";
                            cin >> radio;
                            cout << "Ingrese la altura del cono: ";
                            cin >> altura;
                            volumen = (1.0/3) * M_PI * pow(radio, 2) * altura;
                            cout << "El volumen del cono es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 5:
                            cout << "Ingrese la longitud de la base del prisma: ";
                            cin >> base;
                            cout << "Ingrese el ancho de la base del prisma: ";
                            cin >> lado;
                            cout << "Ingrese la altura del prisma: ";
                            cin >> altura;
                            volumen = base * lado * altura;
                            cout << "El volumen del prisma rectangular es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 6:
                            cout << "Ingrese la longitud de la base de la piramide: ";
                            cin >> base;
                            cout << "Ingrese el ancho de la base de la piramide: ";
                            cin >> lado;
                            cout << "Ingrese la altura de la piramide: ";
                            cin >> altura;
                            volumen = (1.0 / 3.0) * base * lado * altura;
                            cout << "El volumen de la piramide cuadrangular es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 7:
                            cout << "Ingrese el radio interno del cilindro hueco: ";
                            cin >> radio;
                            cout << "Ingrese el radio externo del cilindro hueco: ";
                            cin >> base;
                            cout << "Ingrese la altura del cilindro hueco: ";
                            cin >> altura;
                            volumen = M_PI * (pow(base, 2) - pow(radio, 2)) * altura;
                            cout << "El volumen del cilindro hueco es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 8:
                            cout << "Ingrese el radio interno de la esfera hueca: ";
                            cin >> radio;
                            cout << "Ingrese el radio externo de la esfera hueca: ";
                            cin >> base;
                            volumen = (4.0 / 3.0) * M_PI * ((pow(base, 3) - pow(radio, 3)) / 3.0);
                            cout << "El volumen de la esfera hueca es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 9:
                            cout << "Ingrese la longitud de la base de la piramide triangular: ";
                            cin >> base;
                            cout << "Ingrese el ancho de la base de la piramide triangular: ";
                            cin >> lado;
                            cout << "Ingrese la altura de la piramide triangular: ";
                            cin >> altura;
                            volumen = (1.0 / 3.0) * base * lado * altura;
                            cout << "El volumen de la piramide triangular es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 10:
                            cout << "Ingrese el radio mayor del cono truncado: ";
                            cin >> base;
                            cout << "Ingrese el radio menor del cono truncado: ";
                            cin >> radio;
                            cout << "Ingrese la altura del cono truncado: ";
                            cin >> altura;
                            volumen = (1.0 / 3.0) * M_PI * (pow(base, 2) + base * radio + pow(radio, 2)) * altura;
                            cout << "El volumen del cono truncado es: " << volumen << " unidades cubicas" << endl;
                            break;

                        case 11:
                            break;

                        default:
                            cout << "Opcion invalida en Submenu 2" << endl;
                            break;
                    }
                } while (opcionSubMenu2 != 11);
                break;
            case 3:
                do {
                    cout << "\n==========================================" << endl;
                    cout << "    Submenu 3 - Calcular Perimetro           " << endl;
                    cout << "==========================================" << endl;
                    cout << "1. Perimetro de un Cuadrado" << endl;
                    cout << "2. Perimetro de un Circulo" << endl;
                    cout << "3. Perimetro de un Triangulo Equilatero" << endl;
                    cout << "4. Perimetro de un Rectangulo" << endl;
                    cout << "5. Perimetro de un Rombo" << endl;
                    cout << "6. Perimetro de un Trapecio Regular" << endl;
                    cout << "7. Perimetro de un Pentagono Regular" << endl;
                    cout << "8. Perimetro de un Hexagono Regular" << endl;
                    cout << "9. Perimetro de un Heptagono Regular" << endl;
                    cout << "10. Perimetro de un Octagono Regular" << endl;
                    cout << "11. Volver Atras" << endl;
                    cout << "Seleccione una opcion: ";
                    cin >> opcionSubMenu3;

                    switch (opcionSubMenu3) {
                        case 1:
                            cout << "Ingrese el lado del cuadrado: ";
                            cin >> lado;
                            perimetro = lado * 4;
                            cout << "El perimetro del cuadrado es: " << perimetro << " unidades " << endl;
                            break;

                        case 2:
                            cout << "Ingrese el radio del circulo: ";
                            cin >> radio;
                            perimetro = M_PI * radio* 2;
                            cout << "El perimetro del circulo es: " << perimetro << " unidades " << endl;
                            break;

                        case 3:
                            cout << "Ingrese la lado del triangulo equilatero: ";
                            cin >> lado;
                            perimetro = lado * 3;
                            cout << "El perimetro del triangulo es: " << perimetro << " unidades " << endl;
                            break;

                        case 4:
                            cout << "Ingrese la base  del rectangulo: ";
                            cin >> base;
                            cout << "Ingrese la altura del rectangulo: ";
                            cin >> altura;
                            perimetro= (base + altura) *2;
                            cout << "El perimetro del rectangulo es: " << perimetro << " unidades " << endl;
                            break;

                        case 5:
                            cout << "Ingrese el lado del rombo: ";
                            cin >> lado;
                            perimetro= lado *4;
                            cout << "El perimetro del rombo es: " << perimetro << " unidades " << endl;
                            break;

                        case 6:
                            cout << "Ingrese el lado del trapecio regular: ";
                            cin >> lado;
                            perimetro= lado *4;
                            cout << "El perimetro del trapecio regular es: " << perimetro << " unidades " << endl;
                            break;

                        case 7:
                            cout << "Ingrese el lado del pentagono regular: ";
                            cin >> lado;
                            perimetro= lado *5;
                            cout << "El perimetro del pentagono regular es: " << perimetro << " unidades " << endl;
                            break;

                        case 8:
                            cout << "Ingrese el lado del hexagono regular: ";
                            cin >> lado;
                            perimetro= lado *6;
                            cout << "El perimetro del hexagono regular es: " << perimetro << " unidades " << endl;
                            break;

                        case 9:
                            cout<< "Ingrese el lado del heptagono regular: ";
                            cin >> lado;
                            perimetro= lado *7;
                            cout << "El perimetro del heptagono regular es: " << perimetro << " unidades " << endl;
                            break;

                        case 10:
                            cout<< "Ingrese el lado del octagono regular: ";
                            cin >> lado;
                            perimetro= lado *8;
                            cout << "El perimetro del octagono regular es: " << perimetro << " unidades " << endl;
                            break;

                        case 11:
                            break;

                        default:
                            cout << "Opcion invalida en Submenu 3" << endl;
                            break;
                    }
                } while (opcionSubMenu3 != 11);
                break;
            case 4:
                cout << "Saliendo del programa. ¡Hasta luego!" << endl;
                break;

            default:
                cout << "Opcion invalida en Menu Principal" << endl;
                break;
        }

    } while (opcionPrincipal != 4);

    return 0;
}
