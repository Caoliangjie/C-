#include<iostream>
#include<string.h>
using namespace std;
char strcmp(string s1,string s2)
{
int i = 0;
char result;
while (s1[i] != '\0' && (s1[i] == s2[i])){
    i++;//这里说明只对比大小一样的?
}
if (s1[i] > s2[i]) {
    result = '>';
} else if (s1[i] < s2[i]) {
    result = '<';
} else{
    result = '=';
}
}
int main(){
char s1[80],s2[80];
    cin.getline(s1,80);
    cin.getline(s2,80);
    for (int i=0;i<80;i++)
    {if(s1[i]>='A'&&s1[i]<='Z')
        s1[i]=s1[i]+32;
     if (s2[i]>='A'&&s2[i]<='Z')//实在不想敲就统一变大写?
        s2[i]=s2[i]+32;
    }
	int i = 0;
	char result;
	if (strcmp(s1, s2) == 0)
        result = '=';
    if (strcmp(s1, s2) > 0)
        result = '>';
     if (strcmp(s1, s2) <0)
      result = '<';
    cout << result << endl;
     return 0; }


