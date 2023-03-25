#ifndef ZLAB03_H
#define ZLAB03_H

#include <string>
using namespace std;

class Prostokat
{
private:
string nazwa;
double bok1, bok2;
bool poprawny;
double obwod, pole;

bool czyPoprawny(double bok1, double bok2);
void obliczObwod();
void obliczPole();

public:
Prostokat(string n = "?", double a=1, double b=2); //konstruktor
~Prostokat();
bool czyPoprawny();
const string& jakaNazwa();
double podajPole();
double podajObwod();
bool zmienBoki(double a, double b);

 std::string doTekstu();
};


#endif // ZLAB03_H


//z maina
////    ZLab02 labsy;
////    labsy.menu();
////    labsy.zadanie_2_3();
////    labsy.zadanie_2_4();
////    Zlab03 labssy;
//    cout << "Laboratorium 03" << endl;

//    Prostokat p1;
//    Prostokat p2("koc",1.4,2.2);
//    Prostokat p3("pulapka",-2,-3);

//    cout.precision(2);
//    cout << p1.doTekstu() << endl;
//    cout << p2.doTekstu() << endl;
//    cout << p3.doTekstu() << endl;

//    p3.zmienBoki(2,3);
//    cout << endl << p3.doTekstu() << endl;

//    cout << endl << "Uzycie metod obiektu:" << endl;
//    cout << "Nazwa: " << p2.jakaNazwa() << endl
//         << "Poprawny: " << p2.czyPoprawny() << endl
//         << "Obwod=:" << p2.podajObwod() << endl
//         << "Pole=" << p2.podajPole() << endl;

//    return 0;
