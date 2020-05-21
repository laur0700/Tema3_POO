#ifndef TEMA3_POO_NUMERAR_H
#define TEMA3_POO_NUMERAR_H

#include "Gestiune.h"

template <typename T>
class Numerar: public Gestiune<T> {
private:
    T nr_plati = 0;
    unordered_map<string, T> Plati;
public:
    Numerar()= default;
    ~Numerar()= default;

    Numerar operator+=(int valoare){
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

    void print_plata(){
        for(auto x : Plati){
            cout<<endl<<"AMOUNT: "<<x.second<<endl<<"DATE: "<<x.first<<endl<<endl;
        }
    }
};


#endif //TEMA3_POO_NUMERAR_H
