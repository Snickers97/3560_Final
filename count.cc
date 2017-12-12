///This is a program that is supposed to count lines and characters
///It won't actually do that because I don't have time, but it's the thought that counts
///It's basically just one step above pseudocode
#include <iostream>
#include <string>
using namespace std;

void countLine(char *pName);
void countChar(char *pName);

int main(){
	string param;
	cout<<"Enter parameter"<<endl;
	cin>>param;
	if(param == ""){
		countLine("Ohio University");
		countChar("Athens");
	}
	else{
		///I know this isn't right but you can see what I'm getting at
		char *pName = param.c_str();
		///Pretend these are files
		countLine(pName);
		countChar(pName);
	}
	return 0;
}

void countLine(char *pName){
	int i = 0;
	int count = 0;
	while(pName[i] != '\0'){
		i = i + '\n'; ///This is the single worst line I've ever written
		count++;
	}
	cout<<count<<" Lines"<<endl;
}

void countChar(char *pName){
	int i = 0;
	while(pName[i] != '\0'){
		i++;
	}
	cout<<i<<" Characters"<<endl;
}
