#include <stdio.h>
#include <stdint.h>
#include <math.h>
using namespace std;

class Calendar{
    private:
        int8_t Day;
        int8_t Month;
        int16_t Year;
    public:
        int8_t get_Day();
        int8_t get_Month();
        int16_t get_Year();
        void Set_Calendar(int8_t Day, int8_t Month, int16_t Year);
};

void Calendar::Set_Calendar(int8_t Day, int8_t Month, int16_t Year ){
    this->Day = Day;
    this->Month = Month;
    this->Year = Year;
}

int8_t Calendar::get_Day(){
    return this->Day;
}

int8_t Calendar::get_Month(){
    return this->Month;
}

int16_t Calendar::get_Year(){
    return this->Year;
}

class Calendar_Cal{
    private:
        Calendar A;
        Calendar Person;
    public:
        Calendar_Cal(Calendar A, Calendar Person);
        void Age_Cal(Calendar A, Calendar Person);
        void Holiday_or_not(Calendar A);
};

Calendar_Cal::Calendar_Cal(Calendar A, Calendar Person){
    this->A = A;
    this->Person = Person;
}

void Calendar_Cal::Age_Cal(Calendar A, Calendar Person){
    int result = A.get_Year() - Person.get_Year();
     printf("The Age of Person is %d\n",result); 
}

void Calendar_Cal::Holiday_or_not(Calendar A){
    if(A.get_Day() == 10 && A.get_Month() == 3) printf("That day is a holiday");
    else if(A.get_Day() == 26 && A.get_Month() == 3) printf("That day is a holiday");
    else if(A.get_Day() == 30 && A.get_Month() == 4) printf("That day is a holiday");
    else if(A.get_Day() == 1 && A.get_Month() == 5) printf("That day is a holiday");
    else if(A.get_Day() == 1 && A.get_Month() == 6) printf("That day is a holiday");
    else  printf("That day isn't a holiday");
}


int main(int argc, char const *argv[])
{
    Calendar A,Person;
    A.Set_Calendar(6,5,2023);
    Person.Set_Calendar(18,11,2001); 
    Calendar_Cal Cal(A,Person);
    Cal.Age_Cal(A,Person);
    Cal.Holiday_or_not(A);
    return 0;
}
