#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include "P1.h"
#include "P2.h"
#include "P3.h"
#include "P4.h"
#include "P5.h"
#include "P6.h"
#include "P7.h"
#include "P8.h"
#include "P9.h"
#include "P10.h"


using namespace std;
int main() {
    array<int, 4> arr = { 40, 10, 25, 20 };
    searcher<array<int, 4>> s = arr;
    for (const auto& i: arr)
        cout << i << " ";
    cout << endl;                // 10 20 25 40
    auto index = (s << 10);
    cout << index << endl;      // 0

    vector<int> vec = {5, 1, 2, 3, 5, 7, 7};
    searcher<vector<int>> s2 = vec;
    for (const auto& i: vec)
        cout << i << " ";
    cout << endl;                // 1 2 3 5 5 7 7
    cout << (s2 << 10) << endl;  // -1
}
