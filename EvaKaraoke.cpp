#include <string>
#include <vector>
#include <iostream>
#include "Player.h"
using namespace std;

char Musique [4];

void Player::AjoutScore(){

}

void Player::ChangementScore(){
    if (_score_obtenu > _score_precedent)
        _score == _score_obtenu;
    else
        _score == _score_precedent;
}

void Player::NombreMusique(){
    if (_scoreM1 > 0)
        _nombre_musique += 1;
    if (_scoreM2 > 0)
        _nombre_musique += 1;
    if (_scoreM3 > 0)
        _nombre_musique += 1;
    if (_scoreM4 > 0)
        _nombre_musique += 1;
    if (_scoreM5 > 0)
        _nombre_musique += 1;
    
}

void Player::PireScore(){
    cout << _pire_score << endl;

}

void Player::MeilleurScore(){
    cout << _meilleur_score << endl;

}

void Player::Moyenne(){
    if (_nombre_musique > 0)
        _moyenne = _scoreM1 + _scoreM2 + _scoreM3 + _scoreM4 + _scoreM5;
        _moyenne = _moyenne / _nombre_musique;
        cout << _moyenne << endl;

}

std::string Player::EntrerNom(){
    return NomJoueur;
}




