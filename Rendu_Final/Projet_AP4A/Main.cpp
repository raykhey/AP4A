/**
 * @author Augustin Athané
 * @file main.cpp
 * @date 25/09/2022
 * @brief Main, demande le temps de simulation et l'activation ou non des valeurs en cosoles et de l'écriture dans le log. Puis lance la simulation
 */

#include "Scheduler/Scheduler.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;


bool isNumber(const string& str) // fonction pour vérifier si ce que l'on entre est un nombre
{
    return str.find_first_not_of( "0123456789" ) == string::npos;
}

int main(){

    //On initialise les sensor
    Light l = Light();
    Pression p = Pression();
    Temperature t = Temperature();
    Humidity h = Humidity();
    Server serv = Server();

    int time;
    bool doLog;
    bool doPrintConsole;

    bool hasCorectlyRespond;
    char response;

    //On demande le temps voulue de simulation (en secondes)
    cout << "Combien de temps (en secondes) voulez-vous que la simulation dure ?" << endl;
    cin >> time;
    //cin.clear();

    do{
        if(time <= 0){
            hasCorectlyRespond = false;
            cout << "/!\\ Reponse recu incorrecte, veuillez repondre par un nombre superieur a 0 " << endl;
            cin.clear(); // takes care of resetting the fail bits
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //removes any wrong input left in the stream
            cin >> time;
            
        }else{
            hasCorectlyRespond = true;
        }
    }while(!hasCorectlyRespond);

    //On demande si on active l'affichage des valeurs en console, avec message d'erreur
    cout << "Voulez-vous afficher les valeurs dans la console? (o/n)" << endl;
    cin >> response;
    do{
        if(tolower(response) == 'o'){ // On utilise tolower pour ne pas faire la différence entre o et O
            doPrintConsole = true;
            hasCorectlyRespond = true;
        }else if(tolower(response) == 'n'){
            doPrintConsole = false;
            hasCorectlyRespond = true;
        }else{
            hasCorectlyRespond = false;
            cout << "/!\\ Reponse recu incorrecte, veuillez repondre par \"o\" ou \"n\" " << endl;
            cin.clear(); // takes care of resetting the fail bits
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //removes any wrong input left in the stream
            cin >> response;
            response = NULL;
        }
    }while(!hasCorectlyRespond); //On répète tant que la réponse optenue est mauvaise

    //De même pour l'affichage des logs
    cout <<"Voulez-vous activer l'ecriture des logs ? (o/n)" << endl;
    cin >> response;
    do{
        if(tolower(response) == 'o'){ // On utilise tolower pour ne pas faire la différence entre o et O
            doLog = true;
            hasCorectlyRespond = true;
        }else if(tolower(response) == 'n'){
            doLog = false;
            hasCorectlyRespond = true;
        }else{
            hasCorectlyRespond = false;
            //cin.ignore( numeric_limits<streamsize>::max() , '\n' ) ; // On vide le buffer
            cout << "/!\\ Reponse recu incorrecte, veuillez repondre par \"o\" ou \"n\" " << endl;
            cin.clear(); // takes care of resetting the fail bits
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //removes any wrong input left in the stream
            cin >> response;
            response = NULL;
        }
    }while(!hasCorectlyRespond); //On répète tant que la réponse optenue est mauvaise


    //Le scheduler est au coeur de notre Projet, c'est lui qui lancera la simulation des sensors ainsi que le server
    Scheduler s = Scheduler(t,h,l,p, serv);
    s.startSimulation(time, doLog, doPrintConsole);
    return 0;
}
