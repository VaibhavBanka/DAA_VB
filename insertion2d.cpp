#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
int main()
{
    vector<int> elements;
    int key,i,j,n,ele;
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
        int t1,t2;
        while(i>=0)
        {
            if(elements[i]<0 && key<0){
                t1=abs(elements[i]);
                t2=abs(key);
            }
            else{
                t1=elements[i];
                t2=key;
            }
            if(t1>t2){
                elements[i+1]=elements[i];
                i=i-1;
            }
            else{
                break;
            }
        }
        elements[i+1] = key;
    }
    double time1=(double)(clock() - tStart)/CLOCKS_PER_SEC;
	// cout<<"Time taken is "<<time1<<endl;
    for(i=0;i<n;i++)
    {
        cout<<elements[i]<<" ";
    }
}