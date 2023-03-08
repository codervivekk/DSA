#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& vec, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1), R(n2);

    for (i = 0; i < n1; i++)
        L[i] = vec[l + i];
    for (j = 0; j < n2; j++)
        R[j] = vec[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        }
        else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& vec, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(vec, l, m);
        mergeSort(vec, m + 1, r);

        merge(vec, l, m, r);
    }
}


int main(){
    vector<int> vec{2,25,53,32,23,89,67,23,1,5};
    mergeSort(vec,0,vec.size()-1);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }


    return 0;
}