#include <bits/stdc++.h>
using namespace std;
void maxlen(int* arr,int n){
    int maxi = 0;
    int sum = 0;
    int starti = -1;
    int endi = -1;
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        if(sum==0){
            maxi = i + 1;
            starti = 0; endi = i;
        }
        if(mpp.find(sum)!=mpp.end()){
            maxi = max(maxi,i-mpp[sum]);
            starti = mpp[sum] + 1;
            endi = i;
        }
        else{
            mpp[sum] = i;
        }
    }
    cout<<maxi<<" "<<starti<<" "<<endi;
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for (int x = 0; x < n; x++)
    {
        cout << "Enter the element " << x << " : ";
        cin >> arr[x];
    }
    maxlen(arr,n);
    return 0;
}
