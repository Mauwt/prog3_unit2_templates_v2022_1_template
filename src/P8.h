//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P8_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P8_H

#include <type_traits>

template<typename T, typename... args>
bool are_same(){
    return std::conjunction_v<std::is_same<T, args>...>;
};
#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P8_H
