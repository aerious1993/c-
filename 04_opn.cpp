#include <iostream>
#include <string>
#include <stack>


using namespace std;

inline bool _operator(char c){
	return (c =='+' || c == '*' || c =='^');
}

int main(){
	std::cout << "PLEASE ENTER EXPRESSION" << std::endl;
	string line;
	getline(cin,line);
	//cout << line << endl;
		
	char c;
	string result;
	std::stack<char> mystack;
	for(int i=0; i < line.length();i++){	
	c = line[i];
		if(_operator(c)){
			mystack.push(c);
		}
		
			else if(c == '('){
				mystack.push(c);
			}
			else if(c == ')'){
				while(mystack.top() != '('){
					result += mystack.top();
					mystack.pop();
				}
				mystack.pop();
			}
	//((a+t)*((b+(a+c))^(c+d)))
	//at+bac++cd+^*	
		else {
		result += c;
		}
		
	}
	
	while(!mystack.empty()){
		result += mystack.top();
		mystack.pop();
				}
	cout << result <<  endl;
}	

