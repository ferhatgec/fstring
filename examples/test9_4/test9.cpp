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

        a.equal('@');

        std::cout << "A (New): ";
        FExtend::Print(a);
        
        FExtend::Print("\n");
        
        return 0;
}