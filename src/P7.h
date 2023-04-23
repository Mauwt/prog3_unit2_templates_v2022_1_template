//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P7_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P7_H
#include <vector>
#include <map>
#include <list>

template <typename T>
void print(const T& container){
    std::cout << "{";

    for (auto it = begin(container); it != std::prev(end(container)); it++){
        std::cout << *it <<", ";
    }

    std::cout << *std::prev(end(container)) <<"}";

}


template<typename T , size_t N>
std::ostream& operator << (std::ostream& out, std::array<T,N>& arr){
/*
    std::cout <<  "{";
    for(int i = 0; i<arr.size()-1; i++){
        out << arr[i] <<", ";
    }
    out << arr[arr.size()-1]<<"}";
    */
    print(arr);
    return out;
}

template< typename T>
std::ostream& operator << (std::ostream& out, std::vector<T> v){
    /*
    out << "{";

    auto start = begin(v);
    while(start != std::prev(end(v))){

      out << *start++ << ", ";

    }
    out <<  *start <<"}";*/
    print(v);
    return out;
}

template< typename T>
std::ostream& operator << (std::ostream& out, std::list<T> lst){
    print(lst);
    return out;
}

template<typename K, typename V>
std::ostream& operator << (std::ostream& out, std::map<K,V> mp){
    out << "{";
    auto start = mp.begin(), last = mp.end();
    while(start != last){
        out <<"{"<< start->first << ": " << start->second << "}";
        start++;

        if(start != last){
            out <<  ", ";
        }
    }
    out << "}";
    return out;
}
#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P7_H
