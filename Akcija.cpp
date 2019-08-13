#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void sale(vector<int> &vec, int &count){
    int result = 0;
    int temp = 0;
    //selectionSort(vec);
    sort(vec.begin(), vec.begin() + count);
    for(int i = vec.size() -1; i >= 0; --i){
      if(temp == 2){
        --i;
        temp = 0;
      }
      result += vec[i];
      ++temp;
    }

  cout << result << endl;

}

int main() {
  int count;
  cin >> count;
  vector <int> vec;
  for(int i = 0; i < count; ++i){
    int input;
    cin >> input;
    vec.push_back(input);
  }
  sale(vec, count);
  return 0;
}
