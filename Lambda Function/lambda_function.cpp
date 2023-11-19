#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
    // Definición básica y uso
    auto hola = []() { cout << "Hola mundo!"; };
    hola(); // Hola mundo!

    // Uso directo con parámetros
    cout<<endl<< [](double a, double b) { return (a + b); }(5, 4);  // 9

    // Captura por valor en lista
    double a{10}, b{15};
    auto suma = [a, b]() { std::cout<<endl<< "a+b: " << a + b; };
    suma(); // a+b: 25

    // Captura por referencia en lista
    int c{25};
    cout<<endl<<endl<< "&c ex: " << &c;
    auto imprimir = [&c]() { cout << "&c in: " << &c; }; // 0x3e6ddffb9c
    imprimir(); // 0x3e6ddffb9c

    // Captura de todo el contexto por valor
    auto imprimir_contexto_valor = [=](){
        cout<<endl<< "&a in: " << &a << ", &b in: " << &b << ", &c in: " << &c;
    };
    cout<<endl<<endl << "&a ex: " << &a << ", &b ex: " << &b << ", &c ex: " << &c;
    imprimir_contexto_valor();

    // Captura de todo el contexto por referencia
    auto imprimir_contexto_referencia = [&]() {
        cout<<endl << "&a in: " << &a << ", &b in: " << &b << ", &c in: " << &c;
    };
    std::cout<<endl<<endl << "&a ex: " << &a << ", &b ex: " << &b << ", &c ex: " << &c;
    imprimir_contexto_referencia();
}
