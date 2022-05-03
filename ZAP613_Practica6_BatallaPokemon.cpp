// ZAP613_Practica6_BatallaPokemon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int squiat = 1, charat = 2, pikaat = 2;
    int squivida = 10, charvida = 10, pikavida = 8;
    int opc,opc2;
    bool continuar = true;
    do {

    std::cout << "Escoge tu pokemon!\n";
    std::cout << "1: Squirtle:\nVida: 10\nAtaque:1\n";
    std::cout << "2: Charmander:\nVida: 10\nAtaque:2\n";
    std::cout << "3: Pika:\nVida: 8\nAtaque:2\n";
    std::cin >> opc;
    switch (opc)
    {
    case 1:
        std::cout << "Escogiste a Squirtle!\n";
        std::cout << "Tu rival es Charmander!\n";
            while (squivida>=0 && charvida>=0)
            {
                std::cout << "1. Ataque\n2. Defensa\n";
                std::cin >> opc2;
                switch (opc2)
                {
                case 1: charvida = charvida - 1;
                    squivida = squivida - 1;
                    break;
                case 2: squivida = squivida + 1;
                    break;
                default:
                    std::cout << "Escoge una opcion valida.\n";
                }
                std::cout << "La vida de Squirtle es: "<<squivida<<"\n";
                std::cout << "La vida de Charmander es: "<<charvida<<"\n";
            }
        break;
    case 2:
        std::cout << "Escogiste a Charmander!\n";
        std::cout << "Tu rival es Pika!\n";
        while (charvida >= 0 && pikavida >= 0)
        {
            std::cout << "1. Ataque\n2. Defensa\n";
            std::cin >> opc2;
            switch (opc2)
            {
            case 1: pikavida = pikavida - 2;
                charvida = charvida - 1;
                break;
            case 2: charvida = charvida + 1;
                break;
            default:
                std::cout << "Escoge una opcion valida.\n";
            }
            std::cout << "La vida de Charmander es: " << charvida << "\n";
            std::cout << "La vida de Pika es: " << pikavida << "\n";
        }
        break;
    case 3:
        std::cout << "Escogiste a Pika!\n";
        std::cout << "Tu rival es Squirtle!\n";
        while (pikavida >= 0 && squivida >= 0)
        {
            std::cout << "1. Ataque\n2. Defensa\n";
            std::cin >> opc2;
            switch (opc2)
            {
            case 1: squivida = squivida - 1;
                pikavida = pikavida - 1;
                break;
            case 2: pikavida = pikavida + 2;
                break;
            default:
                std::cout << "Escoge una opcion valida.\n";
            }
            std::cout << "La vida de Pikamander es: " << pikavida << "\n";
            std::cout << "La vida de Squirtle es: " << squivida << "\n";

        }
        break;
    default:
        std::cout << "Escoge un pokemon valido.\n";
    }
    std::cout << "Si deseas salir presiona 0\n";
    std::cin >> continuar;
    } while (continuar);
}

