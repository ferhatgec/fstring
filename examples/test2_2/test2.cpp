/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>
#include "../../include/FString.hpp"

int main(void) {
        FString a('o');
        FString b('k');
        FString c('!');

        std::cout << "A: " << a << "\n" <<
        "B: " << b << "\n" <<
        "C: " << c << "\n";

        /* a = ab */
        a.append(b, c);
        
        std::cout << "New A: " << a << "\n";

        return 0;
}