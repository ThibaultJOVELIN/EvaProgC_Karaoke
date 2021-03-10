#include <string>
#include <vector>
#include <iostream>
#include "Player.h"
using namespace std;


void Player::AjoutScore(){

}

void Player::ChangementScore(){
 if (_score_obtenu > _score_precedent)
    _score == _score_obtenu;
else
    _score == _score_precedent;
}

void Player::PireScore(){
    cout << _pire_score << endl;

}

void Player::MeilleurScore(){
    cout << _meilleur_score << endl;

}

void Player::Moyenne(){

}

std::string Player::EntrerNom(){
    return NomJoueur;
}




