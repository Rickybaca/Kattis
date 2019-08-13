#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &vec, int a, int b) { 
  
  auto temp = vec[a]; 
  vec[a] = vec[b];
  vec[b] = temp;
  
}
void print(vector<int> vec){
    for (int i=0; i < vec.size(); i++){
        if(i == 5){
      cout << vec[i] << endl;
      }
      else{
        cout << vec[i] << " ";
      }
    } 
    cout << endl;   
}

void bubbleSort(vector<int> &vec){
  for(int i =0; i < vec.size(); ++i){
    for(int j = 0; j < vec.size()-i-1; ++j){
        if (vec[j] > vec[j+1]){
        swap(vec, j, j+1);
        print(vec);
      }     
   }   
  }
}


int main() {
  vector<int> vec;
  for(int i = 0; i < 5; ++i){
    int num;
    cin >> num;
    vec.push_back(num); 
  }
  bubbleSort(vec);
}
