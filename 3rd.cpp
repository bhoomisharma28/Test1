#include<iostream>
#include<vector>
using namespace std;
int Mult(vector<int> v,int a)
{
    int count=0;
    for(int b:v)
    {
        if(b%3==0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a,count1;
    cin>>a;
    vector<int> v;
    for(int b=0;b<a;b++)
    {
        int i;
        cin>>i;
        v.push_back(i);
    }

    count1=Mult(v,a);
    cout<<count1;


}
