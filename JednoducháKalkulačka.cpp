#include <iostream>

using namespace std;

int main()
{
    cout <<"Vitejte v kalkulacce"<< endl;
    cout <<"Zadejte prvni cislo";
    float a;
    cin >> a;
    cout <<"Zadejte druhe cislo";
    float b;
    cin >>b;
    float soucet = a + b;
    float rozdil = a - b;
    float soucin = a * b;
    float podil = a / b;
    cout << "Soucet: " << soucet << endl;
    cout << "Rozdil: " << rozdil << endl;
    cout << "Soucin: " << soucin << endl;
    cout << "Podil: " << podil << endl;
    cout << "Dekuji za pouziti kalkulacky, aplikaci ukoncite libovolnou klavesou." << endl;
    cin.get(); cin.get();
	return 0;

}