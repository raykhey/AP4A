#include <iostream>

#include "Server.hpp"
#include "Sensor.hpp"
#include "Temperature.hpp"
#include "Humidity.hpp"
#include "Light.hpp"
#include "Pression.hpp"
#include "Scheduler.hpp"

using namespace std;

int main()
{
    //déclaration du Scheduler
    Scheduler boss;

    //déclaration du Server
    Server s;

    //variables de la durée de récolte des données et de l'intervalle de temps
    int m_temps_recolt = -1;
    int m_temps_intervalle_temperature = -1;
    int m_temps_intervalle_humidity = -1;
    int m_temps_intervalle_light = -1;
    int m_temps_intervalle_pression = -1;

    //varaible de la réponse de l'utilisateur concernant l'affichage et loggage des données
    char m_activer_log;
    char m_activer_affichage;
    
    //permet de générer des nombres aléatoires différents à chaque exécution
    srand(time(NULL));

    //demande à l'utilisateur du temps de récolte des données
    while(m_temps_recolt < 0 || m_temps_recolt > 360000)
    {

        cout << "Veuillez saisir la période de temps durant lequel vous souhaitez récolter "
        "les données en secondes :" << endl;
        cin >> m_temps_recolt;

    }

    //demande à l'utilisateur de l'intervalle de temps pour la température
    while(m_temps_intervalle_temperature < 0 || m_temps_intervalle_temperature > 20000
    || m_temps_intervalle_temperature > m_temps_recolt*1000)
    {
        
        cout << "Veuillez saisir l'intervalle de temps où vous souhaitez récolter "
        "la température en millisecondes :" << endl;
        cin >> m_temps_intervalle_temperature;

    }

    //demande à l'utilisateur de l'intervalle de temps pour l'humidité
    while(m_temps_intervalle_humidity < 0 || m_temps_intervalle_humidity > 20000
    || m_temps_intervalle_humidity > m_temps_recolt*1000)
    {
        
        cout << "Veuillez saisir l'intervalle de temps où vous souhaitez récolter "
        "l'humidité en millisecondes :" << endl;
        cin >> m_temps_intervalle_humidity;

    }

    //demande à l'utilisateur de l'intervalle de temps pour la lumière
    while(m_temps_intervalle_light < 0 || m_temps_intervalle_light > 20000
    || m_temps_intervalle_light > m_temps_recolt*1000)
    {
        
        cout << "Veuillez saisir l'intervalle de temps où vous souhaitez récolter "
        "la lumière en millisecondes :" << endl;
        cin >> m_temps_intervalle_light;

    }

    //demande à l'utilisateur de l'intervalle de temps pour la pression
    while(m_temps_intervalle_pression < 0 || m_temps_intervalle_pression > 20000
    || m_temps_intervalle_pression > m_temps_recolt*1000)
    {
        
        cout << "Veuillez saisir l'intervalle de temps où vous souhaitez récolter "
        "la pression en millisecondes :" << endl;
        cin >> m_temps_intervalle_pression;

    }

    //demande à l'utilisateur si il souhaite afficher et logger les données
    while(m_activer_log != 'Y' && m_activer_log != 'N')
    {
        
        cout << "Souhaitez-vous activer le log des données ? (Y/N)" << endl;
        cin >> m_activer_log;

    }

    //demande à l'utilisateur si il souhaite afficher et logger les données
    while(m_activer_affichage != 'Y' && m_activer_affichage != 'N')
    {
        
        cout << "Souhaitez-vous activer l'affichage des données ? (Y/N)" << endl;
        cin >> m_activer_affichage;

    }

    //boucle permettant de faire le nombre de période donnée par l'utilisateur
    for(int i=1;i<=(m_temps_recolt*1000);i++)
    {

        boss.takeData(i,m_temps_intervalle_temperature, m_temps_intervalle_humidity,
        m_temps_intervalle_light, m_temps_intervalle_pression, s, m_activer_log, m_activer_affichage);
        cout << "========================\n" << endl;

    }

    return 0;

}
