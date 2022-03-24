#pragma once
#include "Enfant.h"
#include "Maman.h"
#include "Date.h"

/// <summary>
/// Création de la classe RendezVous
/// </summary>
class RendezVous
{
public:
	/// <summary>
	/// Création du constructeur de la classe RendezVous
	/// </summary>
	/// <param name="Maman*">m_maman</param>
	/// <param name="Enfant*">m_enfant1</param>
	/// <param name="Enfant*">m_enfant2</param>
	/// <param name="Date">m_date</param>
	RendezVous(Maman*, Enfant*, Enfant*, Date);

	/// <summary>
	/// Méthode qui va chercher l'enfant 1
	/// </summary>
	/// <returns>m_enfant1</returns>
	Enfant* getEnfant1();

	/// <summary>
	/// Méthode qui va chercher l'enfant 2
	/// </summary>
	/// <returns>m_enfant2</returns>
	Enfant* getEnfant2();

	/// <summary>
	/// Méthode qui va chercher la maman
	/// </summary>
	/// <returns>m_maman</returns>
	Maman* getMaman();

	/// <summary>
	/// Méthode qui va chercher la date
	/// </summary>
	/// <returns>m_date</returns>
	Date getDate();
private:
	/// <summary>
	/// L'enfant 1
	/// </summary>
	Enfant* m_enfant1;

	/// <summary>
	/// L'enfant 2
	/// </summary>
	Enfant* m_enfant2;

	/// <summary>
	/// La maman qui organise le rdv
	/// </summary>
	Maman* m_maman;

	/// <summary>
	/// La date du rdv
	/// </summary>
	Date m_date;
};

