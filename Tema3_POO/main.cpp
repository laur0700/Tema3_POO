#include <iostream>
#include <string>
#include "Gestiune.h"
#include "Numerar.h"
#include "Card.h"

using namespace std;

int main() {

    Numerar<int> Num;
    Numerar<int> Cec;
    Card<int> Card;

    int valoare;
    string nume, nr_card, data;
    string command;

    while (command != "exit") {
        cout << "------- MAIN MENU -------" << endl;
        cout << ": ";
        cin >> command;

        if (command != "exit") {
            if (command == "!help") {
                cout << "# cash - pentru meniul de cash." << endl
                     << "# card - pentru meniul de card." << endl
                     << "# cheque - pentru meniul de cheque." << endl
                     << "# add_payment - pentru adaugarea unei plati." << endl
                     << "# show_payments - pentru afisare platilor." << endl
                     << "# show_card - pentru afisare cardurilor." << endl
                     << "# return - pentru intoarcere la meniul principal." << endl
                     << "# exit - pentru oprirea programului." << endl;
                cout << ": ";
                cin >> command;

                while(command != "return"){
                    if(command == "cash") {
                        cout << "------- CASH MENU -------" << endl;
                        cout<<": ";
                        cin>>command;
                        while(command != "return"){
                            if(command == "add_payment") {
                                while (command == "add_payment" && command != "return") {
                                    cout << "AMOUNT: ";
                                    cin >> valoare;
                                    cout << "DATE: ";
                                    Num += valoare;
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                            if(command == "show_payments"){
                                while(command == "show_payments" && command != "return"){
                                    Num.print_plata();
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                    if(command == "cheque") {
                        cout << "------- CHEQUE MENU -------" << endl;
                        cout<<": ";
                        cin>>command;
                        while(command != "return"){
                            if(command == "add_payment") {
                                while (command == "add_payment" && command != "return") {
                                    cout << "AMOUNT: ";
                                    cin >> valoare;
                                    cout << "DATE: ";
                                    Cec += valoare;
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                            if(command == "show_payments"){
                                while(command == "show_payments" && command != "return"){
                                    Cec.print_plata();
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                    if(command == "card") {
                        cout << "------- CARD MENU -------" << endl;
                        cout<<": ";
                        cin>>command;
                        while(command != "return"){
                            if(command == "add_payment") {
                                while (command == "add_payment" && command != "return") {
                                    cout<<"CARD NR: ";
                                    cin>>nr_card;
                                    cout<<"NAME: ";
                                    cin>>nume;
                                    Card.add_card(nume, nr_card);

                                    cout << "AMOUNT: ";
                                    cin >> valoare;
                                    cout << "DATE: ";
                                    Card += valoare;
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                            if(command == "show_payments"){
                                while(command == "show_payments" && command != "return"){
                                    Card.print_plata();
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                            if(command == "show_cards"){
                                while(command == "show_cards" && command != "return"){
                                    Card.print_carduri();
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else{
                while(command != "return"){
                    if(command == "cash") {
                        cout << "------- CASH MENU -------" << endl;
                        cout<<": ";
                        cin>>command;
                        while(command != "return"){
                            if(command == "add_payment") {
                                while (command == "add_payment" && command != "return") {
                                    cout << "AMOUNT: ";
                                    cin >> valoare;
                                    cout << "DATE: ";
                                    Num += valoare;
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                            if(command == "show_payments"){
                                while(command == "show_payments" && command != "return"){
                                    Num.print_plata();
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                    if(command == "cheque") {
                        cout << "------- CHEQUE MENU -------" << endl;
                        cout<<": ";
                        cin>>command;
                        while(command != "return"){
                            if(command == "add_payment") {
                                while (command == "add_payment" && command != "return") {
                                    cout << "AMOUNT: ";
                                    cin >> valoare;
                                    cout << "DATE: ";
                                    Cec += valoare;
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                            if(command == "show_payments"){
                                while(command == "show_payments" && command != "return"){
                                    Cec.print_plata();
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                    if(command == "card") {
                        cout << "------- CARD MENU -------" << endl;
                        cout<<": ";
                        cin>>command;
                        while(command != "return"){
                            if(command == "add_payment") {
                                while (command == "add_payment" && command != "return") {
                                    cout<<"CARD NR: ";
                                    cin>>nr_card;
                                    cout<<"NAME: ";
                                    cin>>nume;
                                    Card.add_card(nume, nr_card);

                                    cout << "AMOUNT: ";
                                    cin >> valoare;
                                    cout << "DATE: ";
                                    Card += valoare;
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                            if(command == "show_payments"){
                                while(command == "show_payments" && command != "return"){
                                    Card.print_plata();
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                            if(command == "show_cards"){
                                while(command == "show_cards" && command != "return"){
                                    Card.print_carduri();
                                    cout << ": ";
                                    cin >> command;
                                    if (command == "exit") {
                                        return 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else {
            return 0;
        }
    }

    return 0;
}
