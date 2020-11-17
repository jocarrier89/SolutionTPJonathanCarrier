//But: faire des fonctions pour les diff�rentes formes
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

    // ligne des nombres al�atoires, qui choisira selon une liste de donn�s un nombre "al�atoire"
    srand(time(NULL));

    // On met une valeur al�atoire dans alea en utilisant la fonction rand() pour random
    // puisqu'il y a 4 choix de triangle, le % 4 + 1 nous donnera la donn�e al�atoire juste de 1 � 4
    alea = (rand() % 4 + 1);


    return alea;

}
int traiterForme(int forme)
{

     // La fonction retourne les fonctions demand�es

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

    return forme;  // La fonction retourne les valeurs demand�es


}

int traiterRectangle(int remplissage) 
{// initialisation des variables
    int hauteur, largeur;
    
   
   
    // le programme demande d'entrer les donn�es n�c�ssaires � son bon fonctionnement
    cout << "Entrez la largeur du rectangle ";
    largeur = saisirEntier();
    cout << "Entrez la hauteur du rectangle ";
    hauteur = saisirEntier();
    // il appel la fonction pour faire dessiner la forme, selon le cas PLein ou Vide

    // la fonction fait appel � dessiner rectangle et lui envoie les valeurs en param�tre
    dessinerRectangle(largeur, hauteur, remplissage);
   
    return 0;
}
void dessinerRectangle(int x, int y,int remplissage)
{// D�claration des variables 
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
        // en commencant � la ligne 1, tant que le compteur  affiche plus bas que la hauteur, le compteur r�imprime une ligne
        for (int compteur = 1; compteur <= hauteur; compteur++)
        {    // en commencant par la colonne 1, tant que le compteur affiche plus bas que la largeur, la boucle imprime un caract�re.
            for (int compteur2 = 1; compteur2 <= largeur; compteur2++)
            {// si le compteur de ligne est de 1 OU qu'il est �gal � la hauteur OU que le compteur de colone est de 1 OU �gal � la largeur
                    // le programme imprime un caract�re.
                if (compteur == 1 || compteur == hauteur || compteur2 == 1 || compteur2 == largeur)
                {
                    cout << cote;
                }
                // dans ce cas-ci, il imprimera un caract�re # car le choix de remplissage �tait : plein
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
        // en commencant � la ligne 1, tant que le compteur  affiche plus bas que la hauteur, le compteur r�imprime une ligne
        for (int compteur = 1; compteur <= hauteur; compteur++)
        {   // en commencant par la colonne 1, tant que le compteur affiche plus bas que la largeur, la boucle imprime un caract�re.
            for (int compteur2 = 1; compteur2 <= largeur; compteur2++)
            { // si le compteur de ligne est de 1 OU qu'il est �gal � la hauteur OU que le compteur de colone est de 1 OU �gal � la largeur
                // le programme imprime un caract�re.
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
    // fait faire une pause au programme,et donne le temps de s'�merveiller devant la forme!
    system("pause");
}


int traiterCarre(int remplissage) // bon
{
    // d�claration des variables
   
    int largeur;
    int hauteur;
    // le programme demande � l'utilisateur d'entrer une seule donn�e
    cout << "Entrez la hauteur de votre carr� ";
    hauteur = saisirEntier();
 // puisque chaque c�t� d'un carr� est �quivalent, mais que la fonction vient de dessinerRectangle, on doit 
    // initialiser la valeur manquante.
    largeur = hauteur;
    // appel la fonction et envoie les param�tres
        dessinerRectangle(hauteur, largeur, remplissage);
 
    

    return 0;
}


void traiterTriangle(int remplissage)// bon
{
    int alea;
    int  hauteur;
    
    cout << "Entrez la hauteur du triangle ";
    hauteur = saisirEntier();
    // Permet de choisir al�atoirement la prochaine disposition des triangles
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
    // D�claration des variables
    int colonne,  ligne;

    char cote = '*';
    char vide = ' ';
    char plein = '#';

    cout << " Voici un triangle avec la dimension : " << hauteur   << " de hauteur :" << endl;

    
    // selon le rempl�ssage
    switch (remplissage)
    {
    case 2 : // le nombre de colonne est �gal � la hauteur, tant que les colones sont plus grandes que 1, on diminue!
        for (colonne = hauteur; colonne >= 1; colonne--)
        {
            // Le nombre de ligne est �gal � la hauteur, moins les colone en ajoutant 1, tant que c'est plus bas que 1, on diminue!
            for (ligne = hauteur - colonne + 1; ligne >= 1; ligne--)
            {
                // si nous sommes � la ligne 1 et que la colonne a la m�me valeur que la hauteur :
                if (ligne == 1 || colonne == hauteur)
                {
                    // on imprime un caract�re de c�t�!
                    cout << cote;
                }
                else
                {
                    // on imprime un espace vide!
                    cout << vide;
                }
            }
            // tant que la ligne est �gale � la colonne moins un, et que la ligne est plus grande que 0, on diminue!
            for (ligne = colonne - 1; ligne > 0; ligne--)
            {
                // si la ligne est �gale � un ou que la colonne est �gal � la hauteur :
                if (ligne == 1 || colonne == hauteur)
                {
                    // on ajoute un caract�re de c�t�!
                    cout << cote;
                }
                // sinon, on ajoute un caract�re vide!
                else
                {
                    cout << vide;
                }

            }// fait un espace sous la figure
            cout << endl;
        }
        break;
    case 1 :
        // le nombre de colonne est �gal � la hauteur, tant que les colones sont plus grandes que 1, on diminue!
        for (colonne = hauteur; colonne >= 1; colonne--)
        {// Le nombre de ligne est �gal � la hauteur, moins les colone en ajoutant 1, tant que c'est plus bas que 1, on diminue!
            for (ligne = hauteur - colonne + 1; ligne >= 1; ligne--)
            {
                // si nous sommes � la ligne 1 et que la colonne a la m�me valeur que la hauteur :
                if (ligne == 1 || colonne == hauteur)
                {// on imprime un caract�re de c�t�!
                    cout << cote;
                } // on imprime un espace vide!
                else
                {
                    cout << vide;
                }
            }// tant que la ligne est �gale � la colonne moins un, et que la ligne est plus grande que 0, on diminue!
            for (ligne = colonne - 1; ligne > 0; ligne--)
            {// si la ligne est �gale � un ou que la colonne est �gal � la hauteur :
                if (ligne == 1 || colonne == hauteur)
                { // on ajoute un caract�re de c�t�!
                    cout << cote;
                }
                else
                {// sinon, on ajoute un caract�re vide!
                    cout << plein;
                }

            }// fait un espace sous la figure
            cout << endl;
        }
        break;
    default:
        break;
    }

    // fait faire une pause au programme,et donne le temps de s'�merveiller devant la forme!
    system("pause");




    return 0;
}
int dessinerTriangle2(int hauteur, int remplissage) // bon
{// d�claration des variables
    int ligne;
    char cote = '*';
    char vide = ' ';
    char plein = '#';

    cout << " Voici un triangle avec la dimension : " << hauteur << "de hauteur :" << endl;
    switch (remplissage)
    { case 1 :
        // tant que la valeur de colonne est plus petite que la hauteur, on incr�mente!
        for (int colonne = 1; colonne <= hauteur; colonne++)
        {
            // tant que la ligne a une  plus petite valeur que la colonne, on incr�mente!!
            for (ligne = 1; ligne <= colonne; ligne++)
            {// si la ligne vaut 1 OU que la ligne vaut la m�me valeur que colonne OU que colonne �quivaut la hauteur :
                if (ligne == 1 || ligne == colonne || colonne == hauteur)
                {// on imprime un caract�re de c�t�!
                    cout << cote;
                }// sinon, on imprime un caract�re plein!
                else
                {
                    cout << plein;
                }


            }
            cout << endl;

        }
        break;
    case 2:
        // tant que la valeur de colonne est plus petite que la hauteur, on incr�mente!
        for (int colone = 1; colone <= hauteur; colone++)
        {
            // tant que la ligne a une  plus petite valeur que la colonne, on incr�mente!!
            for (ligne = 1; ligne <= colone; ligne++)
            {// si la ligne vaut 1 OU que la ligne vaut la m�me valeur que colonne OU que colonne �quivaut la hauteur :
                if (ligne == 1 || ligne == colone || colone == hauteur)
                {// on imprime un caract�re de c�t�!
                    cout << cote;
                }
                else
                {// sinon, on imprime un caract�re vide!
                    cout << vide;
                }


            }
            cout << endl;

        }
        break;
    default:
        break;
    }
    // fait faire une pause au programme,et donne le temps de s'�merveiller devant la forme!  
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
    case 1:// tant que la valeur de colonne est plus petite que la hauteur, on incr�mente!
        for (int colonne = 1; colonne <= hauteur; colonne++)
        {
            // tant que la ligne a une  plus petite valeur que la colonne, on incr�mente!!
            for (ligne = colonne; ligne <= hauteur; ligne++)
            { // si la colonne vaut 1 OU que la ligne vaut la m�me valeur que colonne OU que la ligne �quivaut la hauteur :
                if (colonne == 1 || ligne == colonne || ligne == hauteur)
                {// on imprime un caract�re de c�t�!
                    cout << cote;
                }
                else
                {// sinon, on imprime un caract�re plein!
                    cout << plein;
                }


            }
            cout << endl;

        }
        break;
    case 2 :
        // tant que la valeur de colonne est plus petite que la hauteur, on incr�mente!
        for (int colone = 1; colone <= hauteur; colone++)
        {
            // tant que la ligne a une  plus petite valeur que la colonne, on incr�mente!!
            for (ligne = colone; ligne <= hauteur; ligne++)
            { // si la colonne vaut 1 OU que la ligne vaut la m�me valeur que colonne OU que la ligne �quivaut la hauteur :
                if (colone == 1 || ligne == colone || ligne == hauteur)
                {// on imprime un caract�re de c�t�!
                    cout << cote;
                }
                else
                {// sinon, on imprime un caract�re vide!
                    cout << vide;
                }


            }
            cout << endl;

        }
        break;
    default:
        break;
    }// fait faire une pause au programme,et donne le temps de s'�merveiller devant la forme!
    system("pause");
        return 0;
    }
int dessinerTriangle4(int hauteur, int remplissage) // bon
{ //d�clarations de variables sympathiques
    int colonne;
    int ligne;
    char cote = '*';
    char vide = ' ';
    char plein = '#';
    // une d�claration pour l'utilisateur pleine de fougue
    cout << " Voici un triangle avec la dimension : " << hauteur << "de hauteur :" << endl;
   // tout d�pendant du remplissage
    switch (remplissage)
    {case 1 :
        // tant que les colonnes sont plus petites que la hauteur, incr�mentons-l�!
        for (colonne = 1; colonne <= hauteur; colonne++)
        {// tant que la ligne est strictement plus petite que la hauteur, incr�mentons-l�!
            for (ligne = colonne; ligne < hauteur; ligne++)
            {// ici, c'est un espace vide
                cout << vide;
            }
            // tant que la ligne est plus petite ou �gale � la hauteur, on lui donne + 1!
            for (ligne = 1; ligne <= hauteur; ligne++)
            {// si ces conditions sont achev�, entrons dans le if
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
    // fait faire une pause au programme,et donne le temps de s'�merveiller devant la forme!
    system("pause");
    return 0;
    }

void traiterIsocele(int remplissage)
{
    // D�clarons nos variables!
    int  hauteur;
   
    // Demandons � l'utilisateur de nous donner un param�tre!
    cout << "Entrez la hauteur du triangle ";
    hauteur = saisirEntier();
    // �tablissons que ce param�tre fait appel � saisirEntier

    // Envoyons les param�tres re�us de l'utilisateur � une fonction qui leur donnerons vie!
    dessinerIsocele(hauteur, remplissage);
}

int dessinerIsocele(int hauteur, int remplissage)
{
    // voici quelques variables, je vous le d�clare haut et fort!
    char cote = '*';
    char vide = ' ';
    char plein = '#';
    int colonne, ligne;


    // tout d�pendant du choix de remplissage
    switch (remplissage)
    {
    case 1:
        // tant que la colone a une valeur plus basse que celle de la hauteur, on l'incr�mente
        for (colonne = 1; colonne <= hauteur; colonne++)
        {// tant que la ligne a une valeur plus basse que la hauteur moins le nombre de colonne, on incr�mente la ligne
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
        {// tant que la ligne a une valeur plus basse que la hauteur moins le nombre de colonne, on incr�mente la ligne
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
        // fait faire une pause au programme,et donne le temps de s'�merveiller devant la forme!
        system("pause");

        return 0;
        }
    }
}
int traiterLosange(int remplissage)
{// H� bien oui, apr�s une lute intensive, j'y suis arriv�, le fameux losange!
    //d�clarations de quelques variables utiles
    int  hauteur;
    char cote = '*';
    char vide = ' ';
    char plein = '#';
   
    // Demandons � l'utilisateur un param�tre de hauteur!
    cout << "Entrez la hauteur du losange ";
    hauteur = saisirEntier();
    // on fait r�f�rence � la fonction saisirEntier

    // tant que la hauteur est paire, le programme ne laissera pas l'utilisateur entrer dans la figure
    while (hauteur % 2 == 0)
    {
        cout << "Erreur, votre hauteur doit �tre un nombre impair.";
        hauteur = saisirEntier();
    }

    // on appel la fonction de dessin en passant la hauteur en param�tre
     dessinerLosange(hauteur, remplissage);
 

    return 0;
    
}

int dessinerLosange(int hauteur, int remplissage)
{
    //Une petite phrase de pr�sentation coquette
    cout << " Voici un losange vide avec la dimension : " << hauteur << " de hauteur :" << endl;

    // c'est ici que j'eus d�clar� mes variables
    int  ligne, colonne, milieu;
    char vide = ' ', plein = '#', cote = '*';


    // selon le cas de remplissage
    switch (remplissage)
    {
    case 1:// J'ajoute une valeur de 1 au losange car sinon il est d�salign�
        hauteur = hauteur + 1;
        // divise la valeur en deux pour avoir 2 triangles qui sont invers� par rapport � l'autre, mais de la hauteur demand�e
        milieu = (hauteur / 2);
        // imprime le premier triangle isoc�le
        for (ligne = 1; ligne <= milieu; ligne++)
        {// tant que la colone est plus petite que la valeur de milieu moins la ligne, on incr�mente la colonne
            for (colonne = 1; colonne <= (milieu - ligne); colonne++)
            {// Pour imprimer les espace Avant le losange
                cout << vide;
            }// si la ligne vaut 1
            if (ligne == 1)
            {// imprimons un c�t�!
                cout << cote;
            }//sinon :
            else
            { //imprimons un c�t� quand m�me, mais nous aurons une boucle � nourrir ensuite!
                cout << cote; 
                // Bien s�r, tant que le nombre de colone est plus petit que la valeur de deux fois ligne -3
                // augmentons les colonnes
                for (colonne = 1; colonne <= 2 * ligne - 3; colonne++)
                { // imprime les parties pleines du losange
                    cout << plein;
                }// imprime un caract�re de c�t�
                cout << cote;
            }// fait un retour � la ligne bien m�rit�
            cout << endl;
        }
        // Ici, on a le m�me triangle, mais celui-ci est invers�
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
        // J'ajoute une valeur de 1 au losange car sinon il est d�salign�
        hauteur = hauteur + 1;
        // divise la valeur en deux pour avoir 2 triangles qui sont invers� par rapport � l'autre, mais de la hauteur demand�e
        milieu = (hauteur / 2);
        // imprime le premier triangle isoc�le
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
                cout << cote; // pour imprimer les �toiles au d�but et � la fin

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
    // fait faire une pause au programme,et donne le temps de s'�merveiller devant la forme!
    system("pause");

    return 0;
}


