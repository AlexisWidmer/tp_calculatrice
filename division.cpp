#include<iostream>
#include<stdint.h>
using namespace std;

/// \brief Division de nombres int32
///
/// La fonction division n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un entier 32 bits
/// \param oppB est un entier 32 bits
/// \return La division des 2 entiers 32 bits donnes en parametres
/// \sa division(int64_t, int64_t), division(float, float), division(double, double).
///

int32_t division(int32_t oppA, int32_t oppB)
{
        return (oppA/oppB);
}

///
/// \brief Division de nombres int64
///
/// La fonction division n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un entier 64 bits
/// \param oppB est un entier 64 bits
/// \return La division des 2 entiers 64 bits donnes en parametres
/// \sa division(int32_t, int32_t), division(float, float), division(double, double).
///

int64_t division(int64_t oppA,int64_t oppB)
{
        return (oppA/oppB);
}

///
/// \brief Division de nombres float
///
/// La fonction division n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un float
/// \param oppB est un float
/// \return La division des 2 float donnes en parametres
/// \sa division(int32_t, int32_t), division(int64_t, int64_t), division(double, double).
///

float division(float oppA, float oppB)
{
        return (oppA/oppB);
}

///
/// \brief Division de nombres double
///
/// La fonction division n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un double
/// \param oppB est un double
/// \return La division des 2 double donnes en parametres
/// \sa division(int32_t, int32_t), division(int64_t, int64_t), division(float, float).
///

double division(double oppA, double oppB)
{
        return (oppA/oppB);
}

