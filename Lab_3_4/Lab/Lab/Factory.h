//////////////////////////////////////////////////////////////////////////////
// Factory.h

#pragma once

#include "Triangle.h"
#include "Quadrate.h"

class Factory
    : public Triangle, public Quadrate
{
    private:
        Triangle* t;
        Quadrate* q;
public:
        Triangle GetTriangle() const { return (*t); };
        void SetTriangle(const Triangle val) { (*t) = val; };
        Quadrate GetQuadrate() const { return (*q); };
        void SetQuadrate(const Quadrate val) { (*q) = val; };

        Factory(const string id = "0", const string status = "created", const int x1 = 0, const int y1 = 0, const int x2 = 0, const int y2 = 0, const int x3 = 0, const int y3 = 0, const int x4 = 0, const int y4 = 0)
            : Triangle(id, status, x1, y1, x2, y2, x3, y3), Quadrate(id, status, x1, y1, x2, y2, x3, y3, x4, y4)
        {
            if (!t)
                t = new Triangle(id, status, x1, y1, x2, y2, x3, y3);
            if (!q)
                q = new Quadrate(id, status, x1, y1, x2, y2, x3, y3, x4, y4);
            //cout << typeid(t).name() << endl;
            //cout << typeid(q).name() << endl;
        };

        ~Factory()
        {
            if (t)
                delete t;
            if (q)
                delete q;
        };

        friend ostream& operator <<(ostream& out, const Factory& v);
        friend istream& operator >>(istream& in, Factory& v);

        friend bool Compare(const Factory& a, const Factory& b);

};

