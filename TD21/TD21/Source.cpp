#include <iostream>
#include <vector>
#include <exception>
#include <string>
#include <cassert>

class erreur : public std::exception
{
public:
    erreur(int line , std::string file ,std::string const& phrase = "") throw()
        :m_phrase(phrase)
    {
        m_phrase = "Division par zero  ,  niveau d'erreur : 2  ,  ligne : " + std::to_string(line) + "  " + file;
    }
    
    const char* what() const throw()
    {
        return m_phrase.c_str();
    }

   ~erreur(){};

private:
    
    std::string m_phrase; //description de l'erreur
};

class Vector2
{
public:
    float x;
    float y;

    Vector2();
    Vector2(float _x, float _y);
    ~Vector2();

    Vector2 AddVector2f(Vector2 a, Vector2 b);

    Vector2 SubstractVector2f(Vector2 a, Vector2 b);

    Vector2 MultiplyVector2f(Vector2 a, float b);

    Vector2 DivideVector2f(Vector2 a, float b);

    Vector2 Normalize(Vector2 v);

    float GetDistance(Vector2 a, Vector2 b);

    float GetNorme(Vector2 a);

    float GetSignedAngleBetween(Vector2 a, Vector2 b);


private:

};


int main()
{
    Vector2 a = { 5,-5 };
    Vector2 b = { 5,5 };
    float b2 = 0;
    Vector2 v = { 8,8 };


    Vector2 resultat1 = Vector2().AddVector2f(a, b);
    Vector2 resultat2 = Vector2().SubstractVector2f(a, b);
    Vector2 resultat3 = Vector2().MultiplyVector2f(a, b2);
    Vector2 resultat4;
    Vector2 resultat5 = Vector2().Normalize(v);
    float resultat6 = Vector2().GetNorme(a);
    float resultat7 = Vector2().GetDistance(a, b);
    float resultat8 = Vector2().GetSignedAngleBetween(a, b);

   // std::cout << "Hello World!\n";

    try
    {
        Vector2().DivideVector2f(a, b2);
    }
    catch (const erreur& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << resultat1.x << ", " << resultat1.y << std::endl;
    std::cout << resultat2.x << ", " << resultat2.y << std::endl;
    std::cout << resultat3.x << ", " << resultat3.y << std::endl;
    std::cout << resultat4.x << ", " << resultat4.y << std::endl;
    std::cout << resultat5.x << ", " << resultat5.y << std::endl;
    std::cout << resultat6 << std::endl;
    std::cout << resultat7 << std::endl;
    std::cout << resultat8 << std::endl;

    //boucle qui crée trop d'éléments et dont le test arrete le processus pour protéger le programme
    std::vector<Vector2*> testing;
    int compteur = 0;
    std::string tmp = "fuite de memoire potentielle.";
    while (1)
    {
        Vector2* vec = new Vector2();
        testing.push_back(vec);
        compteur = testing.size();
       
    }
    assert(testing.size() < 100);
}

Vector2::Vector2()
{
    x = 0;
    y = 0;
}

Vector2::Vector2(float _x, float _y)
{
    x = _x;
    y = _y;
}

Vector2::~Vector2()
{
}

Vector2 Vector2::AddVector2f(Vector2 a, Vector2 b)
{
    Vector2 addVector2 = { a.x + b.x, a.y + b.y };
    return addVector2;
}

Vector2 Vector2::SubstractVector2f(Vector2 a, Vector2 b)
{
    Vector2 substractVector2 = { b.x - a.x, b.y - a.y };
    return substractVector2;
}

Vector2 Vector2::MultiplyVector2f(Vector2 a, float b)
{
    Vector2 multiplyVector2 = { a.x * b, a.y * b };
    return multiplyVector2;
}

Vector2 Vector2::DivideVector2f(Vector2 a, float b)
{
   if(b == 0)
       throw erreur(__LINE__, __FILE__, "division par zero" );
    Vector2 divideVector2 = { a.x / b, a.y / b };
    return divideVector2;
}

Vector2 Vector2::Normalize(Vector2 v)
{
    if (GetNorme(v) != 0)
        return DivideVector2f(v, GetNorme(v));
    else
        return Vector2();

}

float Vector2::GetDistance(Vector2 a, Vector2 b)
{
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

float Vector2::GetNorme(Vector2 a)
{
    return sqrt(a.x * a.x + a.y * a.y);
}

float Vector2::GetSignedAngleBetween(Vector2 a, Vector2 b)
{
    return atan2f(a.x * b.y - a.y * b.x, a.x * b.x + a.y * b.y);
}
