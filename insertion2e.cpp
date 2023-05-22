#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> x;
    vector <int> y;
    for(int i=0;i<n;i++){
        int x1,y1;
        cin>>x1>>y1;
        x.push_back(x1);
        y.push_back(y1);
    }
    vector <int> dis;
    for(int i=0;i<n;i++){
        dis.push_back(sqrt((x.at(i)*x.at(i))+(y.at(i)*y.at(i))));
    }
    int i,j,key,xcor,ycor;
    for(j=1;j<n+1;j++){
        key=dis[j];
        xcor=x[j];
        ycor=y[j];
        i=j-1;
        while(i>=0 && dis[i]>key){
            dis[i+1]=dis[i];
            x[i+1]=x[i];
            y[i+1]=y[i];
            i=i-1;
        }
        dis[i+1]=key;
        x[i+1]=xcor;
        y[i+1]=ycor;
    }
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<dis[i]<<" ";
        cout<<x[i]<<" "<<y[i]<<endl;
    }
}