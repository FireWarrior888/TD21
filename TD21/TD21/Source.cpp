#include <iostream>
#include <vector>

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
    float b2 = 5;
    Vector2 v = { 8,8 };

    Vector2 result1 = Vector2().AddVector2f(a, b);
    Vector2 result2 = Vector2().SubstractVector2f(a, b);
    Vector2 result3 = Vector2().MultiplyVector2f(a, b2);
    Vector2 result4 = Vector2().DivideVector2f(a, b2);
    Vector2 result5 = Vector2().Normalize(v);
    float result6 = Vector2().GetNorme(a);
    float result7 = Vector2().GetDistance(a, b);
    float result8 = Vector2().GetSignedAngleBetween(a, b);


    std::cout << "Hello World!\n";
    std::cout << result1.x << ", " << result1.y << std::endl;
    std::cout << result2.x << ", " << result2.y << std::endl;
    std::cout << result3.x << ", " << result3.y << std::endl;
    std::cout << result4.x << ", " << result4.y << std::endl;
    std::cout << result5.x << ", " << result5.y << std::endl;
    std::cout << result6 << std::endl;
    std::cout << result7 << std::endl;
    std::cout << result8 << std::endl;
}

Vector2::Vector2()
{
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
