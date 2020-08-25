#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int main() {
string str;

transform(str.begin(),str.end(),str.begin(), :: tolower);
int len=str.length();
for(int i=0;i<len;i++){
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
		continue;
	else
	{
		str+='.';
	}
   return 0;
}