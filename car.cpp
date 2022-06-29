#include<iostream>
using namespace std;
class car{
int tyre;   //int car::tyre' is private within this context
    public:
    // private:            //access specifier //bydefualt all dm , mf private 
    // public:
    void setTyre(int n) //setter
    {
        tyre = n;
    }
    int getTyre() //getter
    {
        return tyre ;
    }
};
int main()
{
    car alto;
    alto.setTyre(4);
    cout<<alto.getTyre();
    
}