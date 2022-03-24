#include "Reseau.h"

Reseau::Reseau()
{
}

void Reseau::creeRDV(Maman* maman, Enfant* enfant1, Enfant* enfant2, Date date)
{
	m_RendezVous[maman->getEmail()].push_back(new RendezVous(maman, enfant1, enfant2, date));
	m_RendezVousEnfant[enfant1->getEmail()].push_back(new RendezVous(maman, enfant1, enfant2, date));
	m_RendezVousEnfant[enfant2->getEmail()].push_back(new RendezVous(maman, enfant2, enfant1, date));
}

void Reseau::afficherRDV(Compte* compte)
{
	std::map<string, vector<RendezVous*>> tamponRDVMaman = m_RendezVous;
	std::map<string, vector<RendezVous*>> tamponRDVEnfant = m_RendezVousEnfant;

	if (tamponRDVMaman[compte->getEmail()].empty())
	{
		while (!tamponRDVEnfant[compte->getEmail()].empty())
		{
			std::cout << compte->getEmail() << " -> ";
			std::cout << tamponRDVEnfant[compte->getEmail()].back()->getEnfant1()->getNom() << " avec ";
			std::cout << tamponRDVEnfant[compte->getEmail()].back()->getEnfant2()->getNom() << " le ";
			std::cout << tamponRDVEnfant[compte->getEmail()].back()->getDate().getJours() << "/";
			std::cout << tamponRDVEnfant[compte->getEmail()].back()->getDate().getMois() << "/";
			std::cout << tamponRDVEnfant[compte->getEmail()].back()->getDate().getAnne() << "\n";
			tamponRDVEnfant[compte->getEmail()].pop_back();
		}
	}
	else
	{
		while (!tamponRDVMaman[compte->getEmail()].empty())
		{
			std::cout << compte->getEmail() << " -> ";
			std::cout << tamponRDVMaman[compte->getEmail()].back()->getEnfant1()->getNom() << " avec ";
			std::cout << tamponRDVMaman[compte->getEmail()].back()->getEnfant2()->getNom() << " le ";
			std::cout << tamponRDVMaman[compte->getEmail()].back()->getDate().getJours() << "/";
			std::cout << tamponRDVMaman[compte->getEmail()].back()->getDate().getMois() << "/";
			std::cout << tamponRDVMaman[compte->getEmail()].back()->getDate().getAnne() << "\n";
			tamponRDVMaman[compte->getEmail()].pop_back();
		}
	}


}

void Reseau::ajouterLikes(Maman* maman, Enfant* enfant)
{
	m_Likes[maman->getEmail()].push_back(enfant);
}

void Reseau::afficherLikes(Maman* maman)
{
	std::map<string, vector<Enfant*>> tampon = m_Likes;

	while (!tampon[maman->getEmail()].empty())
	{
		std::cout << maman->getEmail() << " -> ";
		std::cout << tampon[maman->getEmail()].back()->getNom() << "\n";
		tampon[maman->getEmail()].pop_back();
	}
}

void Reseau::ajouterEnfant(Enfant* enfant)
{
	m_AllEnfant.push_back(enfant);
}

void Reseau::afficherAllEnfant()
{
	for (size_t i = 0; i < m_AllEnfant.size(); i++)
	{
		std::cout << m_AllEnfant[i]->getNom() << " : ";
		std::cout << m_AllEnfant[i]->getDateNaissance().getJours() << "/";
		std::cout << m_AllEnfant[i]->getDateNaissance().getMois() << "/";
		std::cout << m_AllEnfant[i]->getDateNaissance().getAnne() << "\n";
	}
}

void Reseau::afficherEnfantRegion(std::string region)
{
	for (size_t i = 0; i < m_AllEnfant.size(); i++)
	{
		if (m_AllEnfant[i]->getRegion() == region)
		{
			std::cout << m_AllEnfant[i]->getNom() << " : ";
			std::cout << m_AllEnfant[i]->getDateNaissance().getJours() << "/";
			std::cout << m_AllEnfant[i]->getDateNaissance().getMois() << "/";
			std::cout << m_AllEnfant[i]->getDateNaissance().getAnne() << ", ";
			std::cout << m_AllEnfant[i]->getRegion() << "\n";
		}
		
	}
}
