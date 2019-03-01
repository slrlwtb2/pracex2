#include <iostream>
#include <cmath>

using namespace std;

double av(double x, double y);


int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001) << "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
    return 0;
}


double av(double x,double y){
	double M,m;
	double t,h,a,q;
    	if(x<=0 or y<=0){
	return 0;
	}
	if(x>y){
		M=x;
		m=y;
	}
	else if(y>x){
		M=y;
		m=x;
	}
	if(M/m<=100){
		cout<<sqrt(x*y);
	
	}

	else{
		while((y+x)/2<=100){
		t=x;
		h=(y+x);
		y=h;
		a=t+(h/2);
		if((y+x)/2>=100){
			
			return sqrt(x*y);
			break;
		}
		while((y+x)/2<=100){
		t=y;
		h=(y+x);
		x=h;
		a=t+(h/2);
		if((y+x)/2>=100){
			return sqrt(x*y);
			break;
	}


		}
	}

}
}

