#include<iostream>
using namespace std;

int main() {
    int test;
    cin>>test;
 while (test--) {
    int a,b;
	cin>>a>>b;
	if (a==0){
      cout<<"Liquid"<<endl;
    }
    else if (b==0){

      cout<<"solid"<<endl;
    }
    else{

      cout<<"Solution"<<endl;
    }
  }
}

