#include <iostream>
using namespace std;

class remoteLampu{
    private:
    string skalarNo[10];
    public:
    void setSaklarNo(int i, string value){
        skalarNo[i] = value;
    }
    string getSaklarNo(int i){
        return skalarNo[i];
    }

};