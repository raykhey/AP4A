/*
@author BENEDUCI Marie
@file  Pression.hpp
@date 26/09/2022
@brief  Déclaration de la Classe capteur permetant d'avoir les données de pression
*/

#ifndef SENSOR_HPP
#define SENSOR_HPP
#include "Sensor.hpp"
#endif 
 

#ifndef PRESSION_HPP
#define PRESSION_HPP

class Pression : public Sensor<int>
{

public:
    Pression(); //Constructeur par défaut
    int aleaGenVal(){
    // int random
        int randomNumber = rand() % 10 + 1;
        return randomNumber;
    };
};

#endif 
