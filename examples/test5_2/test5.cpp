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
        char b = 'b';
        
        std::cout << "A: " << a << "\n" <<
        "B: " << b << "\n";

        /* bool test = ((a == b) == true); */
        /* if(test == true) .... */
        if((a != b) == true)
                std::cout << "Woaw.!?\n"; 
        else
                std::cout << "wuh.?\n";


        return 0;
}