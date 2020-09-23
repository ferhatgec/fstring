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
        
        std::cout << "A: ";
        FExtend::Print(a);

        a.equal("const char...\n");

        std::cout << "A (New): ";
        FExtend::Print(a);
        
        return 0;
}