#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main(){
    list<int> ll;
    list<int>::iterator itr;
    ll.push_front(7);
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    for(itr=ll.begin();itr!=ll.end();itr++){
        cout<<(*itr)<<"->";
    }
    
    
}