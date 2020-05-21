#include "Gestiune.h"
#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

template<> void Gestiune<int>::print_plata() {
    for(auto x : Plati){
        cout<<endl<<"AMOUNT: "<<x.second<<endl<<"DATE: "<<x.first<<endl<<endl;
    }
}

