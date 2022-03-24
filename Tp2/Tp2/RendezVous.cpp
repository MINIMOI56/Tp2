#include "RendezVous.h"

RendezVous::RendezVous(Maman* maman, Enfant* enfant1, Enfant* enfant2, Date date) :
	m_enfant1{ enfant1 }, m_enfant2{ enfant2 }, m_maman{ maman }, m_date{date}
{
}

Enfant* RendezVous::getEnfant1()
{
	return m_enfant1;
}

Enfant* RendezVous::getEnfant2()
{
	return m_enfant2;
}

Maman* RendezVous::getMaman()
{
	return m_maman;
}

Date RendezVous::getDate()
{
	return m_date;
}
