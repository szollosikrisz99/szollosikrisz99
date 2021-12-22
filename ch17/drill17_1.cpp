#include <iostream>
#include <vector>

using namespace std;




void print_array10(ostream& os, int* a){
	for(int i = 0;i<10;++i){
	
		os << a[i] <<endl; 
		if(i == 9) os<<endl;
	
	}
}

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
	
int* Pi = new int[10];
int* Pi2 = new int[10]  {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
int* Pi3 = new int[11]  {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
int* Pi4 = new int[20];

for(int i = 0;i<10;++i){
	Pi[i] = i; 
}


print_array10(cout, Pi);
print_array10(cout, Pi2);
print_array(cout, Pi3, 11);

for(int i = 0;i<20;++i){
		
		Pi4[i] = 100+i;
	}

print_array(cout, Pi4, 20);

delete[] Pi;
delete[] Pi2;
delete[] Pi3;
delete[] Pi4;

vector<int> *v = new vector<int> {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
vector<int> &vr = *v;
print_vector(cout, vr);

vector<int> *v1 = new vector<int> {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
vector<int> &vr1 = *v1;
print_vector(cout, vr1);

vector<int> *v2 = new vector<int> {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 
									110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
vector<int> &vr2 = *v2;
print_vector(cout, vr2);


delete v;
delete v1;
delete v2;


	return 0;
}
