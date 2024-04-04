#include <iostream>
#include <cmath>

using namespace std;

//Simple Calculator
class SimpleCalculator
{
private:

    double x;
    double y;


public:

    SimpleCalculator()
    {
        x = 0.0;
        y = 0.0;
    }

    void input_simple()
    {
        cout << "\t Enter the value of x : ";
        cin >> x;
        cout << "\t Enter the value of y : ";
        cin >> y;
        cout << endl;
    }

    void print_simple() const
    {
        cout << "\t x  = " << x;
        cout << "\t y  = " << y << endl;
        cout << endl;
    }

    void simple_functions() const
    {
        cout << "\t (x+y) = " << addition(x, y) << endl;
        cout << "\t (x-y) = " << subtraction(x, y) << endl;
        cout <<"\t (x*y) = " << multiplication(x, y) << endl;
        cout << "\t (x/y) = ";

        double d{ division(x, y) };
        if (d == 0.0)
        {
            cout << " undefined" << endl;
        }

        else
        {
            cout << d << endl;
        }
       
        cout << endl;
    }

    double addition(const double n1, const double n2) const
    {
        return static_cast<double>(n1 + n2);
    }

    double subtraction(const double n1, const double n2) const
    {
        return static_cast<double>(n1 - n2);
    }

    double multiplication(const double n1, const double n2) const
    {
        return static_cast<double>(n1 * n2);
    }

    double division(const double n1, const double n2) const
    {
        if (n2 != 0)
        {
            return static_cast<double>(n1 / n2);
        }
        else
        {
            return 0.0;
        }


        
    }
};

//Scientific Calculator
class ScientificCalculator
{
private:

    double x;
    double y;


public:

    ScientificCalculator()
    {
        x = 0.0;
        y = 0.0;
    }

    void input_scientific()
    {
        cout << "\t Enter the value of x : ";
        cin >> x;
        cout << "\t Enter the value of y : ";
        cin >> y;
        cout << endl;
    }

    void print_scientific() const
    {
        cout << "\t x  = " << x;
        cout << "\t y  = " << y << endl;
        cout << endl;
    }

    void scientific_functions() const
    {
        cout << "\t sin(x) = " << calculate_sin(x);
        cout << "\t sin(y) = " << calculate_sin(y);
        cout << endl;

        cout << "\t cos(x) = " << calculate_cos(x);
        cout << "\t cos(y) = " << calculate_cos(y);
        cout << endl;

        cout << "\t tan(x) = " << calculate_tan(x);
        cout << "\t tan(y) = " << calculate_tan(y);
        cout << endl;

        cout << "\t exp(x) = " << calculate_exp(x);
        cout << "\t exp(y) = " << calculate_exp(y);
        cout << endl;

        cout << endl;
    }

    double calculate_sin(const double n1) const
    {
        return static_cast<double>(sin(n1));
    }

    double calculate_cos(const double n1) const
    {
        return static_cast<double>(cos(n1));
    }

    double calculate_tan(const double n1) const
    {
        return static_cast<double>(tan(n1));
    }

    double calculate_exp(const double n1) const
    {
        return static_cast<double>(exp(n1));
    }
};

//Hybrid Calculator
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{

};


//Main Function
int main()
{
    HybridCalculator H1;
    cout << endl << endl;

    cout << "\t\t*Simple Operations*" << endl << endl;
    H1.input_simple();
    H1.print_simple();
    H1.simple_functions();

    cout << endl;

    cout << "\t\t*Scientific Operations*" << endl << endl;
    H1.input_scientific();
    H1.print_scientific();
    H1.scientific_functions();

    cout << endl;


    return 0;
}