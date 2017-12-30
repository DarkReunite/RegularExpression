#include <iostream>
#define MAX 100
using namespace std;

bool isMatch(const char *s, const char *p)
{
    if (p[0] == '\0')
        return (s[0] == '\0');
    
    if (p[1] == '*')
    {
        int j = 0;
        while (p[0] == s[j] || (p[0] == '.' && s[j] != '\0'))
        {
            if (isMatch(&s[j], &p[2]))
                return true;
            j++;
        }
        return(isMatch(&s[j], &p[2]));
        
    }
    else
        if ((p[0] == s[0] || p[0] == '.') && s[0] != '\0')
            return(isMatch(&s[1], &p[1]));
        else
            return false;
}

int main()
{
    
    char S[MAX];
    char P[MAX];
    while (true) {
        cout<<"请输入s的字符串："<<endl;;
        cin>>S;
        cout<<"请输入p的字符串："<<endl;
        cin>>P;

        cout<<(isMatch(S, P)?"true":"false")<<endl;
        cout<<endl;
    }
    
    return 0;
}
