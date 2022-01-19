#include<iostream>
#include "fatorial.hpp"


    void Fatorial::calculaFatorial()
    {
        std::cout << "----------------------------------------------------" << std::endl;
        std::cout<<" |Agora digite o numero para o calculo do fatorial| " << std::endl;
        std::cout << std::endl;

        std::cin >> numero;

        if (numero == 0 || numero == 1){
            fatorial = 1;
        }

        else 

        {
            while (numero > 1){
                fatorial = fatorial * numero;
                numero--;
            }

            std::cout << std::endl;

        }
    }  

    void Fatorial::resultadoFatorial()
    {
        std::cout <<"O Fatorial do numero que foi digitado e: " << fatorial << std::endl;
        std::cout << "----------------------------------------------------"<<std::endl;
    }