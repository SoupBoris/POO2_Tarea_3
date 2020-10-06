//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "my_linked_list.h"

TEST_CASE("Insert") {
    utec::linked_list<float> ll;
    ll.insert(0, 100.5f);
    ll.insert(1, 300.6f);
    ll.insert(1, 200.2f);

    auto current = ll.first();
    REQUIRE(current->value() == 100.5f);
    current = current->next();
    REQUIRE(current->value() == 200.2f);
    current = current->next();
    REQUIRE(current->value() == 300.6f);
    REQUIRE(ll.size() == 3);
}