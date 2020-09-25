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
    FString a(nullptr);

    /* if(a.empty()) */
    if(a.empty() == true)
        std::cout << "A is empty.\n";

    return 0;
}