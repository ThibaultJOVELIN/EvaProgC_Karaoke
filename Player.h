#include <iostream>

class Player{

    private: 

        std::string NomJoueur;
        int _score_obtenu;
        int _score_précédent;
        int _score;
        int _meilleur_score;
        int _pire_score;
        int _moyenne;

    public : 

        void PireScore();
        void MeilleurScore();
        void Moyenne();
        std::string EntrerNom();
};
