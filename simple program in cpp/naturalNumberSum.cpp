#include<iostream>
using  namespace std;

int sumNaturalnumber(int start, int end){

          int holesum = end*(end+1)/2;
          int firstbsum = start*(start+1)/2;

          int totalSum = holesum - firstbsum;

        return totalSum+start; 

}


int main(){

     unsigned int start , end;


     cout<<"enter the value of bthe the number end point and start point will be count "<<endl;
     cin>>start>>end;


   
   int ans = sumNaturalnumber(start ,end);
    
    cout<<ans;



}