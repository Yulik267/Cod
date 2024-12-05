#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

//4. bubblesort lol

int intRand(int min,int max) {
    return min + rand() % max;
};

int main() {
    srand(time(NULL));
    vector<int> nums = {};
    int max;
    cout<<"Nr Max de numere: ";
    cin>>max;
    for (int i = 0; i < max; i ++){
        nums.insert(nums.begin() + i,intRand(0,100));
        cout<<nums[i]<<",";
    };
    cout<<"\n";
    bool stopped = false;
    while (not stopped){
      stopped = true;
      for (int i = 0; i < max; i++){
          if (nums[i] > nums[i+1]){
              int a = nums[i];
              nums[i] = nums[i+1];
              nums[i+1] = a;
              stopped = false;
          }
      }
    };
    for (int i = 0; i < max; i ++){
        cout<<nums[i]<<",";
    };
    return 0;
}