#include <iostream>
#include "encontra_maior.hpp"

void CalculaMaior:: receberNumero()

{
    std::cout << std::endl;
    std::cout << " |calculando o maior numero entre os 3 digitados| " << std::endl;
    std::cout << std::endl;

    std::cout << "Primeiro numero: "; 
    std::cin >> primeiro;
    std::cout << "---------------------" << std::endl;

    
    std::cout << "Segundo numero: ";
    std::cin >> segundo;
    std::cout << "---------------------" << std::endl;

    
    std::cout << "Terceiro numero: ";
    std::cin >> terceiro;
    std::cout << "---------------------" << std::endl;
}

int CalculaMaior::encontraMaior ()
{
    if (primeiro > segundo && primeiro > terceiro)
    {
        resultado = primeiro;
    }
    else if (segundo > primeiro && segundo > terceiro)
    {
        resultado = segundo;
    }
    else if (terceiro > primeiro && terceiro > segundo)
    {
        resultado = terceiro;
    } 
    
    return resultado;

}