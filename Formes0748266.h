//But: faire des déclarations de fonctions pour les formes
//Auteur: Jonathan Carrier
//Date: Novembre 2020



#pragma once
//La liste des déclaration des fonctions permettant de traiter et dessiner les formes.

int genererNombreAleatoire();

int traiterForme(int remplissage);  //Ces fonctions, selon la forme, demandent les dimensions de la forme, affichent
//la phrase de présentation de la forme avec les bonnes dimensions et finalement
//appellent la fonction dessinant la forme.Il y aura donc 4 versions de cette
//fonction : traiterRectangle(), traiterCarre(), traiterTriangle(),traiterLosange().

int traiterRectangle(int remplissage);
void dessinerRectangle(int x, int y, int remplissage);

void traiterTriangle(int remplissage);
int traiterCarre(int remplissage);

int traiterLosange(int remplissage);
int dessinerLosange(int hauteur, int remplissage);

int dessinerTriangle1(int hauteur, int remplissage);//Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode
//de remplissage sont passés en paramètre.
int dessinerTriangle2(int hauteur,int remplissage); //Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode
//de remplissage sont passés en paramètre.
int dessinerTriangle3(int hauteur, int remplissage );// Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode
//de remplissage sont passés en paramètre.
int dessinerTriangle4(int hauteur, int remplissage);

void traiterIsocele(int remplissage);
int dessinerIsocele(int hauteur, int remplissage);
