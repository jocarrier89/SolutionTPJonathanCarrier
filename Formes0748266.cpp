//But: faire des fonctions pour les différentes formes
//Auteur: Jonathan Carrier
//Date: Novembre 2020



#include "Formes0748266.h"
#include<iostream>
#include <ctime>
#include "Labo06Fonctions.h"
#include <string>
 
using namespace std;

int genererNombreAleatoire()
{ // source Karine Moreau Cours fonctions Aleatoires

    //initialisation de la variable
    int alea;

    // ligne des nombres aléatoires, qui choisira selon une liste de donnés un nombre "aléatoire"
    srand(time(NULL));

    // On met une valeur aléatoire dans alea en utilisant la fonction rand() pour random
    // puisqu'il y a 4 choix de triangle, le % 4 + 1 nous donnera la donnée aléatoire juste de 1 à 4
    alea = (rand() % 4 + 1);


    return alea;

}
int traiterForme(int forme)
{

     // La fonction retourne les fonctions demandées

    switch (forme)
    {
    case 1: traiterRectangle(1);
        break;
    case 2:traiterTriangle (2);
        break;
    case 3:traiterCarre(3) ;
        break;
    case 4: traiterLosange(4);
        break;
    case 5: traiterIsocele(5);
    default:
        break;
    }

    return forme;  // La fonction retourne les valeurs demandées


}

int traiterRectangle(int remplissage) 
{// initialisation des variables
    int hauteur, largeur;
    
   
   
    // le programme demande d'entrer les données nécéssaires à son bon fonctionnement
    cout << "Entrez la largeur du rectangle ";
    largeur = saisirEntier();
    cout << "Entrez la hauteur du rectangle ";
    hauteur = saisirEntier();
    // il appel la fonction pour faire dessiner la forme, selon le cas PLein ou Vide

    // la fonction fait appel à dessiner rectangle et lui envoie les valeurs en paramètre
    dessinerRectangle(largeur, hauteur, remplissage);
   
    return 0;
}
void dessinerRectangle(int x, int y,int remplissage)
{// Déclaration des variables 
    int  largeur;         
    int  hauteur;
    char cote = '*';
    char vide = ' ';
    char plein = '#';
    // initialisation des variables
    hauteur = y;
    largeur = x;

   
    switch (remplissage)
    {
    case 1:
        cout << " Voici un rectangle avec les dimensions : " << hauteur << " X " << largeur << ":" << endl;
        // en commencant à la ligne 1, tant que le compteur  affiche plus bas que la hauteur, le compteur réimprime une ligne
        for (int compteur = 1; compteur <= hauteur; compteur++)
        {    // en commencant par la colonne 1, tant que le compteur affiche plus bas que la largeur, la boucle imprime un caractère.
            for (int compteur2 = 1; compteur2 <= largeur; compteur2++)
            {// si le compteur de ligne est de 1 OU qu'il est égal à la hauteur OU que le compteur de colone est de 1 OU égal à la largeur
                    // le programme imprime un caractère.
                if (compteur == 1 || compteur == hauteur || compteur2 == 1 || compteur2 == largeur)
                {
                    cout << cote;
                }
                // dans ce cas-ci, il imprimera un caractère # car le choix de remplissage était : plein
                else
                {
                    cout << plein;
                }

            }// fait un espace d'une ligne
            cout << endl;
        }

        break;

    case 2: 
        cout << " Voici un rectangle vide avec les dimensions : " << hauteur << " X " << largeur << ":" << endl;
        // en commencant à la ligne 1, tant que le compteur  affiche plus bas que la hauteur, le compteur réimprime une ligne
        for (int compteur = 1; compteur <= hauteur; compteur++)
        {   // en commencant par la colonne 1, tant que le compteur affiche plus bas que la largeur, la boucle imprime un caractère.
            for (int compteur2 = 1; compteur2 <= largeur; compteur2++)
            { // si le compteur de ligne est de 1 OU qu'il est égal à la hauteur OU que le compteur de colone est de 1 OU égal à la largeur
                // le programme imprime un caractère.
                if (compteur == 1 || compteur == hauteur || compteur2 == 1 || compteur2 == largeur)
                {
                    cout << cote;
                }
                //SINON il imprime un espace vide.
                else
                {
                    cout << vide;
                }

            }
            // fait un espace d'une ligne
            cout << endl;
        }
        break;



    default:
        break;
    }
    // fait faire une pause au programme,et donne le temps de s'émerveiller devant la forme!
    system("pause");
}


int traiterCarre(int remplissage) // bon
{
    // déclaration des variables
   
    int largeur;
    int hauteur;
    // le programme demande à l'utilisateur d'entrer une seule donnée
    cout << "Entrez la hauteur de votre carré ";
    hauteur = saisirEntier();
 // puisque chaque côté d'un carré est équivalent, mais que la fonction vient de dessinerRectangle, on doit 
    // initialiser la valeur manquante.
    largeur = hauteur;
    // appel la fonction et envoie les paramètres
        dessinerRectangle(hauteur, largeur, remplissage);
 
    

    return 0;
}


void traiterTriangle(int remplissage)// bon
{
    int alea;
    int  hauteur;
    
    cout << "Entrez la hauteur du triangle ";
    hauteur = saisirEntier();
    // Permet de choisir aléatoirement la prochaine disposition des triangles
    alea = genererNombreAleatoire();
    if (remplissage == 1)
    {
        switch (alea)
        {
        case 1: dessinerTriangle1(hauteur, remplissage);
            break;
        case 2: dessinerTriangle2(hauteur, remplissage);
            break;
        case 3: dessinerTriangle3(hauteur, remplissage);
            break;
        case 4: dessinerTriangle4(hauteur, remplissage);
            break;
        default:
            break;
        }
    }
    if (remplissage == 2)
    {


        switch (alea)
        {
        case 1: dessinerTriangle1(hauteur, remplissage);
            break;
        case 2: dessinerTriangle2(hauteur, remplissage);
            break;
        case 3: dessinerTriangle3(hauteur, remplissage);
            break;
        case 4: dessinerTriangle4(hauteur, remplissage);
            break;
        default:
            break;
        }
    }

    
}

int dessinerTriangle1(int hauteur,int remplissage) //BON
{
    // Déclaration des variables
    int colonne,  ligne;

    char cote = '*';
    char vide = ' ';
    char plein = '#';

    cout << " Voici un triangle avec la dimension : " << hauteur   << " de hauteur :" << endl;

    
    // selon le remplîssage
    switch (remplissage)
    {
    case 2 : // le nombre de colonne est égal à la hauteur, tant que les colones sont plus grandes que 1, on diminue!
        for (colonne = hauteur; colonne >= 1; colonne--)
        {
            // Le nombre de ligne est égal à la hauteur, moins les colone en ajoutant 1, tant que c'est plus bas que 1, on diminue!
            for (ligne = hauteur - colonne + 1; ligne >= 1; ligne--)
            {
                // si nous sommes à la ligne 1 et que la colonne a la même valeur que la hauteur :
                if (ligne == 1 || colonne == hauteur)
                {
                    // on imprime un caractère de côté!
                    cout << cote;
                }
                else
                {
                    // on imprime un espace vide!
                    cout << vide;
                }
            }
            // tant que la ligne est égale à la colonne moins un, et que la ligne est plus grande que 0, on diminue!
            for (ligne = colonne - 1; ligne > 0; ligne--)
            {
                // si la ligne est égale à un ou que la colonne est égal à la hauteur :
                if (ligne == 1 || colonne == hauteur)
                {
                    // on ajoute un caractère de côté!
                    cout << cote;
                }
                // sinon, on ajoute un caractère vide!
                else
                {
                    cout << vide;
                }

            }// fait un espace sous la figure
            cout << endl;
        }
        break;
    case 1 :
        // le nombre de colonne est égal à la hauteur, tant que les colones sont plus grandes que 1, on diminue!
        for (colonne = hauteur; colonne >= 1; colonne--)
        {// Le nombre de ligne est égal à la hauteur, moins les colone en ajoutant 1, tant que c'est plus bas que 1, on diminue!
            for (ligne = hauteur - colonne + 1; ligne >= 1; ligne--)
            {
                // si nous sommes à la ligne 1 et que la colonne a la même valeur que la hauteur :
                if (ligne == 1 || colonne == hauteur)
                {// on imprime un caractère de côté!
                    cout << cote;
                } // on imprime un espace vide!
                else
                {
                    cout << vide;
                }
            }// tant que la ligne est égale à la colonne moins un, et que la ligne est plus grande que 0, on diminue!
            for (ligne = colonne - 1; ligne > 0; ligne--)
            {// si la ligne est égale à un ou que la colonne est égal à la hauteur :
                if (ligne == 1 || colonne == hauteur)
                { // on ajoute un caractère de côté!
                    cout << cote;
                }
                else
                {// sinon, on ajoute un caractère vide!
                    cout << plein;
                }

            }// fait un espace sous la figure
            cout << endl;
        }
        break;
    default:
        break;
    }

    // fait faire une pause au programme,et donne le temps de s'émerveiller devant la forme!
    system("pause");




    return 0;
}
int dessinerTriangle2(int hauteur, int remplissage) // bon
{// déclaration des variables
    int ligne;
    char cote = '*';
    char vide = ' ';
    char plein = '#';

    cout << " Voici un triangle avec la dimension : " << hauteur << "de hauteur :" << endl;
    switch (remplissage)
    { case 1 :
        // tant que la valeur de colonne est plus petite que la hauteur, on incrémente!
        for (int colonne = 1; colonne <= hauteur; colonne++)
        {
            // tant que la ligne a une  plus petite valeur que la colonne, on incrémente!!
            for (ligne = 1; ligne <= colonne; ligne++)
            {// si la ligne vaut 1 OU que la ligne vaut la même valeur que colonne OU que colonne équivaut la hauteur :
                if (ligne == 1 || ligne == colonne || colonne == hauteur)
                {// on imprime un caractère de côté!
                    cout << cote;
                }// sinon, on imprime un caractère plein!
                else
                {
                    cout << plein;
                }


            }
            cout << endl;

        }
        break;
    case 2:
        // tant que la valeur de colonne est plus petite que la hauteur, on incrémente!
        for (int colone = 1; colone <= hauteur; colone++)
        {
            // tant que la ligne a une  plus petite valeur que la colonne, on incrémente!!
            for (ligne = 1; ligne <= colone; ligne++)
            {// si la ligne vaut 1 OU que la ligne vaut la même valeur que colonne OU que colonne équivaut la hauteur :
                if (ligne == 1 || ligne == colone || colone == hauteur)
                {// on imprime un caractère de côté!
                    cout << cote;
                }
                else
                {// sinon, on imprime un caractère vide!
                    cout << vide;
                }


            }
            cout << endl;

        }
        break;
    default:
        break;
    }
    // fait faire une pause au programme,et donne le temps de s'émerveiller devant la forme!  
    system("pause");
        return 0;

    }
int dessinerTriangle3(int hauteur, int remplissage) // bon
{
   
    int ligne;
    
    char cote = '*';
    char vide = ' ';
    char plein = '#';

    cout << " Voici un triangle avec la dimension : " << hauteur << " de hauteur : " << endl;

    switch (remplissage)
    {
    case 1:// tant que la valeur de colonne est plus petite que la hauteur, on incrémente!
        for (int colonne = 1; colonne <= hauteur; colonne++)
        {
            // tant que la ligne a une  plus petite valeur que la colonne, on incrémente!!
            for (ligne = colonne; ligne <= hauteur; ligne++)
            { // si la colonne vaut 1 OU que la ligne vaut la même valeur que colonne OU que la ligne équivaut la hauteur :
                if (colonne == 1 || ligne == colonne || ligne == hauteur)
                {// on imprime un caractère de côté!
                    cout << cote;
                }
                else
                {// sinon, on imprime un caractère plein!
                    cout << plein;
                }


            }
            cout << endl;

        }
        break;
    case 2 :
        // tant que la valeur de colonne est plus petite que la hauteur, on incrémente!
        for (int colone = 1; colone <= hauteur; colone++)
        {
            // tant que la ligne a une  plus petite valeur que la colonne, on incrémente!!
            for (ligne = colone; ligne <= hauteur; ligne++)
            { // si la colonne vaut 1 OU que la ligne vaut la même valeur que colonne OU que la ligne équivaut la hauteur :
                if (colone == 1 || ligne == colone || ligne == hauteur)
                {// on imprime un caractère de côté!
                    cout << cote;
                }
                else
                {// sinon, on imprime un caractère vide!
                    cout << vide;
                }


            }
            cout << endl;

        }
        break;
    default:
        break;
    }// fait faire une pause au programme,et donne le temps de s'émerveiller devant la forme!
    system("pause");
        return 0;
    }
int dessinerTriangle4(int hauteur, int remplissage) // bon
{ //déclarations de variables sympathiques
    int colonne;
    int ligne;
    char cote = '*';
    char vide = ' ';
    char plein = '#';
    // une déclaration pour l'utilisateur pleine de fougue
    cout << " Voici un triangle avec la dimension : " << hauteur << "de hauteur :" << endl;
   // tout dépendant du remplissage
    switch (remplissage)
    {case 1 :
        // tant que les colonnes sont plus petites que la hauteur, incrémentons-là!
        for (colonne = 1; colonne <= hauteur; colonne++)
        {// tant que la ligne est strictement plus petite que la hauteur, incrémentons-là!
            for (ligne = colonne; ligne < hauteur; ligne++)
            {// ici, c'est un espace vide
                cout << vide;
            }
            // tant que la ligne est plus petite ou égale à la hauteur, on lui donne + 1!
            for (ligne = 1; ligne <= hauteur; ligne++)
            {// si ces conditions sont achevé, entrons dans le if
                if (colonne == hauteur || ligne == 1 || ligne == colonne)
                {
                    cout << cote;
                }
                // 
                else if (ligne > colonne)
                {
                    cout << vide;
                }
                else
                {
                    cout << plein;
                }
            }
            cout << endl;
        }

        break;
    case 2:
        for (colonne = 1; colonne <= hauteur; colonne++)
    {
        for (ligne = colonne; ligne < hauteur; ligne++)
        {
            cout << vide;
        }
        for (ligne = 1; ligne <= hauteur; ligne++)
        {
            if (colonne == hauteur || ligne == 1 || ligne == colonne)
            {
                cout << cote;
            }
            else if (ligne > colonne)
            {
                cout << vide;
            }
            else
            {
                cout << vide;
            }
        }
        cout << endl;
    }

        break;
    default:
        break;
    }
    // fait faire une pause au programme,et donne le temps de s'émerveiller devant la forme!
    system("pause");
    return 0;
    }

void traiterIsocele(int remplissage)
{
    // Déclarons nos variables!
    int  hauteur;
   
    // Demandons à l'utilisateur de nous donner un paramètre!
    cout << "Entrez la hauteur du triangle ";
    hauteur = saisirEntier();
    // Établissons que ce paramètre fait appel à saisirEntier

    // Envoyons les paramètres reçus de l'utilisateur à une fonction qui leur donnerons vie!
    dessinerIsocele(hauteur, remplissage);
}

int dessinerIsocele(int hauteur, int remplissage)
{
    // voici quelques variables, je vous le déclare haut et fort!
    char cote = '*';
    char vide = ' ';
    char plein = '#';
    int colonne, ligne;


    // tout dépendant du choix de remplissage
    switch (remplissage)
    {
    case 1:
        // tant que la colone a une valeur plus basse que celle de la hauteur, on l'incrémente
        for (colonne = 1; colonne <= hauteur; colonne++)
        {// tant que la ligne a une valeur plus basse que la hauteur moins le nombre de colonne, on incrémente la ligne
            for (ligne = colonne; ligne <= hauteur; ligne++)
            {// Pour imprimer les espace Avant le losange
                cout << vide;
            }
            for (ligne = 1; ligne <= (2 * colonne - 1); ligne++)
            {
                if (colonne == hauteur || ligne == 1 || ligne == (2 * colonne - 1))
                {
                    cout << cote;
                }
                else
                {
                    cout <<  plein;
                }
            }
            cout << endl;

            break;
    case 2:


        for (colonne = 1; colonne <= hauteur; colonne++)
        {// tant que la ligne a une valeur plus basse que la hauteur moins le nombre de colonne, on incrémente la ligne
            for (ligne = colonne; ligne <= hauteur; ligne++)
            {// Pour imprimer les espace Avant le losange
                cout << vide;
            }
            for (ligne = 1; ligne <= (2 * colonne - 1); ligne++)
            {
                if (colonne == hauteur || ligne == 1 || ligne == (2 * colonne - 1))
                {
                    cout << cote;
                }
                else
                {
                    cout << vide;
                }
            }
            break;
    default:
        break;
        }
        // fait faire une pause au programme,et donne le temps de s'émerveiller devant la forme!
        system("pause");

        return 0;
        }
    }
}
int traiterLosange(int remplissage)
{// Hé bien oui, après une lute intensive, j'y suis arrivé, le fameux losange!
    //déclarations de quelques variables utiles
    int  hauteur;
    char cote = '*';
    char vide = ' ';
    char plein = '#';
   
    // Demandons à l'utilisateur un paramètre de hauteur!
    cout << "Entrez la hauteur du losange ";
    hauteur = saisirEntier();
    // on fait référence à la fonction saisirEntier

    // tant que la hauteur est paire, le programme ne laissera pas l'utilisateur entrer dans la figure
    while (hauteur % 2 == 0)
    {
        cout << "Erreur, votre hauteur doit être un nombre impair.";
        hauteur = saisirEntier();
    }

    // on appel la fonction de dessin en passant la hauteur en paramètre
     dessinerLosange(hauteur, remplissage);
 

    return 0;
    
}

int dessinerLosange(int hauteur, int remplissage)
{
    //Une petite phrase de présentation coquette
    cout << " Voici un losange vide avec la dimension : " << hauteur << " de hauteur :" << endl;

    // c'est ici que j'eus déclaré mes variables
    int  ligne, colonne, milieu;
    char vide = ' ', plein = '#', cote = '*';


    // selon le cas de remplissage
    switch (remplissage)
    {
    case 1:// J'ajoute une valeur de 1 au losange car sinon il est désaligné
        hauteur = hauteur + 1;
        // divise la valeur en deux pour avoir 2 triangles qui sont inversé par rapport à l'autre, mais de la hauteur demandée
        milieu = (hauteur / 2);
        // imprime le premier triangle isocèle
        for (ligne = 1; ligne <= milieu; ligne++)
        {// tant que la colone est plus petite que la valeur de milieu moins la ligne, on incrémente la colonne
            for (colonne = 1; colonne <= (milieu - ligne); colonne++)
            {// Pour imprimer les espace Avant le losange
                cout << vide;
            }// si la ligne vaut 1
            if (ligne == 1)
            {// imprimons un côté!
                cout << cote;
            }//sinon :
            else
            { //imprimons un côté quand même, mais nous aurons une boucle à nourrir ensuite!
                cout << cote; 
                // Bien sûr, tant que le nombre de colone est plus petit que la valeur de deux fois ligne -3
                // augmentons les colonnes
                for (colonne = 1; colonne <= 2 * ligne - 3; colonne++)
                { // imprime les parties pleines du losange
                    cout << plein;
                }// imprime un caractère de côté
                cout << cote;
            }// fait un retour à la ligne bien mérité
            cout << endl;
        }
        // Ici, on a le même triangle, mais celui-ci est inversé
        for (ligne = milieu + 1; ligne < hauteur; ligne++)
        {
            for (colonne = 1; colonne <= ligne - milieu; colonne++)
            { // Pour imprimer les espace Avant le losange
                cout << vide;
            }
            if (ligne == hauteur - 1)
            {
                cout << cote;
            }
            else
            {
                cout << cote;

                for (colonne = 1; colonne <= 2 * (hauteur - ligne) - 3; colonne++)
                {

                    cout << plein;
                }
                cout << cote;
            }
            cout << endl;
        }



        break;
    case 2 :
        // J'ajoute une valeur de 1 au losange car sinon il est désaligné
        hauteur = hauteur + 1;
        // divise la valeur en deux pour avoir 2 triangles qui sont inversé par rapport à l'autre, mais de la hauteur demandée
        milieu = (hauteur / 2);
        // imprime le premier triangle isocèle
        for (ligne = 1; ligne <= milieu; ligne++)
        {
            for (colonne = 1; colonne <= (milieu - ligne); colonne++)
            {// Pour imprimer les espace Avant le losange
                cout << vide;
            }
            if (ligne == 1)
            {
                cout << cote;
            }
            else {
                cout << cote; // pour imprimer les étoiles au début et à la fin

                for (colonne = 1; colonne <= 2 * ligne - 3; colonne++)
                { // imprime les parties vides du losange
                    cout << vide;
                }
                cout << cote;
            }
            cout << endl;
        }
        for (ligne = milieu + 1; ligne < hauteur; ligne++)
        {
            for (colonne = 1; colonne <= ligne - milieu; colonne++)
            { // Pour imprimer les espace Avant le losange
                cout << vide;
            }
            if (ligne == hauteur - 1)
            {
                cout << cote;
            }
            else
            {
                cout << cote;

                for (colonne = 1; colonne <= 2 * (hauteur - ligne) - 3; colonne++)
                {

                    cout << vide;
                }
                cout << cote;
            }
            cout << endl;
        }



        break;
    default:
        break;
    }
    // fait faire une pause au programme,et donne le temps de s'émerveiller devant la forme!
    system("pause");

    return 0;
}


