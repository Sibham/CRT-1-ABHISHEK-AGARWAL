//CALL BY VALUE - ITS LIKE PHOTOCOPY, CANT CHANGE VALUE
// CALL BY REFERENCE - ORIGINAL COPY(ADDRESS)


#include<iostream>
using namespace std;


void updatebyValue(int a){
    a = 500;
}

void updatebyRefrence(int &a){
    a = 500;
}

int main(){
    int original = 100;
    cout<<original<<"\n";
     
    updatebyValue(original);
    cout<<original <<"\n";
    updatebyRefrence(original);
    cout<<original;
}
