/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include "../include/FString.hpp"

FString::FString() {
        length = 0;
        data = new char[0];
}

FString::~FString() {
        delete[] data;
}

FString::FString(char ch) {
        /* e.g 'a', 'b', 'c' */
        length = 1;

        /* Create new char with ch */
        data = new char(ch);
}

FString::FString(const char* ch) {
        /* Parse it as char by char and append */
        if(ch) {
                unsigned n = 0; 
                for(; ch[n] != '\0';) n++;
                length = n;
                data = new char[n];
                for(unsigned f = 0; f < n; n++)
                        data[f] = ch[f];
        } else {
                /* Blank fstring. */
                length = 0;
                data = new char[0];
        }
}

unsigned FString::len() const {
        return length;
}

/* e.g cout (ostream) */
std::ostream& operator<< (std::ostream& ostr, const FString& _str) {
        if (_str.len() > 0) {
                for (unsigned j = 0; j < _str.len(); j++)
                        ostr << _str[j];
        } else 
                ostr << ""; /* blank fstring */

        return ostr;
}

char FString::operator[] (unsigned _ch) const {
        if(_ch > length) 
                throw 1;
        
        return data[_ch];
}

char& FString::operator[] (unsigned _ch) {
        if(_ch > length)
                throw 1;

        return data[_ch];
}