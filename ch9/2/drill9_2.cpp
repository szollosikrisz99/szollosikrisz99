#include <iostream>


struct Date
{
	int y; 
	int m; 
	int d; 
	Date(int y, int m, int d){
		if(m<=12 && m>=1 && d>=1 && d<=31){
	this -> y = y;
	this -> m = m;
	this -> d = d;

	} 
	else{ std::cout<<"invalid date"<<std::endl; 
			}
		}
	
	void add_day(int n){
	if(d == 31 && n>=1){
		d = 0+n;
		++m;
	}else{	d = d+n;  }
	if(m>12 && n>=1){
		m = m - 12;
		++y;
	}
}



};


std::ostream& operator<<(std::ostream& os, const Date& d) { 
       
		os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
        return os;
    }


void f(){
	Date today(1978,7,25);
	Date tomorrow = today;
	std::cout << today;
	tomorrow.add_day(1);
	std::cout << tomorrow;
}





int main(){

f();

	return 0;
}
