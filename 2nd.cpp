#include<iostream>

using namespace std;
int main(){
int list[]={1,9,7,8};
int max=list[0];
int size =sizeof(list)/sizeof(list[0]);
for(int i=0;i<size;i++){
if(max<list[i]){
        max=list[i];

}
}
cout<<"Max element:"<<max;
}
