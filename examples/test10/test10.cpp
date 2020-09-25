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
    FString b("2005");

    std::cout << "A: ";
    FExtend::Print(a);

    int _b = b.conv_int();

    std::cout << "B (Integer) : " << _b << "\n";

    return 0;
}