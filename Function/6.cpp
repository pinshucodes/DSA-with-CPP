//checking the age limit for voting
#include<iostream>
using namespace std;
bool checkEligibility(int age,int limit){
        if(age>=limit){
            return true;
        } else{
            return false;
        }
    }
int main(){
    int n;
    cout<<"enter the age of person:";
    cin>>n;
    int voting_limit=18;
    int is_eligible_for_voting=checkEligibility(n,voting_limit);
    if(is_eligible_for_voting){
        cout<<"yes the current person is eligible to vote";
    } else{
        cout<<"no the current person is not eligilbe to vote";
    }
    return 0;
}