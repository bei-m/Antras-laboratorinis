//Contains the unit tests that use the my_func() function.
#include "catch.hpp"
#include "myfunc.h"

TEST_CASE("rusiuoti() funkcija") {
    studentas a,b;
    a.vardas("Antanas");
    a.pavarde("Kazlauskas");
    b.vardas("Jonas");
    b.pavarde("Sakalauskas");

    REQUIRE(rusiuoti(a, b) == true); //
}

TEST_CASE ("galutinis() funkcija")
{
    vector<int>pazymiai={7,8,9,10};
    studentas a;
    a.nd(pazymiai);
    a.egz(10);
    float expected = (7+8+9+10)/4.0*0.4+10*0.6;
    a.galutinis();
    REQUIRE (abs(a.getvid()-expected)<0.05);
    expected = (8+9)/2.0*0.4+10*0.6;
    REQUIRE(abs(a.getmed()-expected)<0.05);
    
}

TEST_CASE("move operator")
{
    vector<int>pazymiai={7,8,9,10};
    studentas s1,s2;
    s1.vardas("Jonas");
    s1.pavarde("Kazlauskas");
    s1.nd(pazymiai);
    s1.egz(10);
    s1.galutinis();

    s2=move(s1);
    float expected = (7+8+9+10)/4.0*0.4+10*0.6;
    REQUIRE(s2.getvardas()=="Jonas");
    REQUIRE(s2.getpavarde()=="Kazlauskas");
    REQUIRE(s2.getegz()==10);
    REQUIRE(abs(s2.getvid()-expected)<0.05);
    expected = (8+9)/2.0*0.4+10*0.6;
    REQUIRE(abs(s2.getmed()-expected)<0.05);

    REQUIRE(s1.getvardas()=="");
    REQUIRE(s1.getpavarde()=="");
    REQUIRE(s1.getegz()==0);
    REQUIRE(s1.getmed()==0);
    REQUIRE(s1.getvid()==0);

}

TEST_CASE("failas() funkcija")
{
    studentas s1;
    string x="Kazlauskas    Jonas   7   8   9   10  10";
    stringstream eilute(x);
    s1.failas(eilute, 7);

    float expected = (7+8+9+10)/4.0*0.4+10*0.6;
    REQUIRE(s1.getvardas()=="Jonas");
    REQUIRE(s1.getpavarde()=="Kazlauskas");
    REQUIRE(s1.getegz()==10);
    REQUIRE(abs(s1.getvid()-expected)<0.05);
    expected = (8+9)/2.0*0.4+10*0.6;
    REQUIRE(abs(s1.getmed()-expected)<0.05);

}


//$ g++ -std=c++11 -Wall -Wextra -o tests testmyfunc.cpp catch_main.cpp myfunc.cpp -I/path/to/catch2
