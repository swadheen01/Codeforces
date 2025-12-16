#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void sir()
{
    string s;
	int n,a=0,g=0,c=0,t=0,un=0;
	cin>>n>>s;
	for(int i=0;i<n;++i){
		if(s[i]=='A') ++a;
		else if(s[i]=='G') ++g;
		else if(s[i]=='C') ++c;
		else if(s[i]=='T') ++t;
		else ++un;
    }

	int m = max(a,max(g,max(c,t)));
    int summ = 0;
	summ = (m-a) + (m-g)+(m-c)+(m-t);
	
	if(un<summ||((un-summ)%4 != 0)) {
        cout<<"==="<<endl;
    }

	else{
		un -= summ;
		if(un>0){
			a = m-a+un/4;
			g = m-g+un/4;
			c = m-c+un/4;
			t = m-t+un/4;	
		}else{
			a=m-a;
			g=m-g;
			c=m-c;
			t=m-t;
		}
		
		for(int i=0;i<n;++i)
			if(a>0 && s[i]=='?'){
				s[i]='A';
				--a;
			}
			else if(g>0 && s[i]=='?'){
				s[i]='G';
				--g;
			}
			else if(c>0 && s[i]=='?'){
				s[i]='C';
				--c;
			}
			else if(t>0 && s[i]=='?'){
				s[i]='T';
				--t;
			}
			cout<<s<<endl;;
    }
}

int main(){
    sir();
    return 0;
	}