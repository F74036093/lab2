#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
class BMI{
public:
    BMI();
    void set_height(int height_f);
    void set_mass(int mass_f);
    float re_bmi();
    string re_category();
private:
    float height;
    float mass;
    float bmi;
};
