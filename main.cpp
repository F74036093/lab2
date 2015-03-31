
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
    if(!inFile || !outFile){
        cerr<<"failed opening"<<endl;
        exit(1);
    }
        while(inFile>>h>>m){
            if(h == 0){
                break;
            }
            func.set_height(h);
            func.set_mass(m);
            bmi = func.re_bmi();
            cate = func.re_category();
            outFile<<bmi<<"\t"<<cate<<endl;
        }
    
    
    
    return 0;
}
