//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P10_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P10_H
#include <algorithm>
template <typename T>
class searcher{
private:
    T arr;

public:
    searcher()=default;
    searcher(T& _arr) : arr(_arr){
        std::sort(_arr.begin(),_arr.end());
        std::sort(arr.begin(), arr.end());

    };

    searcher& operator=( T& values) {
        std::sort(values.begin(),values.end());
        arr = values;
        std::sort(arr.begin(), arr.end());
        return *this;
    }
    int operator <<(int value){
        auto it = std::lower_bound(arr.begin(), arr.end(), value);
        if (it != arr.end() && *it == value) {
            return std::distance(arr.begin(), it);
        } else {
            return -1;
        }
    }


};

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P10_H
