#include <iostream>
#include <vector>

using namespace std;


bool isAbundant(int n) {
  int sum = 0;
  for(int i = 1; i < n; i++) {
    if((n % i) == 0) sum += i;
  } 
  return sum > n;
}

int main(int argc, char *argv[])
{
  vector<int> abundant;
  for (int i = 12; i < 28123; i++) {
    if(isAbundant(i)) abundant.push_back(i);
  }  
  vector<bool> bitsum(28123);
  for(size_t i = 0; i < abundant.size(); i++) {
    for(size_t j = i; j < abundant.size(); j++) {
      int twoSum = abundant[i] + abundant[j];
      if(twoSum < 28123) bitsum[twoSum] = true;
    }
  }
  int sum = 0;
  for (size_t i = 0; i < bitsum.size(); i++) 
    if (!bitsum[i]) sum +=i;

  cout << sum;
  return 0;
}