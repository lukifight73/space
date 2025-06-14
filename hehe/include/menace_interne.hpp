#pragma once

#include "menace.hpp"

class menace_interne :public menace
{
    protected:
    bool    m_position_haut;
    int     m_killAction;

    public:
        menace_interne();
        menace_interne(std::string input, int tourDarrivee);
        void setPositionhaut(bool position) 
        { m_position_haut = position;};
        bool getPositionhaut() 
        { return m_position_haut;};
        virtual void print_menace() const;
        virtual bool AttractAction(int joueurAction, int Zone, bool haut) const;
        virtual void getDamage(joueur *joueur);
        virtual ~menace_interne();
};

class menace_interne_i1_01 :public menace_interne
{
    protected:

    public:
        menace_interne_i1_01() {};
        menace_interne_i1_01(std::string input, int tourDarrivee): menace_interne(input, tourDarrivee) {};
        virtual void getDamage(joueur *joueur);
        virtual void actionMenace(char input);
        ~menace_interne_i1_01() {};
};

class menace_interne_i1_02 :public menace_interne
{
    protected:

    public:
        menace_interne_i1_02() {};
        menace_interne_i1_02(std::string input, int tourDarrivee): menace_interne(input, tourDarrivee) {};
        virtual void getDamage(joueur *joueur);
        virtual void actionMenace(char input);
        ~menace_interne_i1_02() {};
};

class menace_interne_i1_03 :public menace_interne
{
    protected:

    public:
        menace_interne_i1_03() {};
        menace_interne_i1_03(std::string input, int tourDarrivee): menace_interne(input, tourDarrivee) {};
        virtual void actionMenace(char input);
        ~menace_interne_i1_03() {};
};

class menace_interne_i1_04 :public menace_interne
{
    protected:

    public:
        menace_interne_i1_04() {};
        menace_interne_i1_04(std::string input, int tourDarrivee): menace_interne(input, tourDarrivee) {};
        virtual void actionMenace(char input);
        ~menace_interne_i1_04() {};
};
