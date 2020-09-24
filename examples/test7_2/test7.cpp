/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>
#include "../../include/FString.hpp"

int main(void) {
        FString a("Hello, world!");
        std::cout << "A: " << a << "\n";

        if(a.compare("Hello, world!") == 0)
                std::cout << "Woaw!\n";
        else
                std::cout << "hh..\n";

        return 0;
}