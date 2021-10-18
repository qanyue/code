#include<iostream>
#include<vector>
#include<string>
#include<array>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <string> a{"Ahola","World","Welcome","to","C++"," JAVA"," C"};
    for(auto i : a)
    {
        cout << i << " ## ";
    }
    cout << "\n";
//删除最后一个元素
    a.pop_back();
     for(auto i : a)
    {
        cout << i << " ## ";
    }
    cout << "\n";
//使用迭代器拷贝
    vector<string> a2(a.begin(),a.begin()+2);
    
     for(auto i : a2)
    {
        cout << i << " ## ";
    }
    cout << "\n";
//插入元素
    a.insert(a.begin()+5,"and");
     for(auto i : a)
        {
            cout << i << " ## ";
        }
        cout << "\n";
//
    vector<int> time(4,10);
    vector<int> time2(time);
     for(auto i : time2)
        {
            cout << i << " ## ";
        }
        cout << "\n";

    return 0;
}
