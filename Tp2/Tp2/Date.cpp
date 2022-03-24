#include "Date.h"

Date::Date(int j, int m, int a) : m_jours{ j }, m_mois{ m }, m_annes{ a }
{
}

int Date::getJours()
{
    return m_jours;
}

int Date::getMois()
{
    return m_mois;
}

int Date::getAnne()
{
    return m_annes;
}

void Date::setJours(int jours)
{
    m_jours = jours;
}

void Date::setMois(int mois)
{
    m_mois = mois;
}

void Date::setAnnes(int annes)
{
    m_annes = annes;
}

int Date::calculAge(Date* a, Date* b)
{
    int annee = a->getAnne() - b->getAnne();

    if (a->getMois() > b->getMois() || (a->getMois() == b->getMois() && a->getJours() >= b->getJours()))
    {
        annee++;
    }
   
    return annee;
}
