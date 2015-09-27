//
//  main.cpp
//  3.1
//
//  Created by Kubitski Vlad on 21.09.15.
//  Copyright (c) 2015 Kubitski Vlad. All rights reserved.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int * func(int* a,int size);

int main()
{
    int* r;
    int* a = new int [7];
    for(int i = 0; i <= 6; i++)
    {
        cout<< "vvedite chisla "<<i<<endl;
        cin>>a[i];
    }
    r = func(a, 6);
    for (int i = 0; i <= 2; i++)
    {
        cout<<r[i]<<endl;
    }
}
int* func(int* a, int size)
{
    int* b = new int(3);
    int t = 0;
    for(int i2 = 0; i2 < size; i2++)
    {
        for(int j3 = 0; j3 < size; j3++)
        {
           if (a[j3] <= a[j3 + 1])
           {
               t = a[j3 + 1];
               a[j3 + 1] = a[j3];
               a[j3] = t;
           }
        }
    }
    
    for(int i = 0; i <= 2; i++)
    {
        b[i] = a[i];
    }
    return b;
}

