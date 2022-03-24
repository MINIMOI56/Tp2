#pragma once
#include "Enfant.h"
#include "Compte.h"
#include "RendezVous.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

/// <summary>
/// Cr�ation de la classe Reseau
/// </summary>
class Reseau
{
public:
	/// <summary>
	/// Cr�ation du constructeur de la classe R�seau
	/// </summary>
	Reseau();

	/// <summary>
	/// M�thode qui cr�e des RDV
	/// </summary>
	/// <param name="Maman*">La m�re qui cr�e le RDV</param>
	/// <param name="Enfant*">Le premier enfant du RDV</param>
	/// <param name="Enfant*">Le deuxieme enfant de RDV</param>
	/// <param name="Date">La date du RDV</param>
	void creeRDV(Maman*, Enfant*, Enfant*, Date);

	/// <summary>
	/// M�thode qui affiche les RDV  
	/// </summary>
	/// <param name="compte">Afficher les RDV d'un compte en particulier. 
	/// (ex: Tout les RDV que la maman as cr�er||Tout les RDV d'un enfant)</param>
	void afficherRDV(Compte*);

	/// <summary>
	/// M�thode qui permet de liker des compte enfant
	/// </summary>
	/// <param name="maman">La maman qui like</param>
	/// <param name="enfant">Le compte liker par la maman</param>
	void ajouterLikes(Maman*, Enfant*);

	/// <summary>
	/// M�thode qui affiche les compte liker par une maman
	/// </summary>
	/// <param name="maman">La maman dont on veux voir les likes</param>
	void afficherLikes(Maman*);

	/// <summary>
	/// M�thode pour ajouter un enfant en relation avec une belle-maman
	/// </summary>
	/// <param name="enfant">L'enfant � rajouter</param>
	void ajouterEnfant(Enfant*);

	/// <summary>
	/// M�thode qui sert � afficher tout les enfant cr�er
	/// </summary>
	void afficherAllEnfant();

	/// <summary>
	/// M�thode qui affiche tout les enfant selon une r�gion
	/// </summary>
	/// <param name="m_region">La region</param>
	void afficherEnfantRegion(std::string);

private:
	/// <summary>
	/// Une map qui contient une address couriel et un vecteur de rendez-vous
	/// </summary>
	std::map<string, vector<RendezVous*>> m_RendezVous;

	/// <summary>
	/// Une map qui contient une address couriel et un vecteur d'enfant pour les like
	/// </summary>
	std::map<string, vector<Enfant*>> m_Likes;

	/// <summary>
	/// Une map qui contient une address couriel et un vecteur de rendez-vous pour les enfant
	/// </summary>
	std::map<string, vector<RendezVous*>> m_RendezVousEnfant;

	/// <summary>
	/// Un vecteur qui contient tout les enfants cr�er
	/// </summary>
	std::vector<Enfant*> m_AllEnfant;
};

