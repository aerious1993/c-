#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void _result1(string left,string right){

	stringstream _left (left);
	stringstream _right (right);

	int x = 0;
	int y = 0;
	_left >> x;
	_right >> y;

	cout << "lvalue : " << x << endl;
	cout << "rvalue : " << y << endl;

	//flag
	int _leftp = 0;
	int _rightp = 0;

	if( x > y){
		_leftp = 1;
	}
	else if (x < y){
		_rightp = 1;
	}
	else{
	       goto dresult;	
	}
	if(_rightp){
		x++;
		while(x != y){
			y--;
		}
	}
	if(_leftp){
		y++;
		while(x != y){
			x--;
		}
	}

dresult:
	string result;
	result = to_string(x) + to_string(y);
	cout <<"RESULT: " << result << endl;	
}
int main(){
	
	string line, left, right;
	cout << "PLEASE ENTER A VALUE" << endl;
	getline(cin, line);
	cout << "SIZE LENGTH " << line.length() << endl;
	if(line.length()%2 == 0){
	int _even = 1;
	for(int i = 0; i < line.length()/2; i++){
		left += line[i];	
	}
	cout << left << endl;
	for(int i = line.length()/2; i < line.length(); i++){
		right += line[i];	
	}
	cout << right << endl;
	_result1 (left,right);
	}
	else{
		cout << "ODD NUMBER" <<endl;
	int _even = 0;
	double odd = double(line.length())/2 + 0.5;
	cout << "SIZE LENGTH " << line.length() << endl;
	int lb = odd - 1;
	int rb = odd ;
	line[lb] += 1;
	cout <<"half: "<< line[lb] <<endl;
	if (lb != 0){
	cout << "LB " << lb <<endl;
	cout << "RB " << rb <<endl;
	cout << "ODD " << odd <<endl;
	for(int i = 0; i < lb ; i++){
		left += line[i];	
	}
	}
	else { left = line[0];}

	cout << left << endl;
	for(int i = rb ; i < line.length() ; i++){
		right += line[i];	
	}
	cout << right << endl;


	stringstream _left (left);
	stringstream _right (right);

	int x = 0;
	int y = 0;
	_left >> x;
	_right >> y;

	cout << "lvalue : " << x << endl;
	cout << "rvalue : " << y << endl;

	//flag
	int _leftp = 0;
	int _rightp = 0;

	if( x > y){
		_leftp = 1;
	}
	else if (x < y){
		_rightp = 1;
	}
	else{
	       goto dresult;	
	}
	if(_rightp){
		x++;
		while(x != y){
			y--;
		}
	}
	if(_leftp){
		y++;
		while(x != y){
			x--;
		}
	}

dresult:
	string result;
	result = to_string(x) + line[lb] + to_string(y);
	cout <<"RESULT: " << result << endl;	
}
	
}
		

