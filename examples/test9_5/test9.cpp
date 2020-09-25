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
    FString a("Hello, world!\n");
    FString b("This is FString\n");

    std::cout << "A: ";
    FExtend::Print(a);

    std::cout << "A (Length): " << a.len();

    a.equal('@');

    std::cout << "\n-------------\n";

    std::cout << "A (New): ";
    FExtend::Print(a);

    std::cout << "\nA (New length): " << a.len();

    FExtend::Print("\n");
        
    return 0;
}