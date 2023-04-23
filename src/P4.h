//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P4_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P4_H
class point {
    int x;
    int y;
public:
    point(int x, int y): x{x}, y{y} {}
    point() = default;

    int get_x () { return x; }
    int get_y() { return y; }

    friend std::ostream& operator<< (std::ostream& os, const point& p) {
        os << "{" << p.x <<", " << p.y << "}" << std::endl;
        return os;
    }

};

template <typename T>
class smart_ptr{
private:
    T* ptr = nullptr;
    size_t* count = 0;
public:
    smart_ptr(): ptr(nullptr), count(nullptr){}
    //constructores por valor
    smart_ptr(T val) {
        ptr = new T;
        *ptr = val;
    };
    smart_ptr(int x, int y){

        ptr = new T(x,y);
    }

    friend T& operator*(smart_ptr<T> smpt){
        return *smpt.ptr;
    }
    T* operator->(){
        return ptr;
    }

};


template <typename T, typename T2>
smart_ptr<T> make_smart_ptr(T2 value){
    smart_ptr<T> ptr(value);
    return ptr;
}

template < typename T, typename ... T2>
smart_ptr<T> make_smart_ptr(T2... args){
    smart_ptr<T> ptr(args...);
    return ptr;
}

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P4_H
