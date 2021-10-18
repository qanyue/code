#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
    string input;
    input.resize(1000);
    scanf("%s", &input[0]);
    
    int digit=0,alpha=0,blank=0,others=0;
    for(auto x : input){
        if(isdigit(x)){
            ++digit;
        }else if(isalpha(x)){
            ++alpha;
        }else if(isspace(x)){
            ++blank;
        }else{
            ++others;
        }
    }
    print("%d %d %d %d",blank,digit,alpha,others);
    
    return 0;
}
