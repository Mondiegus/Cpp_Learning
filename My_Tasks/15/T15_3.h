#include <iostream>
#include <exception>
#include <stdexcept>
#include <cmath>

class bad_base : public std::logic_error
{
    private:
        double vi;
        double v2;

    public:
        bad_base(std::string Message, double a = 0, double b = 0) : logic_error(Message.c_str()), vi(a), v2(b) {}
        bad_base(const char * Message, double a = 0, double b = 0) : logic_error(Message), vi (a) , v2 (b) {}

        virtual double get_vi() {return vi;}
        virtual double get_v2() {return v2;}
};

class bad_hmean : public bad_base
{
    public:
        bad_hmean (std::string Message, double a = 0, double b = 0) : bad_base(Message, a, b) {}
        bad_hmean (const char * Message, double a = 0, double b = 0) : bad_base(Message, a, b) {}
};

class bad_gmean : public bad_base
{
    public:
        bad_gmean (std::string Message, double a = 0, double b = 0) : bad_base(Message, a, b) {}
        bad_gmean (const char * Message, double a = 0, double b = 0) : bad_base(Message, a, b) {}
};