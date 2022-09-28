/**
 * @author choulot_hugo
 * @file Sensor.cpp
 * @date 20/09/2022
 * @brief Classe mère des différents capteurs
 */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

#include "Scheduler.hpp"
#include "Sensor.hpp"
#include "Server.hpp"

using namespace std;

//constructeur par défaut
Sensor::Sensor(){
    m_name = e_temperature;
    m_valeur = 0;
}

//constructeur par valeur
Sensor::Sensor(const ESensors param_name){
    m_name = param_name;
    m_valeur = 0;
}

//constructeur par recopie
Sensor::Sensor(const Sensor& s){
    this->m_name = s.m_name;
    this->m_valeur = s.m_valeur;
}

//destructeur
Sensor::~Sensor(){
    cout << "Destructeur appelle\n" << endl;
}

//operator
Sensor& Sensor::operator=(const Sensor& s){
    this->m_name = s.m_name;
    this->m_valeur = s.m_valeur;

    return *this;
}

/**
 * @brief permet de générer des valeurs aléatoires de int pour les différents capteurs
 * @return int
 * @param const ESensors name
 */
int Sensor::aleaGenVal(){

    int m_valeur;

    switch (this->m_name){
        case e_temperature : m_valeur = rand() % 30 + 15;
        break;
        case e_humidity : m_valeur = rand() % 101;
        break;
        case e_light : m_valeur = rand() % 12001;
        break;
        case e_pression : m_valeur = rand() % 100 + 700;
        break;
    }

    return m_valeur;
}

//constructeur par défaut
Temperature::Temperature(){
    m_name = ESensors::e_temperature;
    m_valeur = 0;
}

//constrcuteur par recopie
Temperature::Temperature(const Temperature& t){
    this->m_name = t.m_name;
    this->m_valeur = t.m_valeur;
}

//constructeur par défaut
Humidity::Humidity(){
    m_name = ESensors::e_humidity;
    m_valeur = 0;
}

//constructeur par recopie
Humidity::Humidity(const Humidity& h){
    this->m_name = h.m_name;
    this->m_valeur = h.m_valeur;
}

//constructeur par défaut
Light::Light(){
    m_name = ESensors::e_light;
    m_valeur = 0;
}

//constructeur par recopie
Light::Light(const Light& l){
    this->m_name = l.m_name;
    this->m_valeur = l.m_valeur;
}

//constructeur par défaut
Pression::Pression(){
    m_name = ESensors::e_pression;
    m_valeur = 0;
}

//constructeur par recopie
Pression::Pression(const Pression& p){
    this->m_name = p.m_name;
    this->m_valeur = p.m_valeur;
}