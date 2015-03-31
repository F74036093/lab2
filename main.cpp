
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "BMI.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    BMI func;
    int h, m;
    float bmi;
    string cate;
    
    ifstream inFile("file.in", ios::in);
    ofstream outFile("file.out", ios::out);
    if(!outFile || !inFile){
        cerr<<"failed opening"<<endl;
        exit(1);
    }
        while(inFile>>h>>m){
            func.set_height(h);
            func.set_mass(m);
            bmi = func.re_bmi();
            cate = func.re_category();
            outFile<<bmi<<"\t"<<cate<<endl;
        }
    
    
    
    return 0;
}
