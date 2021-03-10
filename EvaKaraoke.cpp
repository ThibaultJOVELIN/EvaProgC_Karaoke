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
    cout << "Votre pire score est de " + _pire_score << endl;

}

void Player::MeilleurScore(){
    _meilleur_score = _scoreM1;
    if (_scoreM2 > _meilleur_score)
        _meilleur_score = _scoreM2;

    if (_scoreM3 > _meilleur_score)
        _meilleur_score = _scoreM3;

    if (_scoreM4 > _meilleur_score)
        _meilleur_score = _scoreM4;

    if (_scoreM5 > _meilleur_score)
        _meilleur_score = _scoreM5;

    cout << "Votre meilleur score est de " + _meilleur_score << endl;

}

void Player::Moyenne(){
    if (_nombre_musique > 0)
        _moyenne = _scoreM1 + _scoreM2 + _scoreM3 + _scoreM4 + _scoreM5;
        _moyenne = _moyenne / _nombre_musique;
        cout << "Votre moyenne est de " + _moyenne << endl;

}

std::string Player::EntrerNom(){
    return NomJoueur;
}




