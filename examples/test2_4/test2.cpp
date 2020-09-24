/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>
#include "../../include/FString.hpp"

int main(void) {
        FString a('e');

        std::cout << "A: " << a << "\n";

        /* a = atheist */
        a.append('t');
        a.append('c');
        a.append('.');
        a.append('.');
        a.append('.');
        
        std::cout << "New A: " << a << "\n";

        return 0;
}