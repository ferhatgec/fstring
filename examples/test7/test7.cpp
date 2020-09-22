/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>
#include "../../include/FString.hpp"

int main(void) {
        FString a('a');
        FString _a('a');
        std::cout << "A: " << a << "\n" <<
        "B: " << _a << "\n";

        if(a.compare(_a) == 0)
                std::cout << "Woaw!\n";
        else
                std::cout << "hh..\n";

        return 0;
}