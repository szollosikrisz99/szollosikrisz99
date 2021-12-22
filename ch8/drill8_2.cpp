#include <iostream>
using namespace std;


	void swap_v(int a, int b);
	void swap_r(int& a, int& b);
	//void swap_cr(const int&, const int&); 
	

int main(){

int x = 7;
int y = 9;

swap_v(7,9);
std::cout<<"x: "<<x<<" "<<"y: "<<y<<std::endl;
swap_r(x,y);
std::cout<<"x: "<<x<<" "<<"y: "<<y<<std::endl;
//swap_cr(x,y); doesn't compile


const int cx = 7;
const int cy = 9;

swap_v(cx,cy);
std::cout<<"cx: "<<cx<<" "<<"cy: "<<cy<<std::endl;
// swap_r(7.7,9.9); doesn't compile
//swap_cr(cx,cy); doesn't compile


double dx = 7.7;
double dy = 9.9;

//swap_r(dx,dy); doesn't compile
swap_v(dx, dy); //doesn't compile
// swap_v(7.7,9.9); doesn't compile
std::cout<<"dx: "<<dx<<" "<<"dy: "<<dy<<std::endl;

//swap_cr(dx,dy); doesn't compile


	return 0;
}


void swap_v(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;

}

void swap_r(int& a, int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

/*
void swap_cr(const int& a, const int& b){    // doesn't compile
	int temp;
	temp = a;
	a = b;
	b = temp;
} 
*/
