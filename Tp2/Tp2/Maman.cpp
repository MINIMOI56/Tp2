#include "Maman.h"
#include <iostream>

Maman::Maman(string nom, string email, Date dateNaissance) : Compte{nom, email, dateNaissance}
{
}

void Maman::AjouterEnfant(Enfant* i)
{
	m_enfants.push_back(i);
}

void Maman::AfficherEnfant()
{
	while (!m_enfants.empty())
	{
		std::cout << m_nom << " -> ";
		std::cout << m_enfants.back()->getNom() + "\n";
		m_enfants.pop_back();
	}
	std::cout << std::endl;
}
