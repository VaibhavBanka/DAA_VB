#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
int main()
{
    vector<int> elements;
    int key,i,j,n,ele;
    //cout<<"Enter number of elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ele;
	    elements.push_back(ele);
    }
	clock_t tStart = clock();    
    for(j=1;j<n;j++)
    {
        key = elements[j];
        i = j-1;
        while((i>=0)&&(elements[i]>key))
        {
            elements[i+1] = elements[i];
            i = i-1;
        }
        elements[i+1] = key;
    }
    double time1=(double)(clock() - tStart)/CLOCKS_PER_SEC;
	cout<<"Time taken is "<<time1<<endl;
    // for(i=0;i<n;i++)
    // {
    //     cout<<elements[i]<<" ";
    // }
    int k=rand();
    clock_t t2=clock();
    for(int i=0;i<n;i++){
        if (elements[i]==k){
            cout<<i+1<<endl;
            break;
        }
    }
    double time2=(double)(clock() - t2)/CLOCKS_PER_SEC;
	cout<<"Time taken is for linear: "<<time2<<endl;

    clock_t t3=clock();
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if (elements[m]==k){
            cout<<m+1<<endl;
            break;
        }
        if(elements[m]<k){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }

    double time3=(double)(clock() - t3)/CLOCKS_PER_SEC;
	cout<<"Time taken is for binary: "<<time3<<endl;
}