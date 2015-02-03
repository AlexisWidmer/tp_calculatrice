#include<iostream>
#include<stdint.h>
using namespace std;

/// \brief Soustraction de nombres int32
///
/// La fonction soustraction n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un entier 32 bits
/// \param oppB est un entier 32 bits
/// \return La soustraction des 2 entiers 32 bits donnes en parametres
/// \sa soustraction(int64_t oppA. int64_t oppB). soustraction(float oppA. float oppB). soustraction(double oppA. double oppB).
///

int32_t soustraction(int32_t oppA, int32_t oppB)
{
        return (oppA-oppB);
}

///
/// \brief Soustraction de nombres int64
///
/// La fonction soustraction n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un entier 64 bits
/// \param oppB est un entier 64 bits
/// \return La soustraction des 2 entiers 64 bits donnes en parametres
/// \sa soustraction(int32_t oppA. int32_t oppB). soustraction(float oppA. float oppB). soustraction(double oppA. double oppB).
///

int64_t soustraction(int64_t oppA,int64_t oppB)
{
        return (oppA-oppB);
}

///
/// \brief Soustraction de nombres float
///
/// La fonction soustraction n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un float
/// \param oppB est un float
/// \return La soustraction des 2 float donnes en parametres
/// \sa soustraction(int32_t oppA. int32_t oppB). soustraction(int64_t oppA. int64_t oppB). soustraction(double oppA. double oppB).
///

float soustraction(float oppA, float oppB)
{
        return (oppA-oppB);
}

///
/// \brief Soustraction de nombres double
///
/// La fonction soustraction n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un double
/// \param oppB est un double
/// \return La soustraction des 2 double donnes en parametres
/// \sa soustraction(int32_t oppA. int32_t oppB). soustraction(int64_t oppA. int64_t oppB). soustraction(float oppA. float oppB).
///

double soustraction(double oppA, double oppB)
{
        return (oppA-oppB);
}

