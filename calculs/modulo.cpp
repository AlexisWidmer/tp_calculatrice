#include<iostream>
#include<stdint.h>
using namespace std;

/// \brief Modulo de nombres int32
///
/// La fonction modulo n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un entier 32 bits
/// \param oppB est un entier 32 bits
/// \return La multiplication des 2 entiers 32 bits donnes en parametres
/// \sa modulo(int64_t oppA. int64_t oppB)
///

int32_t modulo(int32_t oppA, int32_t oppB)
{
        return (oppA%oppB);
}

///
/// \brief Modulo de nombres int64
///
/// La fonction modulo n'est pas la meme suivant les parametres (leur type)
/// On appelle ca une fonction polymorphe
///
/// \param oppA est un entier 64 bits
/// \param oppB est un entier 64 bits
/// \return La multiplication des 2 entiers 64 bits donnes en parametres
/// \sa modulo(int32_t oppA. int32_t oppB)
///

int64_t modulo(int64_t oppA,int64_t oppB)
{
        return (oppA%oppB);
}
