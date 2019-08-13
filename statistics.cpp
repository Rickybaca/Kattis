#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long int times, range = 0;
    int counter = 0;
    vector<long int> vec;
  while(cin >> times){ 
    long int min = 1000000, max = -1000000;
    for(int i=0; i < times; ++i){
        long int num;
        cin >> num;
        vec.push_back(num);
    }
    for(int i = 0; i < vec.size(); i++){
      if(vec[i] < min){
       min = vec[i];
      }
    }
    for(int i = 0; i < vec.size(); i++){
      if(vec[i] > max){ 
      max = vec[i];
      }
    }
 
  range = max - min;
  cout << "Case " << (++counter) << ": " << min << " " << max << " " << range << endl;
  vec.clear();
  }  
    return 0;
}
