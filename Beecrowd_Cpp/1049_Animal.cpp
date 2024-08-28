#include <bits/stdc++.h>

using namespace std;

int main(){

    map<string, string> ave = {
        {"carnivoro", "aguia"},
        {"onivoro", "pomba"}
    };
    map<string, string> mamifero = {
        {"herbivoro", "vaca"},
        {"onivoro", "homem"}
    };
    map<string, string> inseto = {
        {"hematofago", "pulga"},
        {"herbivoro", "lagarta"}
    };
    map<string, string> anelideo = {
        {"hematofago", "sanguessuga"},
        {"onivoro", "minhoca"}
    };

    map<string, map<string, string>> vertebrado = {
        {"ave", ave},
        {"mamifero", mamifero}
    };
    map<string, map<string, string>> invertebrado = {
        {"inseto", inseto},
        {"anelideo", anelideo}
    };

    map<string, map<string, map<string, string>>> animal = {
        {"vertebrado", vertebrado},
        {"invertebrado", invertebrado}
    };

    string c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    string out = animal[c1][c2][c3];

    cout << out << endl;


    return 0;
}