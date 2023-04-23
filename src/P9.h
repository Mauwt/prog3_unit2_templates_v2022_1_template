//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT2_TEMPLATES_V2022_1_P9_H
#define PROG3_UNIT2_TEMPLATES_V2022_1_P9_H

template <typename T, size_t N,typename ...args>
void init_array(T (&arr)[N], args... up_args ){
    if constexpr (sizeof...(up_args) == 0){
        for(int i = 0; i < N; i++) arr[i] = i;
    }

    else if constexpr (sizeof...(up_args) ==1){
        arr[0] = {up_args...};
        for(int i = 1; i<N;i++ ){
            arr[i] = arr[i-1] +1;
        }
    }

    else if constexpr (sizeof...(up_args) ==  2){
        int vals[] = {up_args...};
        arr[0] = vals[0];
        for(int i = 1; i<N;i++ ){
            arr[i] = arr[i-1] + vals[1];
        }
    }

    else if constexpr ( sizeof...(up_args) ==3){
        int vals[3] = {up_args...};
        arr[0] = vals[0];

        T stop = vals[1];
        T paso = vals[2];

        T count = vals[0];
        int idx = 1;
        while(count != stop-paso){
            arr[idx] = arr[idx-1] + paso;
            count = arr[idx];
            idx++;

        }

    }
}
#endif //PROG3_UNIT2_TEMPLATES_V2022_1_P9_H
