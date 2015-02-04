#include<iostream>
#include<stdint.h>
using namespace std;

/// \brief Multiplication de nombres int32
///
/// La fonction multiplication n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un entier 32 bits
/// \param oppB est un entier 32 bits
/// \return La multiplication des 2 entiers 32 bits donnes en parametres
/// \sa multiplication(int64_t, int64_t), multiplication(float, float), multiplication(double, double).
///

int32_t multiplication(int32_t oppA, int32_t oppB)
{
        return (oppA*oppB);
}

///
/// \brief Multiplication de nombres int64
///
/// La fonction multiplication n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un entier 64 bits
/// \param oppB est un entier 64 bits
/// \return La multiplication des 2 entiers 64 bits donnes en parametres
/// \sa multiplication(int32_t, int32_t), multiplication(float, float), multiplication(double, double).
///

int64_t multiplication(int64_t oppA,int64_t oppB)
{
        return (oppA*oppB);
}

///
/// \brief Multiplication de nombres float
///
/// La fonction multiplication n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un float
/// \param oppB est un float
/// \return La multiplication des 2 float donnes en parametres
/// \sa multiplication(int32_t, int32_t), multiplication(int64_t, int64_t), multiplication(double, double).
///

float multiplication(float oppA, float oppB)
{
        return (oppA*oppB);
}

///
/// \brief Multiplication de nombres double
///
/// La fonction multiplication n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un double
/// \param oppB est un double
/// \return La multiplication des 2 double donnes en parametres
/// \sa multiplication(int32_t, int32_t), multiplication(int64_t, int64_t), multiplication(float, float).
///

double multiplication(double oppA, double oppB)
{
        return (oppA*oppB);
}

