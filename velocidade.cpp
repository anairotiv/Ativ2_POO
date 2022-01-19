#include <iostream>
#include "velocidade.hpp"

void Velocidade::Receberentrada()
{
    std::cout << std::endl;
    std::cout << " |Agora insira os valores para o calculo da velocidade|" << std::endl;
    std::cout << std::endl;

    std::cout << "Digite a distancia a ser calculada: "; 
    std::cin >> distancia;
    std::cout << std::endl;

    std::cout << "Digite o tempo a ser calculado: "; 
    std::cin >> tempo; 
    std::cout << std::endl;
}

void Velocidade::Calculavelocidade()
{
    velocidade = distancia / (tempo * 60);
}

void Velocidade::Resultadovelocidade()
{   

    std::cout <<"Velocidade: " << velocidade << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
}
