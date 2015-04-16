#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
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
    bv[1] = true;
    cout << "finish" <<endl;

    for (size_t i = 11; i < bv.size(); i += 2) {
      if (bv[i]) {
        bool ifExist = false;
        for (int j = sqrt((i/2)); j > 0; j--) {
          int x = i - 2*j*j;
          if (!bv[x]) {
            ifExist = true;
            break;
          }
        }
        if (!ifExist) {
          cout << i << endl;
          break;
        }
      } 
    } 
}