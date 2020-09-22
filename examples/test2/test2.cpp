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
        FString b('b');
        std::cout << "A: " << a << "\n" <<
        "B: " << b << "\n";

        /* a = ab */
        a.append(b);
        
        std::cout << "New A: " << a << "\n";

        return 0;
}