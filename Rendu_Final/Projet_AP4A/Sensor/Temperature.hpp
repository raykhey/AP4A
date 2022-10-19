/**
 * @author Augustin Athané
 * @file Temperature.hpp
 * @date 24/09/2022
 * @brief Senor Temperature, classe fille de Sensor
 * */

#ifndef TEMPERATURE_HPP
#define TEMPERATURE_HPP

#include <iostream>
#include <cstdlib>
#include "Sensor.hpp"

class Temperature : public Sensor<float>
{

    public :
        //Constructeur par défault
        Temperature();
        Temperature(const Temperature &other);
        ~Temperature();
        void startSimulation() override;

};

#endif //TEMPERATURE_HPP