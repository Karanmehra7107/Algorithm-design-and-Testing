#include <iostream>
using namespace std;
int main()
{
int arr[10][10];
const int INF =1e9;
int i,j,n;
cout<<"enter number of vertices: "<<endl;
cin>>n;
cout<<"enter the adjacency matrix:"<<endl;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cin>>arr[i][j];
}
}
cout<<"Adjacency matrix before minimum path:"<<endl;
for(int i = 0;i<n;i++){
for(int j=0;j<n;j++){
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
for(int k=0;k<n;k++){
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(arr[i][k] + arr[k][j]<arr[i][j]){
arr[i][j]=arr[i][k] + arr[k][j];
}
}
}
}
//for printing an array
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(arr[i][j] == INF){
cout<<"INF";
}
else
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}