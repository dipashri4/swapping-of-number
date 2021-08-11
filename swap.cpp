/*@uthor:Shinde Dip@shri
swapping of two variable using 4 different methods */

#include<iostream>
using namespace std;
int main(){
	int a,b,n,temp;
	while (1){
		cout<<"\n";
		cout<<"enter your choice ";
		
	    cin>>n;
    	switch(n){
		    case 1:
		    	cout<<"enter value of a & b "<<endl;
		    	cin>>a>>b;
		    	cout<<"a="<<a<<" "<<"b="<<b<<endl;
			    temp=a;
		     	a=b;
			    b=temp;
			    
			    cout<<"new value of a="<<a<<" "<<"b="<<b<<endl;
			    break;
			
		    case 2:
		    	cout<<"enter value of a & b "<<endl;
		    	cin>>a>>b;
		    	cout<<"a="<<a<<" "<<"b="<<b<<endl;
	    		a=a+b;
	    		b=a-b;
	    		a=a-b;
	    		cout<<"new value of a="<<a<<" "<<"b="<<b<<endl;
	    		break;
			
	    	case 3:
	    		cout<<"enter value of a & b "<<endl;
		    	cin>>a>>b;
		    	cout<<"a="<<a<<" "<<"b="<<b<<endl;
		    	a=a^b;
		    	b=a^b;
		    	a=a^b;
	    		cout<<"new value of a="<<a<<" "<<"b="<<b<<endl;
	    		break;
			
		    case 4:
		    	cout<<"enter value of a & b "<<endl;
		    	cin>>a>>b;
		    	cout<<"a="<<a<<" "<<"b="<<b<<endl;
	    		b=a+b-(a=b);
	    		cout<<"new value of a="<<a<<" "<<"b="<<b<<endl;
	    		break;
	 		
		    default:
	    		cout<<"enter valid choice"<<endl;
        		break;
        }
	}
	return 0;
}
