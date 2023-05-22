//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P1_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P1_H

#include <sstream>


/*
template <typename T=std::string>
auto input(){
    std::string value;
    std::getline(std::cin,value);
    return value;
}*/


template <typename T=std::string>
auto input(std::string mensaje = ""){
    std::cout << mensaje;
    T value;
    std::cin >> value;
    return value;
}


#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P1_H
