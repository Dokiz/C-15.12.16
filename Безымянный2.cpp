#include<iostream>
using namespace std;

int myfunc(int s,int e) {
int sum;
sum=s+e;
return sum;
}

int main() {
    int s,e,sum;
    cout<<"number one "<<endl;
    cin>>s;
    cout<<"number two "<<endl;
    cin>>e;
    sum = myfunc(s,e);
    cout<<sum<<endl;    
    system ("pause");
    return 0;
}
