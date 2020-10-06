//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "my_linked_list.h"

TEST_CASE("Traverse") {
    utec::linked_list<char> ll('A', 'B', 'C', 'D');

    auto current = ll.first();
    REQUIRE(current->value() == 'A');
    current = current->next_node();
    REQUIRE(current->value() == 'B');
    current = current->next_node();
    REQUIRE(current->value() == 'C');
    current = current->next_node();
    REQUIRE(current->value() == 'D');

    REQUIRE(ll.size() == 4);
}