//#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
#include "my_linked_list.h"
using namespace std;

int main(){
    utec::linked_list<int> ll;
    for (size_t i = 0; i < 10; ++i)
        ll.push_back(i);

    while (ll.size() != 0){
        ll.pop_back();
    }
        

    cout << ll.size() << endl;
}


