#pragma once
#include <string>
#include "Date.h"
using namespace std;

/// <summary>
/// Création de la classe Compte qui sert à créé des comptes
/// </summary>
class Compte
{
public:
	/// <summary>
	/// Création du constructeur le la classe Compte
	/// </summary>
	/// <param name="m_nom">Le nom du propriétaire du compte</param>
	/// <param name="m_email">le email du propriétaire du compte</param>
	/// <param name="m_dateNaissance">la date de naissance du propriétaire du compte</param>
	Compte(string, string, Date);

	/// <summary>
	/// Fonction qui va chercher le nom du compte
	/// </summary>
	/// <returns>le nom du compte</returns>
	string getNom() const;

	/// <summary>
	/// Fonction qui va chercher le email du compte
	/// </summary>
	/// <returns>le email du compte</returns>
	string getEmail() const;

	/// <summary>
	/// Va chercher la date de naissance du compte
	/// </summary>
	/// <returns>La date de naissance du compte</returns>
	Date getDateNaissance();
	
protected:
	/// <summary>
	/// Le nom du compte
	/// </summary>
	string m_nom;

	/// <summary>
	/// Le email du compte
	/// </summary>
	string m_email;

	/// <summary>
	/// La date de naissance du compte
	/// </summary>
	Date m_dateNaissance;
};

