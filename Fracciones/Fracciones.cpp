// Fracciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    int op, num1, dem1, num2, dem2, mcd{}, p1, p2, suma{}, resta{}, multiplicacion, division, entero, s = 0, i, a{}, b{};

    cout << "Introduce la primera fraccion:\n";
    cout << "Numerador: ";
    cin >> num1;
    cout << "Denominador: ";
    cin >> dem1;
    cout << "Introduce la segunda fraccion:\n";
    cout << "Numerador: ";
    cin >> num2;
    cout << "Denominador: ";
    cin >> dem2;

    cout << "Elige una opicion:\n1.Suma\n2.Resta\n3.Multiplicacion\n4.Division\n";
    cin >> op;
    if (dem1 == 0 || dem2 == 0) {
        cout << "Introduce un valor correcto";
    }
    else {
        switch (op) {
        case 1:
            mcd = dem1 * dem2;
            p1 = num1 * dem2;
            p2 = num2 * dem1;
            suma = p1 + p2;
            entero = suma / mcd;
            if (entero >= 1) {
                cout << "El resultado es: " << entero << " ";
            }
            if (suma == 0) {
                cout << " El resultado es 0";
            }
            if (entero > 0) {
                int r = suma % mcd;
                a = max(r, mcd);
                b = min(r, mcd);

                do {
                    i = b;
                    b = a % b;
                    a = i;
                } while (b != 0);

                a = r / i;
                b = mcd / i;

                cout << a << "/" << b << "\n";
            }
            else {
                int r = suma % mcd;
                a = max(r, mcd);
                b = min(r, mcd);

                do {
                    i = b;
                    b = a % b;
                    a = i;
                } while (b != 0);

                a = r / i;
                b = mcd / i;

                cout << "El resultado es: " << a << "/" << b << "\n";
            }
            break;

        case 2:
            mcd = dem1 * dem2;
            p1 = num1 * dem2;
            p2 = num2 * dem1;
            resta = p1 - p2;
            entero = resta / mcd;
            if (resta == 0) {
                cout << " El resultado es 0";
            }
            if (entero >= 1) {
                cout << "El resultado es: " << entero << " ";
            }
            if (entero > 0) {
                int r = resta % mcd;
                a = max(r, mcd);
                b = min(r, mcd);

                do {
                    i = b;
                    b = a % b;
                    a = i;
                } while (b != 0);

                a = r / i;
                b = mcd / i;

                cout << a << "/" << b << "\n";
            }
            else {
                int r = suma % mcd;
                a = max(r, mcd);
                b = min(r, mcd);

                do {
                    i = b;
                    b = a % b;
                    a = i;
                } while (b != 0);

                a = r / i;
                b = mcd / i;

                cout << "El resultado es: " << a << "/" << b << "\n";
            }
            break;

        case 3:
            mcd = dem1 * dem2;
            multiplicacion = num1 * num2;
            entero = multiplicacion / mcd;
            if (entero >= 1) {
                cout << "El resultado es: " << entero << " ";
            }
            if (multiplicacion == 0) {
                cout << " El resultado es 0";
            }
            if (entero > 0) {
                int r = multiplicacion % mcd;
                a = max(r, mcd);
                b = min(r, mcd);

                do {
                    i = b;
                    b = a % b;
                    a = i;
                } while (b != 0);

                a = r / i;
                b = mcd / i;

                cout << a << "/" << b << "\n";
            }
            else {
                int r = multiplicacion % mcd;
                a = max(r, mcd);
                b = min(r, mcd);

                do {
                    i = b;
                    b = a % b;
                    a = i;
                } while (b != 0);

                a = r / i;
                b = mcd / i;

                cout << "El resultado es: " << a << "/" << b << "\n";
            }
            break;

        case 4:
            mcd = num2 * dem1;
            division = num1 * dem2;
            entero = division / mcd;
            if (entero >= 1) {
                cout << "El resultado es: " << entero << " ";
            }
            if (division == 0) {
                cout << " El resultado es 0";
            }
            if (entero > 0) {
                int r = division % mcd;
                a = max(r, mcd);
                b = min(r, mcd);

                do {
                    i = b;
                    b = a % b;
                    a = i;
                } while (b != 0);

                a = r / i;
                b = mcd / i;

                cout << a << "/" << b << "\n";
            }
            else {
                int r = division % mcd;
                a = max(r, mcd);
                b = min(r, mcd);

                do {
                    i = b;
                    b = a % b;
                    a = i;
                } while (b != 0);

                a = r / i;
                b = mcd / i;

                cout << "El resultado es: " << a << "/" << b << "\n";
            }
            break;

        }
    }
}