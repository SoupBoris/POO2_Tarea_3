//#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "my_linked_list.h"

int main(){
    utec::linked_list<int> ll;
    for (size_t i = 0; i < 10; ++i)
        ll.push_back(i);
}


