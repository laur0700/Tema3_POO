#ifndef TEMA3_POO_CARD_H
#define TEMA3_POO_CARD_H

#include "Gestiune.h"
#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

template <typename T>
class Card: public Gestiune<T> {
private:
    unordered_map<string, string> detalii_card;
    int clienti;
    T nr_plati = 0;
    unordered_map<string, T> Plati;
public:
    Card()= default;
    ~Card()= default;

    void add_card(string nume, string nr_card){
        detalii_card[nr_card] = nume;
        clienti = clienti + 1;
    }

    Card operator+=(int valoare){
        string data;
        cin>>data;
        if(Plati.find(data) == Plati.end()){
            Plati[data] = valoare;
        }
        else{
            Plati[data] = Plati[data] + valoare;
        }
        return *this;
    }

    void print_plata(){
        for(auto x : Plati){
            cout<<endl<<"AMOUNT: "<<x.second<<endl<<"DATE: "<<x.first<<endl<<endl;
        }
    }

    void print_carduri(){
        for(auto x : detalii_card){
            cout<<endl<<"CARD: "<<x.first<<"   "<<x.second<<endl<<endl;
        }
    }

};


#endif //TEMA3_POO_CARD_H
