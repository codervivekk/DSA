// In insertion sort,we maintain two arrays(left array is sorted and right one is unsorted) and we manually
// check each value till the last array and swaps the value accordingly


#include<bits/stdc++.h>
using namespace std;


void insertionSort(vector<int> &v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int j=0;
        while(j<i){
            if(v[i]<v[j]){
                swap(v[i],v[j]);
            }
            j++;
        }
    }
}

int main(){
    vector<int> v{2,25,53,32,23};
    insertionSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    return 0;
}