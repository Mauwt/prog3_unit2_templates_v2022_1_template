//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P2_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P2_H

template<typename T>
void print(T beg, T end, std::ostream& out, std::string delim){
    for (auto it = beg; it != end; it++){
        if (std::next(it) == end) out << *it;
        else{
            out << *it << delim;
        }
    }
    out << std::endl;
}

#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P2_H
