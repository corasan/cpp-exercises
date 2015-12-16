//
//  main.cpp
//  grains
//
//  Created by Henry Paulino on 12/15/15.
//  Copyright © 2015 Henry Paulino. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>
#include <math.h>


using namespace std;
vector<long long> sq;

void squar(int n) {
  sq.push_back(1);
  int i = 0;
  
  while (i < 64) {
    long long result = sq[i] * 2;
    sq.push_back(result);
    ++i;
  }
  cout << "There are " << sq[n-1] << " grains at square " << n << "\n";
}

void total() {
  cout << "Total grains: " << pow(2, 64) << "\n";
}

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;
  squar(n);
  total();
  return 0;
}
