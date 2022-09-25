#include <iostream>
#include <map>
using namespace std;


int main()
{

    map<int, string> m;
    m[0] = "Arvi";
    m[5] = "K1";
    m[3] = "K2";
    m.insert({10, "S1"});   // O(log n)    also depends upon key datatype (int here)
                            //  for strings it'll be s.size()* log n    ->  s = string key to be inserted and n = map size

    map<int, string> :: iterator it;
    cout<<m.size()<<endl;
    // nlong n
    for(it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;   // O(long n)
       }

    m[5] = "k11";

    // easier to use
    // soft copy 
    cout<<endl<<"soft copy*****"<<endl;
    for(auto pair: m){
            cout<<pair.first<<" "<<pair.second<<endl;
    }

    // using referances
    cout<<endl<<"using referances****"<<endl;
    for(auto &pair: m){
        cout<<pair.first<<" "<<pair.second<<endl;
    }

    // find 
    // returns iterator 
    // returns m.end() if not presesnt

    cout<<endl<<"find***"<<endl;
    it = m.find(3);   // O(log n)
    cout << it -> first<<" "<<it->second; 

    cout<<endl<<"erase***"<<endl;
    // takes both key and iterator as input
    // O(log n)

    // key input 
    m.erase(5);

    // iterator input
    // if iterator points to m.end() will give segmentation fault
    m.erase(it);

    cout<<endl;
    for(auto &pair: m){
        cout<<pair.first<<" "<<pair.second<<endl;
    }

    // empty everything
    m.clear();

        cout<<endl;
    for(auto &pair: m){
        cout<<pair.first<<" "<<pair.second<<endl;
    }





    return 0;
}

