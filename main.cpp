//#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
#include "my_linked_list.h"
using namespace std;

int main(){
    utec::linked_list<float> ll;
    ll.insert(0, 100.5f);
    ll.insert(1, 300.6f);
    ll.insert(1, 200.2f);

    auto current = ll.first();

    cout << current->value() << endl;
    current = current->next();
    cout << current->value() << endl;
    current = current->next();
    cout << current->value() << endl;
}


