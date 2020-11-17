#include "Labo06Fonctions.h"
#include <string>
#include <iostream>

using namespace std;



int saisirEntier()
{
	string clavier;

	getline(cin, clavier, '\n');            // Permet de stocker les caractères dans la variable clavier 
											// et de nettoyer la mémoire du clavier
	// Autre problème : stoi plante le programme si la chaine de caractères ne contient pas des chiffres
	// comme premiers caractères ou si elle est vide

	// Tant que 1. clavier est vide (clavier.empty() ou clavier == "") OU
	//          2. clavier ne commence pas (at(0), front(), [0]) par un chiffre (valeur positive) OU  commence  par le signe - et n'est pas suivi d'un chiffre

	
	

	/*while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
			|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))*/
	
	
	while ((clavier.empty() || ((clavier.front() < '0' || clavier.front()  > '9')
			&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9'))))

	
	{
		cout << "Erreur : vous devez entrer un entier." << endl;
		cout << "Veuillez entrer un nombre entier : ";
		getline(cin, clavier, '\n');            // Permet de stocker les caractères dans la variable clavier 
	}


	// Il faut maintenant convertir la chaine en entier
	return stoi(clavier);

	// Ici, si l'utilisateur tape une lettre, le cin >> la refuse et surtout laisse le caractère dans la mémoire du clavier
	// Il met 0 dans la variable int, même si ce n'est pas la bonne valeur
	// Et donc le programme part en boucle infinie car le deuxième cin >> récupère les caractères laissés 
	// dans la mémoire du clavier
	// Solution ==> lire tous les caractères tapés au clavier avec une chaine de caractères : string avec getline


}

double saisirReel()
{
	string clavier;

	getline(cin, clavier, '\n');            // Permet de stocker les caractères dans la variable clavier 
											// et de nettoyer la mémoire du clavier
	// Autre problème : stoi plante le programme si la chaine de caractères ne contient pas des chiffres
	// comme premiers caractères ou si elle est vide

	// Tant que 1. clavier est vide (clavier.empty() ou clavier == "") OU
	//          2. clavier ne commence pas (at(0), front(), [0]) par un chiffre (valeur positive) OU  commence  par le signe - et n'est pas suivi d'un chiffre

	/*while (clavier == ""
		|| ((clavier.front() < '0' || clavier.front() > '9')
			|| (clavier.front() == '-' && (clavier.at(1) < '0' || clavier.at(1) > '9'))))*/
	while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
		|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))

	{
		cout << "Erreur : vous devez entrer un nombre." << endl;
		cout << "Veuillez entrer un nombre : ";
		getline(cin, clavier, '\n');            // Permet de stocker les caractères dans la variable clavier 
	}


	// Il faut maintenant convertir la chaine en entier
	return stod(clavier);

	// Ici, si l'utilisateur tape une lettre, le cin >> la refuse et surtout laisse le caractère dans la mémoire du clavier
	// Il met 0 dans la variable int, même si ce n'est pas la bonne valeur
	// Et donc le programme part en boucle infinie car le deuxième cin >> récupère les caractères laissés 
	// dans la mémoire du clavier
	// Solution ==> lire tous les caractères tapés au clavier avec une chaine de caractères : string avec getline


}

char saisirCaractere()
{
	string clavier;

	getline(cin, clavier, '\n');
	while (clavier.empty())
	{
		cout << "Erreur : vous devez saisir un caractère." << endl;
		cout << "Veuillez entrer un caractère : ";
		getline(cin, clavier, '\n');
	}
	
	// Si on sort de la boucle, le clavier n'est pas vide, il y a un caractère, on retourne le premier

	return clavier.front();
}


