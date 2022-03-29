//find profit and loss percentage
#include<iostream>
using namespace std;
int main()
{
    int cp,sp, amt , percent;
    cout<<"Enter the principle and selling price";
    cin>>cp>>sp;
    if(sp>cp){
        amt=sp-cp;
        percent=(amt*100)/cp;
        cout<<"profit is:"<<amt<<endl;
        cout<<"profit  % ="<<percent<<endl;
    }
    else if (cp>sp)
    {
        amt=cp-sp;
        percent=(amt*100)/cp;
    cout<<"loss is :"<<amt<<endl;
    cout<<"loss % = "<<percent<<endl;
    }
    else{
        cout<<"No profit no loss";
    }
    return 0;
}