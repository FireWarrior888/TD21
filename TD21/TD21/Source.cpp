#include "Vector2.h"


int main()
{
   Vector2 a = { 5,-5 };
    Vector2 b = { 5,5 };
    float b2 = 5;
    Vector2 v = { 8,8 };

    Vector2 result1 = Vector2().AddVector2f(a, b);
    /* Vector2 result2 = Vector2().SubstractVector2f(a, b);
    Vector2 result3 = Vector2().MultiplyVector2f(a, b2);
    Vector2 result4 = Vector2().DivideVector2f(a, b2);
    Vector2 result5 = Vector2().Normalize(v);
    float result6 = Vector2().GetNorme(a);
    float result7 = Vector2().GetDistance(a, b);
    float result8 = Vector2().GetSignedAngleBetween(a, b);*/


    std::cout << "Hello World!\n";
   std::cout << result1.x << ", " << result1.y << std::endl;
   /*  std::cout << result2.x << ", " << result2.y << std::endl;
    std::cout << result3.x << ", " << result3.y << std::endl;
    std::cout << result4.x << ", " << result4.y << std::endl;
    std::cout << result5.x << ", " << result5.y << std::endl;
    std::cout << result6 << std::endl;
    std::cout << result7 << std::endl;
    std::cout << result8 << std::endl;*/
}
