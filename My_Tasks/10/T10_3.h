#include <cstring>


class Golf
{
    private:
        static const int Len = 40;
        char fullname[Len];
        int handicap;

    public:
        Golf() { strcpy(fullname, "unname");}
        Golf(const char * name, int hc);
        void setgolt(const char * name, int hc);
        void setgolt();
        void handicapset(int hc);
        void showgolf() const;
};
