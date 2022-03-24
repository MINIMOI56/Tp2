#include "Compte.h"

Compte::Compte(string nom, string email, Date datenaissance) : m_nom{nom}, m_email{email}, m_dateNaissance{datenaissance} {}

string Compte::getNom() const
{
	return m_nom;
}

string Compte::getEmail() const
{
	return m_email;
}

Date Compte::getDateNaissance()
{
	return m_dateNaissance;
}

