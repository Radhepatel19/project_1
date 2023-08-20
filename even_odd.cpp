#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cout<<"Enter your number=";
//     cin>>n;
//     if(n%2==0){
//         cout<<"This number is even number";
//     }else{
//         cout<<"This number is odd number";
//     }
// }

class Try
{
    public:
        int n;
        void getdata(){
            cout<<"Enter your number=";
            cin>>n;
        }
        void display(){
            if(n%2==0){
                cout<<"This number is even number";
            }else{
                cout<<"This number is odd number";
            }
        }
};
int main(){
    Try k;
    k.getdata();
    k.display();

    return 0;
}