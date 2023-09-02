#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "ab#c"; 
    string t = "ad#c";

    string::iterator it;
    it = s.begin();
    while (it != s.end()){
        if (*it == '#' && it != s.begin()){
            it = s.erase(it - 1);
            it = s.erase(it);
        }
        else{
            it++;
        }
    }
    it = s.begin();
    while (it != s.end()){
        if (*it == '#'){
            it = s.erase(it);
        }
        else{
            it++;
        }
    }

    it = t.begin();
    while (it != t.end()){
        if (*it == '#' && it != t.begin()){
            it = t.erase(it - 1);
            it = t.erase(it);
        }
        else{
            it++;
        }
    }
    it = t.begin();
    while (it != t.end()){
        if (*it == '#'){
            it = t.erase(it);
        }
        else{
            it++;
        }
    }

    return (s == t);
}