/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include "../include/FString.hpp"

FString::FString() {
        length = 0;
        data   = new char[0];
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
                for(unsigned f = 0; f < n; f++)
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
        if(_ch >= length) 
                throw 1;
        
        return data[_ch];
}

char& FString::operator[] (unsigned _ch) {
        if(_ch >= length)
                throw 1;

        return data[_ch];
}

FString& FString::append(const FString& _str) {
        unsigned len = length + _str.len();
        char* str    = new char[len];

        for (unsigned f = 0; f < length; f++)
                str[f] = data[f];

        for (unsigned i = 0; i < _str.len(); i++)
                str[length+i] = _str[i];

        delete data;
        
        length = len;
        data   = str;
        return *this;    
}

FString& FString::append(const FString& _str_1, const FString& _str_2) {
        this->append(_str_1);
        this->append(_str_2);

        length = this->len();
        data   = this->data;

        return *this;
}

FString& FString::equal(const FString& _str) {
        unsigned len = _str.len();
        char* str    = new char[len];

        if(len == 1)
                str[0] = _str[0];
        else {                
                for (unsigned i = 0; i < _str.len(); i++)
                        str[i] = _str[i];
        }

        delete data;
        
        length = len;
        data   = str;
        return *this;    
}

bool operator== (const FString& _str_1, const FString& _str_2) {
        unsigned _len_1 = _str_1.len();
        unsigned _len_2 = _str_2.len();
        unsigned n = 0;

        if(_len_1 == _len_2)
                while(n < _len_1 && _str_1[n] == _str_2[n]) n++;
        else
                return false;
        

        return (n == _len_1 && n == _len_2);
}

bool operator== (const FString& _str_1, char _ch) {
        if(_str_1.len() > 1)
                return false;

        if(_str_1[0] == _ch)
                return true;
        else
                return false;
        

        return false;
}

bool operator!= (const FString& _str_1, const FString& _str_2) {
        return !((_str_1 ==  _str_2) == true);
}

bool operator!= (const FString& _str, char _ch) {
        if(_str.len() > 1)
                return true;
        
        return !((_str == _ch) == true);
}

int FString::conv_int() {
        if(length == 1) {
                switch (data[0]) { /* Get first value of fstring */
                        case '0': return 0;
                        case '1': return 1;
                        case '2': return 2;
                        case '3': return 3;
                        case '4': return 4;
                        case '5': return 5;
                        case '6': return 6;
                        case '7': return 7;
                        case '8': return 8;
                        case '9': return 9;

                        default:
                                break;
                }
        }

        return 0;
}

int FString::compare(FString& _str) {
        if(length > 1) {
                const unsigned char *unsigned_str_1 = (const unsigned char *) data;
	        const unsigned char *unsigned_str_2 = (const unsigned char *) &_str[0]; /* not const */

	        while (*unsigned_str_1 == *unsigned_str_2 && 
		        *unsigned_str_1 != '\0') {
    		
		        unsigned_str_1++;
    	        	unsigned_str_2++;
          	}

  	        return (*unsigned_str_1 > *unsigned_str_2) - (*unsigned_str_1 < *unsigned_str_2);
        } else if(length == 1) {
                if(_str[0] == data[0 && _str.len() == 1])
                        return 0;
                else
                        return -1;
        }

        return -1;
}