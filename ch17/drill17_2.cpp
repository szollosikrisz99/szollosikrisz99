#include <iostream>
#include <vector>

using namespace std;

void print_array(ostream& os, const int* a, int n){
	for(int i = 0;i<n;++i){
	
		os << a[i] <<endl; 

		if(i == n-1) os<<endl;
	
	}
}

void print_vector(ostream& os, const vector<int> &v){
	for(int i = 0;i<v.size();++i){
	
		os << v[i] <<endl; 

		if(i == v.size()-1) os<<endl;
	
	}
}

int main(){
	int *p1 = new int(7);
	cout<<p1<<endl;
	print_array(cout, p1, 1);

	int* p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};
	cout<<p2<<endl;;
	print_array(cout, p2, 7);
	
	
	int *p3 = p2;

	p2 = p1;
	p2 = p3;

	cout<<p1<<endl;
	print_array(cout, p1, 1);
	cout<<p2<<endl;
	print_array(cout, p2, 7);
	
	delete p1;
	delete [] p2;

	p1 = new int[10];


	for(int i = 1; i<10; ++i){
		p1[0] = 1;
		p1[i] = p1[i-1]*2;
	}

	print_array(cout, p1, 10);
	
	p2 = new int[10];

	p2 = p1;

	print_array(cout, p2, 10);


	vector<int> v (10);


	for(int i = 1; i<10; ++i){
		v[0] = 1;
		v[i] = v[i-1]*2;
	}

	print_vector(cout, v);

	vector<int> v1 (10);
	v1 = v;
	print_vector(cout,v1);


	return 0;
}
