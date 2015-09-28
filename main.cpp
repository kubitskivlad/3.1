//
//  main.cpp
//  3.1
//
//  Created by Kubitski Vlad on 21.09.15.
//  Copyright (c) 2015 Kubitski Vlad. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
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
    
    int pro;
    pro = a[0]*a[1]*a[2];
    for (int i1 = 0; i1 <= size; i1++)
    {
        for (int j2 = (i1 + 1); j2 <= size; j2++)
        {
            for (int e3 = (j2 + 1); e3 <= size; e3++)
            {
                if (a[i1]*a[j2]*a[e3] > pro)
                {
                    pro = a[i1]*a[j2]*a[e3];
                    b[0] = a[i1];
                    b[1] = a[j2];
                    b[2] = a[e3];
                }
            }
        }
    }
    return b;
}

