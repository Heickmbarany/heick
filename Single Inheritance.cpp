//single inheritance program
#include<iostream>
using namespace std;
class grandfather{
 public:
 void house(){
 cout<<"I have a house"<<endl;
 }
 void apartment(){
 cout<<"I own an apartment"<<endl;
 }
};
class father: public grandfather{
 public:
 void cars(){
 cout<<"I have thee cars!"<<endl;
 }
};
int main(){
 father son;
son.house();
son.apartment();
son.cars();
return 0;
}