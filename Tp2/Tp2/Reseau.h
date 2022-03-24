#pragma once
#include "Enfant.h"
#include "Compte.h"
#include "RendezVous.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

/// <summary>
/// Création de la classe Reseau
/// </summary>
class Reseau
{
public:
	/// <summary>
	/// Création du constructeur de la classe Réseau
	/// </summary>
	Reseau();

	/// <summary>
	/// Méthode qui crée des RDV
	/// </summary>
	/// <param name="Maman*">La mère qui crée le RDV</param>
	/// <param name="Enfant*">Le premier enfant du RDV</param>
	/// <param name="Enfant*">Le deuxieme enfant de RDV</param>
	/// <param name="Date">La date du RDV</param>
	void creeRDV(Maman*, Enfant*, Enfant*, Date);

	/// <summary>
	/// Méthode qui affiche les RDV  
	/// </summary>
	/// <param name="compte">Afficher les RDV d'un compte en particulier. 
	/// (ex: Tout les RDV que la maman as créer||Tout les RDV d'un enfant)</param>
	void afficherRDV(Compte*);

	/// <summary>
	/// Méthode qui permet de liker des compte enfant
	/// </summary>
	/// <param name="maman">La maman qui like</param>
	/// <param name="enfant">Le compte liker par la maman</param>
	void ajouterLikes(Maman*, Enfant*);

	/// <summary>
	/// Méthode qui affiche les compte liker par une maman
	/// </summary>
	/// <param name="maman">La maman dont on veux voir les likes</param>
	void afficherLikes(Maman*);

	/// <summary>
	/// Méthode pour ajouter un enfant en relation avec une belle-maman
	/// </summary>
	/// <param name="enfant">L'enfant à rajouter</param>
	void ajouterEnfant(Enfant*);

	/// <summary>
	/// Méthode qui sert à afficher tout les enfant créer
	/// </summary>
	void afficherAllEnfant();

	/// <summary>
	/// Méthode qui affiche tout les enfant selon une région
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
	/// Un vecteur qui contient tout les enfants créer
	/// </summary>
	std::vector<Enfant*> m_AllEnfant;
};

