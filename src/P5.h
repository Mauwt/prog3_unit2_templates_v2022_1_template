//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P5_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P5_H

template <typename T1>
T1 suma_producto (T1 value){
    return value;
}

template <typename T1, typename T2>
auto suma_producto (T1 value_1 , T2 value_2){
    return value_1*value_2;
}


template <typename T1, typename T2, typename... args>
T1 suma_producto(T1 arg_1 , T2 arg_2, args... values){
    return (arg_1 * arg_2) + suma_producto(values...);
}
#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P5_H
