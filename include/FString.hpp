/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#ifndef FSTRING_HPP
#define FSTRING_HPP

#include <iostream>   

/*
        #define UNSIGNED unsigned
        #define CONST const
        #define CHAR char
        #define CHARP char*
*/

class FString { 
        char* data; 
        unsigned length;
public: 
        FString(); 
        ~FString();

        FString(char ch);
  
        FString(const char* ch);

        FString(const FString& _str);
  
        friend std::ostream& operator<< (std::ostream& ostr, 
                const FString& _str);
        
        char operator[] (unsigned _ch) const;
        char& operator[] (unsigned _ch);

        FString& append(const FString& _str); 
        FString& equal(const FString& _str);

        unsigned len() const; 
}; 


#endif /* FSTRING_HPP */