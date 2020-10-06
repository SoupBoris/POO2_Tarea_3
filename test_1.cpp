//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "my_linked_list.h"
using namespace std;

TEST_CASE("Push back") {
    utec::linked_list<int> ll;
    for (size_t i = 0; i < 10; ++i)
        ll.push_back(i);
    REQUIRE(ll.size() == 10);
}
