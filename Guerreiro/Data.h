#ifndef DATA_H
#define DATA_H
class Data
{
    
public:
    Data(int = 1, int = 1 , int = 1900);
    Data(const Data &);
    ~Data();
    
    void exibirData () const;
    int getday() const;
    int getmonth() const;
    int getyear() const;
    void setday(int);
    void setmonth(int);
    void setyear(int);
private:
        int month;
        int day;
        int year;
        
        int checkday(int ) const;
};
#endif