#include<iostream>
#include<stack>

using namespace std;


class Solution {
	
public:
	
		bool isValid(string s)
		{
			stack<char> st;
			bool flag = false;
			
			for(int i=0; i<s.length(); ++i)
			{
				  cout<<"\n Starting string parsing - with "<<s[i]<<"\n";
				  
				 if( ((s[i]==')' ) || ( s[i]=='}') || ( s[i]==']' ) )  && st.empty() )
				 {
							cout<<"\n got only "<<s[i]<<", and stack is empty, so return false\n";
							flag= false;
							return flag;
				 }
				 else if(s[i] == '(' || s[i]=='{' || s[i]=='[')
         {
        	st.push(s[i]);
        	cout<<"\n Pushing "<<s[i]<<" to the stack\n";
			   }
				 else if( (s[i]==')' && st.top()=='(' ) ||
			 	 ( s[i]=='}' && st.top()=='{' ) ||
			 	 ( s[i]==']' && st.top()=='[' ) )
			 	 {
						 cout<<"\n Received closing matching "<<s[i]<<"so , popping= "<<st.top()<<"\n";
				 	 	 st.pop();

				 	 	 if(st.empty() && (i==s.length()-1))
						 {
								cout<<"\n stack become empty and string also finished\n";
								flag=true;
						 }
					}
					else 
					{
						cout<<"\n  stack is not empty yet but got mismatched paranthesis\n";
						flag = false;
						return flag;
					}
			}
			return flag;
		}
	
};
    int main()
		{

			Solution s1;

			string s2("(])");
			cout<<s1.isValid(s2);

      return 0 ;
    }
