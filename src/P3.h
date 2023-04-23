//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P3_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P3_H

template <typename T,typename T2>
auto sumarizar(T start, T end, T2 v){

    auto sum = *start++ + v;
    while(start != end){
        sum += *start++;
    }
    return sum;
}
#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P3_H
