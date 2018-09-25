#include <iostream>
#include <cmath>
#include<vector>
using namespace std;

int main(){

	double f_x, f_y,h = 0.01;
	double x0 = 0.0, y0 = 0.0;
	double x1 = 2.0, y1 = 4.0;
	

	 f_x = (pow((x0 + h),2) * y0 - pow((x0),2) * y0)/h;
	 f_y = (pow((x0),2) * (y0 + h) - pow((x0),2) * y0)/h;	
	
	int x = static_cast<int>((x1-x0)/h);
	int y = static_cast<int>((y1-y0)/h);
	
	double point[x][y];
	
	//initialize the grid.
	for(int i = 0; i < x; i++){
		for(int j= 0; j < y; j++){
			point[i][j] = 0;
		}
	}
	
	for(int i = 0; i < x; i++){
		for(int j= 0; j < y; j++){
			point[i][j] = pow(x0,2) * y0;
			y0 += h;
			cout << y0 << endl;
		}
		x0 += h;
	}
	
	
	//print the graph
	for(int i = 0; i < x; i++){
		for(int j= 0; j < y; j++){
			 cout << point[i][j] << " ";
		}
		cout << endl;
	}
	 
	for(int i = 0; i < x; i++){
		for(int j= 0; j < y; j++){
			f_x = (pow((point[i][j] + h),2) * point[i][j] - pow((point[i][j]),2) * point[i][j])/h;
	 		f_y = (pow((point[i][j]),2) * (point[i][j] + h) - pow((point[i][j]),2) * point[i][j])/h;
			cout << f_x << endl;
			cout << f_y << endl;
		}
	}
	 
	  
	


}
