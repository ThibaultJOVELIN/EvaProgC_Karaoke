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
        int _scoreM1;
        int _scoreM2;
        int _scoreM3;
        int _scoreM4;
        int _scoreM5;


    public : 

        void AjoutScore();
        void PireScore();
        void MeilleurScore();
        void Moyenne();
        std::string EntrerNom();
};

