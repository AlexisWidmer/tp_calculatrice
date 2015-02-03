#include<iostream>
#include<stdint.h>
using namespace std;

/// \brief Addition de nombres int32
///
/// La fonction addition n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un entier 32 bits
/// \param oppB est un entier 32 bits
/// \return La somme des 2 entiers 32 bits donnes en parametres
/// \sa addition(int64_t oppA. int64_t oppB). addition(float oppA. float oppB). addition(double oppA. double oppB).
///

int32_t addition(int32_t oppA, int32_t oppB)
{
	return (oppA+oppB);
}

///
/// \brief Addition de nombres int64
///
/// La fonction addition n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un entier 64 bits
/// \param oppB est un entier 64 bits
/// \return La somme des 2 entiers 64 bits donnes en parametres
/// \sa addition(int32_t oppA. int32_t oppB). addition(float oppA. float oppB). addition(double oppA. double oppB).
///

int64_t addition(int64_t oppA,int64_t oppB)
{
        return (oppA+oppB);
}

///
/// \brief Addition de nombres float
///
/// La fonction addition n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un float
/// \param oppB est un float
/// \return La somme des 2 float donnes en parametres
/// \sa addition(int32_t oppA. int32_t oppB). addition(int64_t oppA. int64_t oppB). addition(double oppA. double oppB).
///

float addition(float oppA, float oppB)
{
        return (oppA+oppB);
}

///
/// \brief Addition de nombres double
///
/// La fonction addition n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un entier double
/// \param oppB est un entier double
/// \return La somme des 2 double donnes en parametres
/// \sa addition(int32_t oppA. int32_t oppB). addition(ibnt64_t oppA. int64_t oppB). addition(float oppA. float oppB).
///

double addition(double oppA, double oppB)
{
        return (oppA+oppB);
}

