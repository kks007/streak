#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5,2,1,3,2,2,2,2};

    unordered_map<int, int> count;
    bool flag = false;
    
    for(int i = 0; i < arr.size(); i++){
        count[arr[i]]++;
    }


    for(auto i: count){
        if(i.second >= 2){
            flag = true;
        }
    }

    cout << flag << endl;

}