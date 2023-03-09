#include<bits/stdc++.h>
using namespace std;
 int partition(vector<int> &v,int low,int high){
    int pivot=v[high];

    int i=low-1;
    for(int j=low;j<high;j++){
        if(v[j]<=pivot){
            i++;
            swap(v[i],v[j]);
        }
    }

    swap(v[i+1],v[high]);
    return i+1;
 }



void quickSort(vector<int> &v,int low,int high){
    int pi;

    if(low<high){
        
        pi= partition(v,low,high);
        quickSort(v,low,pi-1);
        quickSort(v,pi+1,high);
    }
}

int main(){
    vector<int> v{2,25,53,32,23};

    quickSort(v,0,v.size()-1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


    return 0;
}