#include<bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}

int main(){
    vector<int> v{2,25,53,32,23};
    bubbleSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    return 0;
}