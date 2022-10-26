/**
 * @author A.BARTHELME
 * @file Sensor.cpp
 * @date 26/10/2022
 * @brief CLasse mère de tous les capteurs
 * @version Finale 
*/



#include<iostream>
#include<string>
#include "Sensor.hpp"
#include "AllSensor.hpp"

Sensor::Sensor()
{
    m_nom = "Inconnu";
    m_unite = "Celsius";
}

Sensor::Sensor(std::string nom, std::string unite)
{
    m_nom = nom;
    m_unite = unite;
}

Sensor::~Sensor()
{
}


void Sensor::Info(){
    std::cout << "Nom du capteur : " << m_nom << std::endl;
    std::cout << "Unite du capteur : " << m_unite << std::endl;
    
}