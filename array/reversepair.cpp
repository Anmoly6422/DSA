#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& vec, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftVec(n1), rightVec(n2);

    for (i = 0; i < n1; i++)
        leftVec[i] = vec[left + i];
    for (j = 0; j < n2; j++)
        rightVec[j] = vec[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (leftVec[i] <= rightVec[j]) {
            vec[k] = leftVec[i];
            i++;
        } else {
            vec[k] = rightVec[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = leftVec[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = rightVec[j];
        j++;
        k++;
    }
}
int countpairs(vector <int> &vec,int left,int mid,int right){
    int r=mid+1;
    int cnt=0;
    for(int i=left;i<=mid;i++){
        while(r<=right && vec[i]>2*vec[r]) r++;
        cnt+=(r-(mid+1));
    }
    return cnt;
}

int mergeSort(vector<int>& vec, int left, int right) {
    int cnt=0;
    if (left < right) {
        int mid = left + (right - left) / 2;
        cnt+=mergeSort(vec, left, mid);
       cnt+= mergeSort(vec, mid + 1, right);
        cnt+=countpairs(vec,left,mid,right);
        merge(vec, left, mid, right);
        return cnt;
    }
}

int main() {
    vector<int> vec = {12, 11, 13, 5, 6, 7};
    int n = vec.size();

   cout<< countpairs(vec, 0, 2,n - 1);
     
    return 0;
}
