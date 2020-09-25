/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>

#include "../../include/FString.hpp"
#include "../../include/Extend.hpp"

int main(void) {
    FString a("Hello, world!");

    /* if(a.empty() == false) */
    if(!a.empty())
        std::cout << "A is full.\n";

    return 0;
}