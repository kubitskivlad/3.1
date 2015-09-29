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
void assert(int* a, int size, int* test);

int main()
{
    int a[7] = { 1,2,3,4,5,6,7 }; int test[3] = { 5,6,7 };
	assert(a, 7, test);
	int a1[9] = { 1,2,1,2,1,2,1,2,1 }; int test1[3] = { 2,2,2 };
	assert(a1, 9, test1);
	return 0;
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
void assert(int* a, int size, int* test)
{
	int* r;
	r = func(a, size);
	if (r[0] * r[1] * r[2] == test[0] * test[1] * test[2]) {
		cout << "OK" << endl;
	}
	else { cout << "FAIL" << endl; }
}

