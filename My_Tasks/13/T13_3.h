#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class baseClass
{
    private:
        char * label;
        int rating;
    public:
        baseClass(const char * l = "brak", int r = 0 );
        baseClass(const baseClass & rs);
        virtual ~baseClass() {delete [] label;};
        virtual baseClass & operator=(const baseClass & rs) = 0;
        virtual void show(void) = 0;
        friend std::ostream & operator<<(std::ostream &, const baseClass & rs);
};

class baseDMA : public baseClass
{
    public:
    baseDMA(const char * l = "brak", int r = 0 ) : baseClass(l, r) {};
    baseDMA(const baseDMA & rs) : baseClass(rs) {};
    virtual ~baseDMA() {};
    virtual baseDMA & operator=(const baseClass & rs) { baseClass::operator=(rs); return *this;}
    virtual void show(void) {baseClass::show();};
};

class lacksDMA : public baseClass
{
    private:
        enum {COL_LEN = 40};
        char color [COL_LEN] ;
    public:
        lacksDMA(const char * c = "brak", const char * l = "brak", int r = 0) ;
        lacksDMA(const char * c, const baseDMA & rs);
        virtual lacksDMA & operator=(const baseClass & rs) { baseClass::operator=(rs); return *this;}
        friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
        virtual void show(void) {baseClass::show();};
 } ;
// Klasa pochodna z dynamicznym przydziałem pamięci
class hasDMA : public baseClass
{
    private:
        char * style;
    public:
        hasDMA(const char * s = "brak", const char * l = "brak", int r = 0 );
        hasDMA(const char * s, const baseDMA & rs);
        hasDMA(const hasDMA & hs);
        ~hasDMA();
        virtual hasDMA & operator=(const baseClass & hs);
        friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
        virtual void show(void) {baseClass::show(); std::cout << "styl: " << style << std::endl;};
} ;
#endif