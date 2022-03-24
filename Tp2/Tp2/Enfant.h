#pragma once
#include "Compte.h"

/// <summary>
/// Instanciation de la class Maman pour utiliser les m�thodes
/// </summary>
class Maman;

/// <summary>
/// Cr�ation de la classe Enfant qui h�rite de la classe compte
/// </summary>
class Enfant:
	public Compte
{
public:
	/// <summary>
	/// Cr�ation du constructeur le la classe Enfant
	/// </summary>
	/// <param name="m_nom">nom de l'enfant</param>
	/// <param name="m_email">Le email de l'enfant</param>
	/// <param name="m_date">La date de naissance de l'enfant</param>
	/// <param name="m_maman">La maman de l'enfant</param>
	/// <param name="m_genre">Le genre de l'enfant</param>
	/// <param name="m_region">La region ou vie l'enfant</param>
	/// <param name="m_interet1">L'int�ret 1</param>
	/// <param name="m_interet2">L'int�ret 1</param>
	/// <param name="m_interet3">L'int�ret 1</param>
	Enfant(string, string, Date, Maman*, bool, string, string, string, string);
	
	/// <summary>
	/// Sert � allez chercher la maman de l'enfant
	/// </summary>
	/// <returns>m_maman</returns>
	Maman* getMaman();

	/// <summary>
	/// Sert � allez chercher le genre de l'enfant
	/// </summary>
	/// <returns>m_genre</returns>
	string getGenre();

	/// <summary>
	/// Sert � allez chercher la r�gion de l'enfant
	/// </summary>
	/// <returns>m_region</returns>
	string getRegion();

	/// <summary>
	/// Sert � allez chercher les int�rets de l'enfant
	/// </summary>
	/// <param name="index">La position de l'int�ret dans le tableau de 3</param>
	/// <returns>L'int�ret</returns>
	string getInteret(int);

private:
	/// <summary>
	/// La maman
	/// </summary>
	Maman* m_maman;

	/// <summary>
	/// Le genre
	/// </summary>
	bool m_genre;

	/// <summary>
	/// La region
	/// </summary>
	string m_region;

	/// <summary>
	/// Les int�rets
	/// </summary>
	string m_interet[3];
};

