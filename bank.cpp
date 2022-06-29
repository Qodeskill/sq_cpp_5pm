l̥#include<iostream>
using namespace std;
class bank
{
private:
    int bal;
public:
    bank(int n)
    {
        bal=n;
    }
    void showBal()
    {
        cout<<" \n Balance :  "<<bal;
    }
};
int main()
{
    bank meet(1000),tejasvi(1100);
    meet.showBal();
    tejasvi.showBal();
}