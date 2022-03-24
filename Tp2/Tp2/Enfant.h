#pragma once
#include "Compte.h"

/// <summary>
/// Instanciation de la class Maman pour utiliser les méthodes
/// </summary>
class Maman;

/// <summary>
/// Création de la classe Enfant qui hérite de la classe compte
/// </summary>
class Enfant:
	public Compte
{
public:
	/// <summary>
	/// Création du constructeur le la classe Enfant
	/// </summary>
	/// <param name="m_nom">nom de l'enfant</param>
	/// <param name="m_email">Le email de l'enfant</param>
	/// <param name="m_date">La date de naissance de l'enfant</param>
	/// <param name="m_maman">La maman de l'enfant</param>
	/// <param name="m_genre">Le genre de l'enfant</param>
	/// <param name="m_region">La region ou vie l'enfant</param>
	/// <param name="m_interet1">L'intéret 1</param>
	/// <param name="m_interet2">L'intéret 1</param>
	/// <param name="m_interet3">L'intéret 1</param>
	Enfant(string, string, Date, Maman*, bool, string, string, string, string);
	
	/// <summary>
	/// Sert à allez chercher la maman de l'enfant
	/// </summary>
	/// <returns>m_maman</returns>
	Maman* getMaman();

	/// <summary>
	/// Sert à allez chercher le genre de l'enfant
	/// </summary>
	/// <returns>m_genre</returns>
	string getGenre();

	/// <summary>
	/// Sert à allez chercher la région de l'enfant
	/// </summary>
	/// <returns>m_region</returns>
	string getRegion();

	/// <summary>
	/// Sert à allez chercher les intérets de l'enfant
	/// </summary>
	/// <param name="index">La position de l'intéret dans le tableau de 3</param>
	/// <returns>L'intéret</returns>
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
	/// Les intérets
	/// </summary>
	string m_interet[3];
};

