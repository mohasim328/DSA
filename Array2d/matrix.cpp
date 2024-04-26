#include<iostream>
using namespace std;


void multilpy(int Mat1[][3] ,int Mat2[][3] ,int MatAns[][3] ) {


    int rows = 3;
    int coloms = 3;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloms; j++)
        {
            MatAns[i][j] += Mat1[i][j] * Mat2[j][i];
        }
        
    }
    
}







int main(){
 int mat1[3][3] ={{1,2,3},{4,5,6},{7,8,9}};

  int mat2[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
 
  int matAns[3][3] ;

 

  multilpy(mat1, mat2, matAns );


  
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout<<matAns[i][j]<<" ";
      }
      cout<<endl;
   }

    return 0;

}