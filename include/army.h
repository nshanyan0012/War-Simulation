#include <iostream>
class Ten_Unit {
private: 
    //pointer to the all tyoes of soldersders
    //sum of all solders int this unit must have 10 solders; 
public:
    Ten_Unit();//create array of the solders;
    ~Ten_Unit();
};
class Hundred_Unit :public Ten_Unit{
private:
    Ten_Unit* tens;
public:
    Hundred_Unit();
    ~Hundred_Unit();
};
class Selected_By_Shape() : public Hundred_Unit{
private:
    Hundred_Unit* hundreds;
    //There  will be the loders that shape will select 
    public:
    Selected_By_Shape();
    ~Selected_By_Shape();
};
class Whole_Army : public Selected_By_Shape{
private:

public:  
    Whole_Army();
    ~Whole_Army();
};
int main()
{
    
    return 0;
}
