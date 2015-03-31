
#include "BMI.h"
BMI::BMI(){
        height = 0;
        mass = 0;
    }
BMI::void set_height(int height_f){
        height = (float)height_f;
    }
BMI::void set_mass(int mass_f){
        mass = (float)mass_f;
    }
BMI::float re_bmi(){
        bmi = mass/(height*height);
        return bmi;
    }
BMI::string re_category(){
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
