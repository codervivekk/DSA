#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &v,int val){
    int idx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==val){
            idx=i;
            break;
        }
    }
    return idx;
}

int binarySearch(vector<int> &v,int val){
    sort(v.begin(),v.end());
    int idx=-1;
    int l=0,r=v.size()-1;
    while(l<r){
        int mid=(l+r)/2;
        if(v[mid]==val){
            idx=mid;
            break;
        }
        else if(v[mid]>val){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return idx;
}

int main(){
    vector<int> v{10,32,43,54,1,54,65,25,56};

    cout<<"The index of 54 is::"<<binarySearch(v,54);

    return 0;
}