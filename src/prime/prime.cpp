//
// Created by 周秀敏 on 2020/8/29.
//

#include "prime.h"
#include "iostream"

namespace prime{
    void test() {
        using namespace std;
        cout<<"prime"<<endl;

        int i = 10;
        decltype(i) a = 3;
        cout<<"a "<<a<<endl;

        int age[] = {1, 3, 4};
        for(int &y: age) {
            cout<<y<<endl;
        }

        constexpr int ct1 = 20;
        constexpr int ct2 = ct1 + 1;

        cout<<"ct1 "<<ct1<<endl;
        cout<<"ct2 "<<ct2<<endl;


    }
}