#include <iostream>


struct Date
{
	int y; 
	int m; 
	int d; 
};

void init_day(Date& dd, int y, int m, int d) 
{
if(m<=12 && m>=1 && d>=1 && d<=31){
	dd.y = y;
	dd.m = m;
	dd.d = d;
	} else{ std::cout<<"invalid date"<<std::endl; 
			}
}

void add_day(Date& dd, int n){
	if(dd.d == 31 && n>=1){
		dd.d = 0+n;
		++dd.m;
	}else{	dd.d = dd.d+n;  }
	if(dd.m>12 && n>=1){
		dd.m = dd.m - 12;
		++dd.y;
	}
}

std::ostream& operator<<(std::ostream& os, const Date& d) { 
       
		os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
        return os;
    }


void f(){
	Date today;
	Date tomorrow;
	init_day(today,1978,7,25);
	std::cout << today;
	tomorrow = today;
	add_day(tomorrow,1);
	std::cout << tomorrow;
}





int main(){

f();

	return 0;
}
