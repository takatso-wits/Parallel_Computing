#include <iostream>
#include <cmath>
using namespace std;

int main(){

	double f_x, f_y,h = 0.01;
	double x0 = 0.0, y0 = 0.0;
	double x1 = 2.0, y1 = 10.0;

	long int x = static_cast<int>((x1-x0)/h);
	long int y = static_cast<int>((y1-y0)/h);

	//This is where I will be storing the Partial derivatives of both x and y.
	double p_x[x], p_y[y];

	//Now  I want to draw the function f(x,y) = x^2*y
	double px[x][y];
	double py[y][x];
	for(int i = 0; i < x; i++){
		y0 = 0.0;
		for(int j = 0; j < y; j++){
			px[i][j] = pow(x0,2)*y0;
			y0 += h;
		}
		x0 += h;
	}

	for(int i = 0; i < y; i++){
		x0 = 0.0;
		for(int j = 0; j < x; j++){
			py[i][j] = pow(x0,2)*y0;
			x0 += h;
		}
		y0 += h;
	}

	// Now we have the graph and the domain
	for(int row = 0; row < x; row++){
		for(int col = 0; col < y; col++){
			cout << py[row][col] << " ";
		}
		cout << endl;
	}

	// Now I am calculating the Partial derivatives for x and y



	return 0;
}
