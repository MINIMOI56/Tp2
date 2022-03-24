#pragma once
#include <string>
using namespace std;

/// <summary>
/// Création de la classe Date qui sert à créer des dates
/// </summary>
class Date
{
	public:
		/// <summary>
		/// Création du constructeur le la classe Date
		/// </summary>
		/// <param name="jours">Le jours</param>
		/// <param name="mois">Le mois </param>
		/// <param name="annes">L'année</param>
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
		/// Va chercher l'année de la date
		/// </summary>
		/// <returns>L'année</returns>
		int getAnne();

		/// <summary>
		/// Sert à changer le jours dans la date
		/// </summary>
		/// <param name="m_jours">Le jours (ex:1)</param>
		void setJours(int);

		/// <summary>
		/// Sert à changer le mois dans la date
		/// </summary>
		/// <param name="m_mois">Le mois (ex:1)</param>
		void setMois(int);

		/// <summary>
		/// Sert à changer l'année dans la date
		/// </summary>
		/// <param name="m_anne">L'année (ex:2022)</param>
		void setAnnes(int);

		/// <summary>
		/// Sert à calculer l'âge avec deux dates
		/// </summary>
		/// <param name="Date*">La date 1</param>
		/// <param name="Date*">La date 2</param>
		/// <returns>L'âge</returns>
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
		/// L'années
		/// </summary>
		int m_annes;
};

