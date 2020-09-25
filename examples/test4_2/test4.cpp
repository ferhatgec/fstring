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
    char b = 'a';
    
    std::cout << "A: " << a << "\n" <<
        "B: " << b << "\n";

    if((a == b) == true)
        std::cout << "Test.\n";
    
    return 0;
}