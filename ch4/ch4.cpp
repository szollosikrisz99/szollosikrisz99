#include "std_lib_facilities.h"

void unit_to_meter(double &x, std::string unit);

bool wrong_unit_error(std::string unit);

void print_vector(Vector<double> values);


int main(){

    double x;
    double smallest_value;
    double largest_value;
    double sum_of_values = 0;
    std::string unit;
    int value_count = 0;
    Vector<double> values;

    std::cout<<"Please enter several values in different units"<<std::endl;
    std::cout<<"Allowed units: metres ('m'), centimetres ('cm'), feet ('ft'), inches ('in')"<<std::endl;
    std::cout<<"Sample: '12 m' , Do not forget to use space between the value and the unit!"<<std::endl;
    std::cout<<"To stop the input, enter '|' "<<std::endl;


    std::cin>>x>>unit;

    if(wrong_unit_error(unit)) {
        unit_to_meter(x, unit);
        smallest_value = x;
        largest_value = x;
        ++value_count;
        sum_of_values += x;
        values.push_back(x);
    }



    while(std::cin>>x>>unit) {

        if(wrong_unit_error(unit)) {

            unit_to_meter(x, unit);

            if (x < smallest_value) {
                smallest_value = x;
                std::cout << "smallest so far" << std::endl;
            } else if (x > largest_value) {
                largest_value = x;
                std::cout << "largest so far" << std::endl;
            }

            values.push_back(x);
            sum_of_values += x;
            ++value_count;
        }

    }


    std::cout<<"Smallest value in metres: "     <<smallest_value    <<std::endl;
    std::cout<<"Largest value in metres: "      <<largest_value     <<std::endl;
    std::cout<<"Values entered successfully: "  <<value_count       <<std::endl;
    std::cout<<"Sum of values: "                <<sum_of_values     <<std::endl;
    std::cout<<"Every value sorted: ";

    std::sort(values.begin(), values.end());
    print_vector(values);
    
    std::cout<<std::endl;




return 0;
}



void unit_to_meter(double &x, std::string unit){

    if(unit == "m"){
        x = 1*x;
    }
    else if(unit == "cm"){
        x = x/100;
    }
    else if(unit == "in"){
        x = x*2.54/100;
    }
    else if(unit == "ft"){
        x = x*12*2.54/100;
    }

}

bool wrong_unit_error(std::string unit) {

    if(unit != "m" && unit != "cm" && unit != "in" && unit != "ft"){

        std::cout<<"Error! Wrong unit used. Please try again!"<<std::endl;

        return false;
    }

    return true;
}

void print_vector(Vector<double>  values) {

    for(int i = 0; i<values.size(); ++i){
        std::cout<<values[i]<<" ";
    }

}
