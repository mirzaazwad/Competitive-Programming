/*
Nazia Karim Khan Oishee
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool arr[10]={0};
    for(int i=0;i<s.size();i++)
    {
            //cout<<"tt";
        if(s[i]>='0' && s[i]<='9')
        {
            arr[(int)i]=0;
        }
        else if(s[i]=='L')
        {
            for(int i=0; arr[i]==0 &&i<=9 ;i++)
            {
                arr[i]=1;
            }
        }
        else
        {
            for(int i=9; arr[i]==0 &&i>=0 ;i++)
            {
                arr[i]=1;
            }
        }
    }
     for(int i=0; i<=9; i++)
     {
         cout<<arr[i];
     }
    return 0;
    }
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len=s.length();
    bool arr[10];
    for(int i=0;i<len;i++){
        if(s[i]>='0' && s[i]<='9'){
            arr[s[i]-'0']=0;
            ;
        }
        else if(s[i]=='L'){
            for(int i=0;i<10;i++){
                if(arr[i]==0){
                    arr[i]=true;
                    break;
                }
            }
        }
        else{
             for(int i=9;i>=0;i--){
                if(arr[i]==0){
                    arr[i]=true;
                    break;
                }
            }
        }
    }
    for(int  i=0;i<10;i++){
        cout<<arr[i];
    }
    cout<<endl;
}