//
// Created by Lenovo on 25-02-2024.
//

#ifndef P1_PRIMARY_H
#define P1_PRIMARY_H
#ifndef BITS

#include <bits/stdc++.h>

using namespace std;
#define BITS
#endif

template<typename... Args>
void print(const Args &... args) {
    const auto argArray = {(&args)...};
    for (const auto arg: argArray) {
        std::cout << *arg << " ";
    }
//    std::cout << std::endl;
}

#endif //P1_PRIMARY_H
