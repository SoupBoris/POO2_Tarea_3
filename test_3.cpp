//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "my_linked_list.h"

TEST_CASE("Pop back") {
    utec::linked_list<int> ll;
    for (size_t i = 0; i < 10; ++i)
        ll.push_back(i);

    while (ll.size() != 0)
        ll.pop_back();

    REQUIRE(ll.size() == 0);
}