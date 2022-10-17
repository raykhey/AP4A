/**
 * @author Jules Ferlin
 * @file Sensor.hpp
 * @date 03/10/2022
 * @brief Fichier header contenant la définition et l'implémentation de des attributs et méthode de la classe Sensor
 */


// Define Guards
#ifndef PROJET_AP4A_Sensor_HPP
#define PROJET_AP4A_Sensor_HPP
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <unistd.h>

#define TYPE float

/**
 * @class Sensor
 * @brief Classe définissant les Sensors. Cette classe est une classe mere pour tous les types de capteur
 */
template<class T>
class Sensor
{
protected:
  T m_minValeur, m_maxValeur;      ///< Valeur minimum et maximum que le capteur peut avoir
  std::string m_nomCapteur;            ///< Nom du capteur pour l'ecriture dans la console et dans les fichiers logs
  std::string m_unite;           ///< Unité des valeurs du capteur pour affichage dans la console et écriture dans les fichiers logs
public:
  // Forme canonique
  Sensor<T>();
  Sensor<T>(const Sensor<T>& Sensor_p);
  virtual ~Sensor<T>();
  Sensor<T>& operator=(const Sensor<T>& Sensor_p);

  /**
   * @brief Fait appelle à aleaGenVal pour générer une valeur pour un capteur
   * @return Retourne la valeur générée pour être utilisation
   */
  virtual T getData();

  /**
   * @brief Créer une valeur aléatoire compris entre minVal_p et maxVal_p
   * @param minVal_p Borne minimum
   * @param maxVal_p Borne maximum
   * @return Retourne la valeur générée aléatoirement
   */
  T aleaGenVal(float minVal_p, float maxVal_p);

  /**
   * Fonction permettant d'obtenir le nom de l'objet, du capteur
   * @return Retourne le nom de l'objet appelant
   */
  std::string getName();

  /**
   * Fonction permettant d'obtenir l'unité de l'objet, du capteur
   * @return Retourne l'unité de l'objet appelant
   */
  std::string getUnite();

};

template<typename T>
Sensor<T>::Sensor()
{
  this->m_minValeur = 0;
  this->m_maxValeur = 1;
  this->m_nomCapteur = "Sensor";
  this->m_unite = "";
}

template<typename T>
Sensor<T>::Sensor(const Sensor<T>& Sensor_p): m_minValeur(this->m_minValeur), m_maxValeur(this->m_maxValeur), m_nomCapteur(this->m_nomCapteur), m_unite(this->m_unite) {}

template<typename T>
Sensor<T>::~Sensor<T>() = default;

template<typename T>
Sensor<T>& Sensor<T>::operator=(const Sensor<T>& Sensor_p)
{
  this->m_minValeur = Sensor_p.m_minValeur;
  this->m_maxValeur = Sensor_p.m_maxValeur;
  return *this;
}

template<typename T>
T Sensor<T>::getData()
{
  return this->aleaGenVal(this->m_minValeur, this->m_maxValeur);
}

template<typename T>
T Sensor<T>::aleaGenVal(float minVal_p, float maxVal_p)
{
  return (minVal_p + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/(maxVal_p-minVal_p))));
}

template<typename T>
std::string Sensor<T>::getName()
{
  return this->m_nomCapteur;
}

template<typename T>
std::string Sensor<T>::getUnite()
{
  return this->m_unite;
}


#endif //PROJET_AP4A_Sensor_HPP
