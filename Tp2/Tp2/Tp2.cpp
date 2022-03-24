#include <iostream>
#include "Maman.h"
#include "Enfant.h"
#include "Reseau.h"

/// <summary>
/// Sert à tester les ajouts (lier) l'enfant au parent et les affichers
/// </summary>
void TestAjoutEnfant() {
    Maman Abella("Abella", "AbellaDanger@gmail.com", Date(15, 11, 1995));
    Maman Carine("Carine", "CarineCroteau@gmail.com", Date(24, 10, 1984));
    Enfant John("John", "JohnDanger@gmail.com", Date(4, 11, 2017), &Abella, true, "Victo", "faire crack crack", "Femme", "Felix");
    Enfant Joe("Joe", "JoeDanger@gmail.com", Date(26, 6, 2019), &Abella, true, "Drumon", "yo", "LOL", "Vincent");
    Enfant Marie("Marie", "MarieCroteau@gmail.com", Date(18, 6, 2002), &Carine, false, "Victo", "Devoir", "Étude", "Livre");
    Enfant Max("Max", "MaxCroteau@gmail.com", Date(29, 12, 2000), &Carine, true, "Drumon", "Gamer", "Dormir", "Progger");

    Abella.AjouterEnfant(&John);
    Abella.AjouterEnfant(&Joe);
    cout << "Affiche les enfant de Abella:\n";
    Abella.AfficherEnfant();

    Carine.AjouterEnfant(&Marie);
    Carine.AjouterEnfant(&Max);
    cout << "Affiche les enfant de Carine:\n";
    Carine.AfficherEnfant();
}

/// <summary>
/// Test l'affichage des donner des parents
/// </summary>
void TestAfficherDonnerParent() {
    cout << "Donnees de la belle-maman:\n";
    Maman Abella("Abella", "AbellaDanger@gmail.com", Date(15, 11, 1995));

    cout << Abella.getNom() << "\n";
    cout << Abella.getEmail() << "\n";
    cout << Abella.getDateNaissance().getJours() << "/";
    cout << Abella.getDateNaissance().getMois() << "/";
    cout << Abella.getDateNaissance().getAnne() << "\n";
}

/// <summary>
/// Test l'affichage des donner des enfants
/// </summary>
void TestAfficherDonnerEnfant() {
    Maman Carine("Carine", "CarineCroteau@gmail.com", Date(24, 10, 1984));
    Enfant Max("Max", "MaxCroteau@gmail.com", Date(29, 12, 2000), &Carine, true, "Drumon", "Gamer", "Dormir", "Progger");

    cout << "Donnees d'un enfant:\n";
    cout << Max.getNom() << "\n";
    cout << Max.getEmail() << "\n";
    cout << Max.getDateNaissance().getJours() << "/";
    cout << Max.getDateNaissance().getMois() << "/";
    cout << Max.getDateNaissance().getAnne() << "\n";
    cout << Max.getGenre() << "\n";
    for (size_t i = 0; i < 3; i++)
    {
        cout << Max.getInteret(i) << "\n";
    }
    cout << Max.getMaman()->getNom() << "\n";
    cout << Max.getRegion() << "\n";
    cout << "\n";
}

/// <summary>
/// Sert à tester la fonctionnaliter du calcul de l'âge
/// </summary>
void TestDate() {
    Date date1(12, 9, 2009);
    Date date2(12, 9, 2000);

    std::cout << "Test de l'age:\n";
    std::cout << date1.calculAge(&date1, &date2);
    std::cout << "\n";
    std::cout << "\n";
}

/// <summary>
/// Test de tout les méthodes de l'application ainsi de leur affichage
/// </summary>
void TestDuReseau() {
    Maman Abella("Abella", "AbellaDanger@gmail.com", Date(15, 11, 1995));
    Maman Carine("Carine", "CarineCroteau@gmail.com", Date(24, 10, 1984));
    Enfant John("John", "JohnDanger@gmail.com", Date(4, 11, 2017), &Abella, true, "Victo", "faire crack crack", "Femme", "Felix");
    Enfant Joe("Joe", "JoeDanger@gmail.com", Date(26, 6, 2019), &Abella, true, "Drumon", "yo", "LOL", "Vincent");
    Enfant Marie("Marie", "MarieCroteau@gmail.com", Date(18, 6, 2002), &Carine, false, "Victo", "Devoir", "Étude", "Livre");
    Enfant Max("Max", "MaxCroteau@gmail.com", Date(29, 12, 2000), &Carine, true, "Drumon", "Gamer", "Dormir", "The sanest Juicer");

    Reseau* app = new Reseau();

    app->creeRDV(&Abella, &John, &Marie, Date(23, 3, 2022));
    app->creeRDV(&Abella, &Joe, &Max, Date(27, 3, 2022));
    app->creeRDV(&Carine, &Max, &John, Date(25, 3, 2022));
    app->creeRDV(&Carine, &Marie, &Joe, Date(30, 3, 2022));

    std::cout << "RDV que la Belle-Maman a cree:\n";
    app->afficherRDV(&Abella);
    std::cout << "\n";
    std::cout << "RDV que la Belle-Maman a cree:\n";
    app->afficherRDV(&Carine);
    std::cout << "\n";

    std::cout << "RDV De l'enfant:\n";
    app->afficherRDV(&John);
    std::cout << "\n";
    std::cout << "RDV De l'enfant:\n";
    app->afficherRDV(&Joe);
    std::cout << "\n";
    std::cout << "RDV De l'enfant:\n";
    app->afficherRDV(&Marie);
    std::cout << "\n";
    std::cout << "RDV De l'enfant:\n";
    app->afficherRDV(&Max);
    std::cout << "\n";

    app->ajouterLikes(&Abella, &Marie);
    app->ajouterLikes(&Abella, &Max);
    app->ajouterLikes(&Carine, &John);
    app->ajouterLikes(&Carine, &Joe);

    std::cout << "Les likes de Belle-Maman:\n";
    app->afficherLikes(&Abella);
    std::cout << "\n";
    std::cout << "Les likes de Belle-Maman:\n";
    app->afficherLikes(&Carine);
    std::cout << "\n";

    std::cout << "Afficher tout les enfants:\n";
    app->ajouterEnfant(&John);
    app->ajouterEnfant(&Joe);
    app->ajouterEnfant(&Marie);
    app->ajouterEnfant(&Max);
    app->afficherAllEnfant();
    std::cout << "\n";

    std::cout << "Afficher tout les enfants par regions Victo:\n";
    app->afficherEnfantRegion("Victo");
    std::cout << "\n";
    std::cout << "Afficher tout les enfants par regions Drumon:\n";
    app->afficherEnfantRegion("Drumon");
}

int main()
{
    //Tout les méthodes pour testé mon application
    TestAjoutEnfant();
    TestAfficherDonnerParent();
    TestAfficherDonnerEnfant();
    TestDate();
    TestDuReseau();
}

