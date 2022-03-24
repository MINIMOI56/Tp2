#pragma once
#include <string>
using namespace std;

/// <summary>
/// Cr�ation de la classe Date qui sert � cr�er des dates
/// </summary>
class Date
{
	public:
		/// <summary>
		/// Cr�ation du constructeur le la classe Date
		/// </summary>
		/// <param name="jours">Le jours</param>
		/// <param name="mois">Le mois </param>
		/// <param name="annes">L'ann�e</param>
		Date(int, int, int);

		/// <summary>
		/// Va chercher le jour de la date
		/// </summary>
		/// <returns>Le jours</returns>
		int getJours();

		/// <summary>
		/// Va chercher le mois de la date
		/// </summary>
		/// <returns>Le mois</returns>
		int getMois();

		/// <summary>
		/// Va chercher l'ann�e de la date
		/// </summary>
		/// <returns>L'ann�e</returns>
		int getAnne();

		/// <summary>
		/// Sert � changer le jours dans la date
		/// </summary>
		/// <param name="m_jours">Le jours (ex:1)</param>
		void setJours(int);

		/// <summary>
		/// Sert � changer le mois dans la date
		/// </summary>
		/// <param name="m_mois">Le mois (ex:1)</param>
		void setMois(int);

		/// <summary>
		/// Sert � changer l'ann�e dans la date
		/// </summary>
		/// <param name="m_anne">L'ann�e (ex:2022)</param>
		void setAnnes(int);

		/// <summary>
		/// Sert � calculer l'�ge avec deux dates
		/// </summary>
		/// <param name="Date*">La date 1</param>
		/// <param name="Date*">La date 2</param>
		/// <returns>L'�ge</returns>
		int calculAge(Date*, Date*);

	private:
		/// <summary>
		/// Le jour
		/// </summary>
		int m_jours;

		/// <summary>
		/// Le mois
		/// </summary>
		int m_mois;

		/// <summary>
		/// L'ann�es
		/// </summary>
		int m_annes;
};

