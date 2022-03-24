#pragma once
#include "Compte.h"
#include "Enfant.h"
#include <vector>

/// <summary>
/// Cr�ation de la classe Maman qui h�rite de la classe compte
/// </summary>
class Maman :
	public Compte
{
public:
	/// <summary>
	/// Cr�ation du constructeur le la classe Maman
	/// </summary>
	/// <param name="m_nom">Le nom de la belle-m�re</param>
	/// <param name="m_email">le email de la belle-m�re</param>
	/// <param name="m_dateNaissance">la date de la belle-m�re</param>
	Maman(string, string, Date);

	/// <summary>
	/// M�thode pour ajouter un enfant � la belle-m�re (lien)
	/// </summary>
	/// <param name="Enfant*">L'enfant � ajouter</param>
	void AjouterEnfant(Enfant*);

	/// <summary>
	/// M�thode pour afficher tout les enfant lier � la belle-m�re
	/// </summary>
	void AfficherEnfant();

private:
	/// <summary>
	/// Vecteur qui stock les enfants
	/// </summary>
	vector<Enfant*> m_enfants;
};

