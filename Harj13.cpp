/***********************************************
*Harjoitus 13
*Juho Auvinen
*Kuvaus:
*Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
*lopuksi nayt�lle.
*
*
*a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
*tehd�ksesi merkkijonojen yhdist�misen
*b) Kayta string-kirjastoa (C++:n merkkijonot)
*tehd�ksesi merkkijonojen yhdist�misen  TEE, JOS ON AIKAA

*Esimerkki
*Anna etunimi: Aku
*Anna sukunimi: Ankka
*Nimesi oli: Aku Ankka
*
*Versio: ?
*PVM: ?
************************************************/

#include <iostream>
using namespace std;
#include <cstring>

void main()
{
	char etunimi[30], sukunimi[30], kokonimi[30];

	cout << "Anna etunimesi" << endl;
	cin.get(etunimi, 30);
	cin.get();

	cout << "Anna sukunimesi" << endl;
	cin.get(sukunimi, 30);
	cin.get();

	cout << endl;

	strcpy_s(kokonimi, etunimi);
	strcat_s(kokonimi, " ");
	strcat_s(kokonimi, sukunimi);
	
	cout << kokonimi << endl;
}