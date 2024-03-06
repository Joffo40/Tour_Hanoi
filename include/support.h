#ifndef SUPPORT_H
#define SUPPORT_H
#include <string>

using namespace std;


class Support
{
    public:
        Support(string rang1,string rang2, string rang3);
        virtual ~Support();

        string Getm_Rang1() { return m_Rang1; }
        void Setm_Rang1(string val) { m_Rang1 = val; }

        string Getm_Rang2() { return m_Rang1; }
        void Setm_Rang2(string val) { m_Rang2 = val; }

        string Getm_Rang3() { return m_Rang3; }
        void Setm_Rang3(string val) { m_Rang3 = val; }


    protected:

    private:

        string m_Rang1;
        string m_Rang2;
        string m_Rang3;
};

#endif // SUPPORT_H
