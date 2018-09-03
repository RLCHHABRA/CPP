#include<iostream>
#include<conio.h>
using namespace std; 
class transpose
{
	private:
		int matrix[3][3] , trans[3][3] ; 
	public:
		void get_matrix()
		{
			cout<<"Enter the elements of matrix"<<endl;
			for(int i=0 ; i<3 ; i++)
			{
				for(int j=0 ; j<3 ; j++)
				{
					cin>>matrix[i][j];
				}
			}
			transp();
		}
		void transp()
		{
			for(int i=0 ; i<3 ; i++)
			{
				for(int j=0 ; j<3 ; j++)
				{
					trans[i][j] = matrix[j][i] ; 
				}
			}
		}
		void display()
		{
			cout<<"Transpose of given matrix is "<<endl;
			for(int i=0 ; i<3 ; i++)
			{
				for(int j=0 ; j<3 ; j++)
				{
					cout<<trans[i][j]<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	transpose obj ; 
	obj.get_matrix(); 
	obj.display(); 
	getch(); 
	return 0 ; 
}
