#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    //char s[100];
    string s;
    cin>>n;
    int j=0;
    while(j<n)
    {
        cin>>s;
        int i=0;
    again:
      while(i<s.length() || i!='\n')
      {
        if(s[i]=='{')
        {
            for(int k=i+1;k<s.length()-(i+1);k++)
            {
                if(s[k] == '}')
                {
                    i++;
                    ///s.erase(s.begin() + k);
                    for (int l = k; i < s.length()-k; l++)
                            s[l] = s[l + 1];                                    //removing element
                    goto again;
                }
            }
            cout<<"Not Balanced :'("<<endl;
            goto here;
        }

        if(s[i]=='(')
        {
            for(int k=i+1;k<s.length()-(i+1);k++)
            {
                if(s[k] == ')')
                {
                    i++;
                    ///s.erase(s.begin() + k);
                    for (int l = k; i < s.length()-k; l++)
                            s[l] = s[l + 1];                                    //removing element
                    goto again;
                }
            }
            cout<<"Not Balanced :'("<<endl;
            goto here;
        }

        if(s[i]=='[')
        {
            for(int k=i+1;k<s.length()-(i+1);k++)
            {
                if(s[k] == ']')
                {
                    i++;
                    ///s.erase(s.begin() + k);
                    for (int l = k; i < s.length()-k; l++)
                            s[l] = s[l + 1];                                    //removing element
                    goto again;
                }
            }
            cout<<"Not Balanced :'("<<endl;
            goto here;
        }

        if(s[i]=='<')
        {
            for(int k=i+1;k<s.length()-(i+1);k++)
            {
                if(s[k] == '3')
                {
                    i++;
                    ///s.erase(s.begin() + k);
                    for (int l = k; i < s.length()-k; l++)
                            s[l] = s[l + 1];                                    //removing element
                    goto again;
                }
            }
            cout<<"Not Balanced :'("<<endl;
            goto here;
        }

    }
    cout<<"Balanced <3"<<endl;
        here :
       j++;
}
return 0;
}
