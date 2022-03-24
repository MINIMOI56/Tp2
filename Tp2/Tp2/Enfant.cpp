#include "Enfant.h"

class Maman;

Enfant::Enfant(string nom, string courriel, Date dateNaissance ,Maman* nomMaman, bool genre, string region, string interet1, string interet2, string interet3) : 
	Compte(nom, courriel, dateNaissance), m_maman{ nomMaman }, m_genre{ genre }, m_region{ region }
{
	m_interet[0] = interet1;
	m_interet[1] = interet2;
	m_interet[2] = interet3;
}

Maman* Enfant::getMaman()
{
	return m_maman;
}

string Enfant::getGenre()
{
	string a{""};

	if (m_genre)
	{
		a = "Homme";
	}
	else {
		a = "Femme";
	}
	return a;
}

string Enfant::getRegion()
{
	return m_region;
}

string Enfant::getInteret(int index)
{
	return m_interet[index];
}
