#ifndef MYFUNC_H
#define MYFUNC_H

#include "mylib.h"

class studentas
{
    private:
        string Vardas;
        string Pavarde;
        vector<int> Nd;
        int Egz;
        float gmediana;
        float gvidurkis;
    
    public:
        studentas():  Egz(0) {}; 
        void vardas(const string&v) {Vardas=v;}
        void pavarde (const string &p) {Pavarde=p;}
        void egz (const int &e) {Egz=e;}
        void nd (const vector<int> &n) {Nd=n;}
        void failas (std::istream& is, int index);
        void ndclear () {Nd.clear(); Nd.shrink_to_fit();}
        void galutinis ();
        void spausdinti();
        inline string getvardas() const {return Vardas;}
        inline string getpavarde() const {return Pavarde;}
        inline double getmed() const {return gmediana;}
        inline double getvid() const {return gvidurkis;}
        ~studentas() {Nd.clear(), Nd.shrink_to_fit();}

};

void pildyti(studentas &temp, string choice_1);
bool check(string &b, short int ch);
bool check(string q, string p, string &b);
bool rusiuoti(const studentas &a, const studentas &b);
bool armaz(const studentas &a);
void failo_gen(int stud, int paz, string &pav);
void vec_1(string f, bool ch);
void list_1(string f);
void deque_1(string f);
void vec_2(string f);
void list_2(string f);
void deque_2(string f);
template <typename T> void isvedimas( T&grupe_1, T&grupe_2, bool st); 

const string m_vardai[100]=
{
    "Adrija", "Agne", "Agota", "Aiste", "Akvile", "Asta", "Atene", "Aurelija", "Ausrine", "Austeja", "Barbora", "Beatrice",
    "Brigita", "Daiva", "Dalia", "Deimante", "Dovile", "Edita", "Egle", "Elena", "Emilija", "Erika", "Evelina", "Fausta", "Gabija",
    "Gabriele", "Gerda", "Gertruda", "Giedre", "Gintare", "Goda", "Guoda", "Guste", "Ieva", "Ina", "Indre", "Inga", "Izabele",
    "Janina", "Jolanta", "Jore", "Jovita", "Julija", "Juste", "Justina", "Jurate", "Kamile", "Karolina", "Kornelija", "Kotryna",
    "Kristina", "Laima", "Larisa", "Laura", "Liepa", "Lina", "Livija", "Margarita", "Marija", "Meile", "Migle", "Milda", "Monika",
    "Morta", "Martyna", "Natalija", "Neringa", "Nijole", "Odeta", "Olivija", "Ona", "Patricija", "Paulina", "Regina", "Roberta",
    "Rugile", "Rusne", "Ruta", "Salomeja", "Sandra", "Saule", "Sigita", "Silvija", "Simona", "Sofija", "Teodora", "Ugne", "Ursule",
    "Urte", "Vaiva", "Vakare", "Valentina", "Valerija", "Veronika", "Viktorija", "Vilija", "Vilte", "Violeta", "Vitalija", "Zivile"
};

const string v_vardai[100]=
{
    "Adomas", "Aidas", "Aistis", "Aivaras", "Aleksas", "Algirdas", "Andrius", "Antanas", "Aras", "Arijus", "Arnas", "Arturas",
    "Arunas", "Arvydas", "Astijus", "Audrius", "Augustas", "Augustinas", "Aurelijus", "Aurimas", "Bartas", "Benas", "Danielius",
    "Darius", "Donatas", "Domas", "Dominykas", "Dovydas", "Edgaras", "Edvinas", "Egidijus", "Eimantas", "Emilis", "Evldas",
    "Edvardas", "Faustas", "Gabrielius", "Gediminas", "Giedrius", "Gintaras", "Gintas", "Gustas", "Haroldas", "Henrikas", "Ignas",
    "Jokubas", "Jonas", "Julius", "Justas", "Justinas", "Kajus", "Karolis", "Kipras", "Kostas", "Kristupas", "Kasparas", "Kestutis",
    "Laurynas", "Leonas", "Linas", "Lukas", "Mantas", "Mantvydas", "Marius", "Martynas", "Matas", "Mykolas", "Margiris", "Mindaugas",
    "Nedas", "Nojus", "Norbertas", "Paulius", "Pijus", "Povilas", "Rapolas", "Rimas", "Rytis", "Robertas", "Rokas", "Saulius",
    "Simas", "Simonas", "Tadas", "Titas", "Tomas", "Ugnius", "Vaidas", "Vakaris", "Valentinas", "Vasaris", "Vejas", "Vidas",
    "Viktoras", "Vilius", "Vitoldas", "Vytautas", "Vytas", "Zilvinas", "Zygimantas" 
};

const string pavardes[44]=
{
   "Kazlausk", "Petrausk", "Jankausk", "Zukausk", "Balciun", "Paulausk", "Vasiliausk", "Baranausk", "Urbon", 
    "Navick", "Ramanausk", "Savick", "Zilinsk", "Kavaliausk", "Sakalausk", "Ivanausk", "Kaminsk", "Mikalausk", 
    "Bagdon", "Cernausk", "Rutkausk", "Malinausk", "Sadausk", "Kucinsk", "Vitkausk", "Dambrausk", 
    "Naujok", "Sabaliausk", "Stankevic", "Petkevic", "Vaitkevic", "Mickevic", "Urbanavic", "Jurevic", 
    "Marcinkevic", "Poc", "Paskevic","Sinkevic", "Radzevic","Mackevic", "Butk", "Rimk", "Simk", "Vaitk"
};

#endif