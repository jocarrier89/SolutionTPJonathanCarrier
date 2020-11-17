//But: faire des fonctions pour les menus
//Auteur: Jonathan Carrier
//Date: Novembre 2020


#include "Menus0748266.h"
#include <string>
#include <iostream>

using namespace std;

void afficherMenu1()
{
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
cout << "Bienvenue dans le programme ~ Choisi une forme ~, s'il vous plaît, choisissez une forme" << endl;
cout << "1. Rectangle" << endl;
cout << "2. Triangle" << endl;
cout << "3. Carré" << endl;
cout << "4. Losange" << endl;
cout << "5. Triangle isocèle" << endl;
cout << "6. Quitter le programme" << endl;
cout << endl;
cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
cout << "Entrez votre choix ici ==>";


}

void afficherMenu2()
{

	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "Maintenant choisissez si vous désirez votre forme pleine ou vide." << endl;
	cout << "1. Pleine" << endl;
	cout << "2. Vide" << endl;
	cout << "3. Retour au menu précédent " << endl;
	cout << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "Entrez votre choix ici ==>";

}

int validerMenu(int choixMin, int choixMax)
{
	// SOURCE : Labo06Ffonctions par Karine Moreau
	
		string clavier;

		switch (choixMin)
		{// Affiche le premier menu
		case 1: 
			    system("cls");
				afficherMenu1();
				getline(cin, clavier, '\n'); 
				break;
				// affiche le deuxième menu
		case 2: 
				system("cls");
				afficherMenu2(); 
				getline(cin, clavier, '\n');// Prends l'information qui vient du clavier sans bug si l'utilisateur entre n'importe quoi
				break;
		default:
			break;
		}

		cout << " Votre choix ==>" << clavier << endl;

		// getline permet de lire et nettoyer la mémoire du clavier pour empêcher
									// le programme de virer fou si l'utilisateur entre une valeur inatendue

		while ((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
			&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9'))))
		{    // lorsque l'utilisateur entre n'importe quoi, le programme redemande une valeur.
			cout << "Erreur : Vous devez taper des chiffres pour entrer un nombre entier." << endl;
			cout << "Veuillez entrer un nombre entier : ";
			getline(cin, clavier, '\n');
		}



		// Quand on sort de la boucle, on sait que clavier ne  contient que  des entier, alors on peut convertir en int
		return stoi(clavier);
	
	}
	





