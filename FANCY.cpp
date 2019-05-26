#include <iostream> 
#include <cstring> 
using namespace std; 
int isSubstring(string s1, string s2) 
{ 
    int M = s1.length(); 
    int N = s2.length(); 
  
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) { 
        int j; 
  
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M && (s2[i+j]==' '||(i+j)==N)&&((i-1==-1)||s2[i-1]==' '))  
            return i; 
    } 
  
    return -1; 
} 
int main() 
{ 
	string str; 
	short int t;
	cin>>t;
	while (t--) 
	{ 
		// Read a line from standard input in str 
		getline(cin, str); 
		while (str.length()==0 ) 
            getline(cin, str); 
	    string p="not";
	    int res = isSubstring(p, str);
	    if(res==-1)
	    cout<<"regularly fancy"<<endl;
	    else
	    cout<<"Real Fancy"<<endl;
	} 
	return 0; 
} 
