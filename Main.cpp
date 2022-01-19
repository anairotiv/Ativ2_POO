#include <iostream>
#include "encontra_maior.hpp"
#include "fatorial.hpp"
#include "velocidade.hpp"

// programadora: Ana Vitoria Silva Da Luz Nascimento
// data: 09/12/2021
// atividade com intuito de fixar conteudo com exercicios já produzidos. Em programação orientada a objetos com c++.

int main (){

    std::cout << " ***********************************" << std::endl;
    std::cout << " ****** WELCOME TO MY SYSTEM ******" << std::endl;
    std::cout << " ***********************************" << std::endl;

    CalculaMaior primeiro_calculo;

    primeiro_calculo.receberNumero();

    std::cout << "O maior dentre os digitados: " << primeiro_calculo.encontraMaior() << std:: endl;
    std::cout << std::endl;

    Fatorial fatorial;

    fatorial.calculaFatorial();
    fatorial.resultadoFatorial();

    Velocidade velocidade;

    velocidade.Receberentrada();
    velocidade.Calculavelocidade();
    velocidade.Resultadovelocidade();
   
}


    