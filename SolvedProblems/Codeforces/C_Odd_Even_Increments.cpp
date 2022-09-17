#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    private:

    int n;
    vector<int>array;

    public:

    Solution(int t)
    {
        for(int i=0;i<t;i++){
            solve();
        }
    }

    void solve(){
        cin>>n;
        vector<int>temp(n);
        array=temp;
        for(int& i:array)cin>>i;
        int oddCount=0,evenCount=0;
        int totalOdd=0,totalEven=0;
        for(int i=0;i<n;i++){
            if(array[i]%2)totalOdd++;
            else totalEven++;
        }
        if(totalOdd==n || totalEven==n){
            cout<<"YES"<<endl;
            return;
        }
        for(int i=0;i<n;i+=2){
            if(array[i]%2)oddCount++;
            else evenCount++;
        }
        if(oddCount && evenCount){
            cout<<"NO"<<endl;
        }
        else{
            if(oddCount){
                int evenCount=0;
                for(int i=1;i<n;i+=2){
                    if(!(array[i]%2)){
                        evenCount++;
                    }
                }
                if(evenCount==n-oddCount){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                int oddCount=0;
                for(int i=1;i<n;i+=2){
                    if(array[i]%2){
                        oddCount++;
                    }
                }
                if(oddCount==n-evenCount){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }


};

int main(void){
    int testCase;
    cin>>testCase;
    Solution runner=Solution(testCase);
    return 0;
}