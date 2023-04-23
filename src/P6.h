//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
#include <type_traits>

template <typename T>
int sumar_idx(){
    return 0;
}

template<typename T, typename T2,typename... Types>
int sumar_idx(){
    
    if (std::is_same<T, T2>::value) return 0;
    else if (!std::is_same<T, T2>::value) {
        return 1 + sumar_idx<T , Types...>();
    }

}

template<typename... Types>
int index_of(auto arg){
    int idx = 0;

    int sum = sumar_idx< decltype(arg) ,Types... >();

    if(sum >= sizeof...(Types)) idx=-1;
    else idx =  sum;

    return idx;
}
#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P6_H
