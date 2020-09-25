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
    FString b('1');
    
    std::cout << "A: " << a << "\n" <<
        "B: " << b << "\n";

    int number = b.conv_int();

    std::cout << "B (Int) : " << number << "\n";
        
    return 0;
}