#include<iostream>
#include<stdint.h>
#include"./calculs/addition.cpp"
#include"./calculs/soustraction.cpp"
#include"./calculs/multiplication.cpp"
#include"./calculs/division.cpp"
#include"./calculs/modulo.cpp"
using namespace std;

int main()
{
/// Declaration et initialisation des nombres de type int32, int64, float et double
int32_t a = 864;
int32_t b = 156;
int64_t c = 845;
int64_t d = 625;
float e = 456.25;
float f = 488.64;
double g = 78965.45;
double h = 424242.42;

/// \brief Affichage du contenu des nombres
cout << "Voici les nombres :\n-Entiers sur 32 bits : 864 et 156\n-Entiers sur 64 bits : 845 et 625\n-Float : 456.25 et 488.64\n-Double : 78965.45 et 424242.42";

/// \brief Affichage des additions
cout << "\n\nResultat des additions :\n-int32 : " << addition(a, b) << "\n-int64 : " << addition(c, d) << "\n-float : " << addition(e, f) << "\n-double : " << addition(g, h);

/// \brief Affichage des soustractions
cout << "\n\nResultat des soustractions :\n-int32 : " << soustraction(a, b) << "\n-int64 : " << soustraction(c, d) << "\n-float : " << soustraction(e, f) << "\n-double : " << soustraction(g, h);

/// \brief Affichage des multiplications
cout << "\n\nResultat des multiplications :\n-int32 : " << multiplication(a, b) << "\n-int64 : " << multiplication(c, d) << "\n-float : " << multiplication(e, f) << "\n-double : " << multiplication(g, h);

/// \brief Affichage des divisions
cout << "\n\nResultat des divisions :\n-int32 : " << division(a, b) << "\n-int64 : " << division(c, d) << "\n-float : " << division(e, f) << "\n-double : " << division(g, h);

/// \brief Affichage des modulos
cout << "\n\nResultat des modulo :\n-int32 : " << modulo(a, b) << "\n-int64 : " << modulo(c, d);

return 0;
}
