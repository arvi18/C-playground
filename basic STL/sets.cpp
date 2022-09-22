#include <iostream>
#include <map>
using namespace std;


int main()
{

    map<int, string> m;
    m[0] = "Arvi";
    m[5] = "K1";
    m[3] = "K2";

    map<int, string> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
       }
    cout<<endl;

    // easier to use
    // soft copy 
    for(auto pair: m){
            cout<<pair.first<<" "<<pair.second<<endl;
    }
    cout<<endl;

    // using referances
    for(auto &pair: m){
        cout<<pair.first<<" "<<pair.second<<endl;
    }

    return 0;
}

