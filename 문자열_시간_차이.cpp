#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){
    string a = "AM 07:28:17";
    string b = "AM 07:28:28";

    int resultsec=0;

    //시간 초로 변환

    int asec = atoi(a.substr(3,2).c_str())*3600 + 
        atoi(a.substr(6,2).c_str())*60 + atoi(a.substr(9,2).c_str());

    int bsec = atoi(b.substr(3,2).c_str())*3600 + 
        atoi(b.substr(6,2).c_str())*60 + atoi(b.substr(9,2).c_str());


    //초 빼기
    if(a.substr(0,2).compare(b.substr(0,2)) == 0){
        if(asec > bsec){
            resultsec = bsec + 3600*24 - asec;
        }
        else{
            resultsec = bsec - asec;
        }
    }

    else{
        resultsec = bsec + 3600*12 - asec;
    }

    //초를 시간형식으로 변환

    int rh = resultsec/3600;
    resultsec = resultsec%3600;
    int rm = resultsec/60;
    resultsec = resultsec%60;
    int rs = resultsec;

    //,":",to_string(rm),":",to_string(rs)
    string base = "";

    //printf("%d %d\n", to_string(rh).length(), rh);

    if(to_string(rh).length() == 1){
        base.append("0");
    }
    base.append(to_string(rh));
    base.append(":");
    if(to_string(rm).length() == 1){
        base.append("0");
    }
    base.append(to_string(rm));
    base.append(":");
    if(to_string(rs).length() == 1){
        base.append("0");
    }
    base.append(to_string(rs));

    cout << base <<endl;
    






}