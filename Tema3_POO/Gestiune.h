#ifndef TEMA3_POO_GESTIUNE_H
#define TEMA3_POO_GESTIUNE_H

#include <string>
#include <unordered_map>
#include <iostream>
using namespace std;

template <typename T>
class Gestiune {
private:
    T nr_plati = 0;
    unordered_map<string, T> Plati;
public:
    Gestiune()= default;
    ~Gestiune()= default;

    Gestiune operator+=(int valoare){
        string data;
        cin>>data;
        if(Plati.find(data) == Plati.end()){
            Plati[data] = valoare;
        }
        else{
            Plati[data] = Plati[data] + valoare;
        }
        nr_plati = nr_plati + 1;

        return *this;
    }

    virtual void print_plata();
};

#endif //TEMA3_POO_GESTIUNE_H
