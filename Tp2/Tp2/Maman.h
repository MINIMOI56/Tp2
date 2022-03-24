#pragma once
#include "Compte.h"
#include "Enfant.h"
#include <vector>

/// <summary>
/// Création de la classe Maman qui hérite de la classe compte
/// </summary>
class Maman :
	public Compte
{
public:
	/// <summary>
	/// Création du constructeur le la classe Maman
	/// </summary>
	/// <param name="m_nom">Le nom de la belle-mère</param>
	/// <param name="m_email">le email de la belle-mère</param>
	/// <param name="m_dateNaissance">la date de la belle-mère</param>
	Maman(string, string, Date);

	/// <summary>
	/// Méthode pour ajouter un enfant à la belle-mère (lien)
	/// </summary>
	/// <param name="Enfant*">L'enfant à ajouter</param>
	void AjouterEnfant(Enfant*);

	/// <summary>
	/// Méthode pour afficher tout les enfant lier à la belle-mère
	/// </summary>
	void AfficherEnfant();

private:
	/// <summary>
	/// Vecteur qui stock les enfants
	/// </summary>
	vector<Enfant*> m_enfants;
};

