//#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
#include "my_linked_list.h"
using namespace std;

int main(){
    utec::linked_list<char> ll('A', 'B', 'C', 'D');
    auto current = ll.first();
    cout << current->value() << endl;

    current = current->next();
    cout << current->value() << endl;

    current = current->next();
    cout << current->value() << endl;
    
    current = current->next();
    cout << current->value() << endl;
    
}


