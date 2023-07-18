/***************************************************************************
                          radiosite.h  -  description 
                             -------------------

Note : ne pas remettre dans le turnin.

 ***************************************************************************/

 #if !defined(__RADIOSITE_H__)
 #define __RADIOSITE_H__

#include "objet.h"


class Piece{
 public:
   Objet*   objscene;  // Pointe sur l'objet atomique associ� dans la sc�ne
   Couleur radiosite,   // Radiosit� de la pi�ce (� calculer)
					  diffus,			// Coefficient Diffus
                   emis;         // Coefficient Emis

  // Les attributs suivant sont utilis�s pour l'algo de propagation
   point          centre;    // Coordonn�e glabale du centre de la pi�ce
   reel           aire;         // Aire de la pi�ce
   vecteur     vn, v1, v2;  // vecteur normal et 2 vecteurs permettant la construction de l'h�mi-cube
   Couleur     ERaP;  // energie recu � propager...  (delta radiosit�)
};

// Num�rote les pi�ces.  Construit un tableau de pi�ces.
void DeterminerPieces(Objet* scene);

// Calcul les facteurs de formes de tous les pi�ces.
void CalculFacteursFormes(Objet *scene);

// Calcul la radiosit� par Guass Seidel
// Est appel�e par le menu "Calcul Radiosit� GS" (bouton droit)
void CalculRadiosite_GS(Objet* scene);

// Calcul la radiosit� par Propagation
// Est appel�e par le menu "Calcul Radiosit� Prop" (bouton droit)
void CalculRadiositePropagation(Objet* scene);

#endif
