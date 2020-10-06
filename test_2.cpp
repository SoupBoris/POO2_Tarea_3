//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "my_linked_list.h"

TEST_CASE("Get values") {
    utec::linked_list<int> ll;
    for (size_t i = 0; i < 10; ++i)
        ll.push_back(i);

    auto current = ll.first();
    for (size_t i = 0; i < ll.size(); ++i) {
        REQUIRE(current->value() == i);
        current = current->next_node();
    }
}