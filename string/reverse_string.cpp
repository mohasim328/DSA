#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
          int start =0;
          int end = str.length() - 1;
          
          while(start<end){
              
              int temp = str[end];
              
              str[end] = str[start];
              
              str[start] = temp;
              
              end--;
              start++;
              
              
          }
          return str;

    }
};


int main() {
	
	
	
	  cout<<"enter the"<<endl;
    	string s = "mohascr";
    	
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;

	return 0;
	
}
