#include <iostream>
using namespace std;

double geometricSum(int k, pow){
    if(k==0){
        return 1;
    }
    return (1/pow(2,k)) + geometricSum (k-1);
}

int main(){
int k;
cin >>k;
cout << geometricSum(k) << endl;
}
