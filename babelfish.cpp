#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

using namespace std;


int main(){
    unordered_map <string, string> map;
    string line;
    string first;
    string second;


    while(getline(cin,line) && line != ""){
        stringstream word(line);
        word >> first;
        word >> second;
        map[second] = first;
    }
    while(cin >> second){
        first = map[second];
        cout << (first == "" ? "eh" : first) << endl;
    }
}
