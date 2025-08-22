#include<iostream>
#include<vector>
using namespace std;
//stl=contaners+algo+iterators
//containers  (object which stores data)--- 1.sequence containers  2.assocaitve containers  3.derived containers

void display(vector<int> &a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<endl;
    }
    
}
int main(){
    vector<int> a;
    int element;
    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter the element into the vector: ";
        cin>>element;
        a.push_back(element);
    }
    display(a);
    vector<int>::iterator iter = a.begin();
    a.insert(iter,5,588);
    display(a);
    
}

//version 1