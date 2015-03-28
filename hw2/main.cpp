//
//  main.cpp
//  hw2
//
//  Created by hungyu hang on 2015/3/28.
//  Copyright (c) 2015年 hungyu hang. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
class BMI{
public:
    BMI(){
        height = 0;
        mass = 0;
    }
    void set_height(int height_f){
        height = (float)height_f;
    }
    void set_mass(int mass_f){
        mass = (float)mass_f;
    }
    float re_bmi(){
        bmi = mass/(height*height);
        return bmi;
    }
    string re_category(){
        if(bmi >= 40){
            return "Obese Class III (Very severely obese)";
        }else if(bmi >= 35){
            return "Obese Class II (Severely obese)";
        }else if(bmi >=30){
            return "Obese Class I (Moderately obese)";
        }else if(bmi >= 25){
            return "Overweight";
        }else if(bmi >= 18.5){
            return "Normal";
        }else if(bmi >= 16){
            return "Underweight";
        }else if(bmi >= 15){
            return "Severely underweight";
        }else{
            return "Very severely underweight";
        }
    }
private:
    float height;
    float mass;
    float bmi;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
