//In the name of Allah, The Lord of Mercy, The Giver of Mercy
//Author: Mirza Mohammad Azwad
//Institution: Islamic University of Technology
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#define ll int64_t
#define Short int16_t
#define Int int32_t
#define endl "\n"
 
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 
 string findSum(string str1, string str2)
            {
                if (str1.length() > str2.length())swap(str1, str2);
                string str = "";
                int n1 = str1.length(), n2 = str2.length();
                int diff = n2 - n1;
                int carry = 0;
                for (int i=n1-1; i>=0; i--)
                {
                    int sum = ((str1[i]-'0') +
                            (str2[i+diff]-'0') +
                            carry);
                    str.push_back(sum%10 + '0');
                    carry = sum/10;
                }
                for (int i=n2-n1-1; i>=0; i--)
                {
                    int sum = ((str2[i]-'0')+carry);
                    str.push_back(sum%10 + '0');
                    carry = sum/10;
                }
                if (carry)str.push_back(carry+'0');
                reverse(str.begin(), str.end());
                return str;
            }

            bool string_comparator(string s1,string s2){
                if(s1.size()==s2.size()){
                    return s1<s2;
                }
                else{
                    return s1.size()<s2.size();
                }
            }

            bool string_comparable(string s1,string s2){
                if(s1.length()>s2.length()){
                    return true;
                }
                else if(s1.length()<s2.length()){
                    return false;
                }
                else{
                    if(s1>s2){
                        return true;
                    }
                }
                return false;
            }

namespace Problem{
    class Program{
        private:
            int N;
            vector<string>nums;
            unordered_set<string>s;
        public:
            Program(Int t=1){
                for(Int i=1;i<=t;i++){
                    takeInput();
                    solve();
                    clearSpace();
                }
            }
 
            void takeInput(){
                cin>>N;
                set<string>s;
                for(int i=0;i<N;i++){
                    string temp;
                    cin>>temp;
                    nums.push_back(temp);
                }
            }
 
            void clearSpace(){
                nums.clear();
            }

            void print_default(){
                cout<<0<<" "<<0<<" "<<0<<endl;
            }

            void print_ans(string a,string b, string c){
                cout<<a<<" "<<b<<" "<<c<<endl;
            }

            void solve(){
                N<3?print_default():solve_helper();
            }

            void solve_helper(){
                sort(nums.begin(),nums.end(),string_comparator);
                for(int i=0;i<N-2;i++){
                    if(string_comparable(findSum(nums[i],nums[i+1]),nums[i+2]) ){
                        print_ans(nums[i+2],nums[i],nums[i+1]);
                        return;
                    }
                }
                print_default();
                
            }
    };
}
signed main()
{
    fastio;
    Problem::Program program=Problem::Program();
    return 0;
}