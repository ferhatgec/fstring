/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>
#include "../../include/FString.hpp"

int main(void) {
    FString a("Hey!");
    FString b(" Huh..");

    std::cout << "A: " << a << "\n";
        
    a.append(b, " Today looks like milky filter coffee...");

    std::cout << "New A: " << a << "\n";

    return 0;
}