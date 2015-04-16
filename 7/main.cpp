//
//  main.cpp
//  HW1a
//
//  Created by lin liu on 1/26/15.
//  Copyright (c) 2015 lin. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    long a = 0;//input a
    long b = 1000000;//input b
    double c=sqrt(b);
    long n=b-a+1;
    vector<bool>bv(n,false);
    for(long i=2;i<=c;i++){
        for(long j=a/i;j<=(b/i);j++)
        {   
            long s=i*j-a;
            if(s>=0&&s<=(n-1)&&j!=1)
                bv[s]=true;
        }
    }
    long num=0;
    for(int i=2;i<n;i++)
    {
        if(bv[i]==false) {
            num++;
            if(num==10001) cout<<i<<endl;
        }
    }
    //output the result
    //if(a==0||a==1) num--;
    //cout<<"the prime number is "<<num<<endl;
    return 0;
}
