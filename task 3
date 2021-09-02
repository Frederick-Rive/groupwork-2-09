#include <iostream>

int minmax(int input, int min, int max)
{
    return (input >= min) ? ((input <= max) ? input : max) : min;
}

float minmax(float input, float min, float max)
{
    return (input >= min) ? ((input <= max) ? input : max) : min;
}

class Shape
{
public:
    virtual float Area ()
    {
        return 0.0f;
    }

    virtual float Perimeter()
    {
        return 0.0f;
    }

    virtual void PrintInfo()
    {
        std::cout << "w-what?? how did u find me?!?";
    }

    float round(float var)
    {
        var = (int)(var * 100 + 0.5f);
        return (float)var / 100;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle()
    {
        std::cout << "Please enter the length, then width of a rectangle: ";
        std::cin >> length >> width;
        length = minmax(length, 1.0f, 100000.0f);
        width = minmax(width, 1.0f, 100000.0f);
    }

    float Area()
    {
        return round(length * width);
    }

    float Perimeter()
    {
        return round((length * 2) + (width * 2));
    }

    void PrintInfo()
    {
        std::cout << "Rectangle | Area: " << Area() << " | Perimeter: " << Perimeter() << std::endl;
    }
};

class Square : public Shape
{
private:
    float length;

public:
    Square()
    {
        std::cout << "Please enter the length of all sides of a square: ";
        std::cin >> length;
        length = minmax(length, 1.0f, 100000.0f);
    }

    float Area()
    {
        return round(length * length);
    }

    float Perimeter()
    {
        return round(length * 4);
    }

    void PrintInfo()
    {
        std::cout << "Square | Area: " << Area() << " | Perimeter: " << Perimeter() << std::endl;
    }
};

class Circle : public Shape
{
private:
    float radius;
    static const float pi;

public:
    Circle()
    {
        std::cout << "Please enter the radius of a circle: ";
        std::cin >> radius;
        radius = minmax(radius, 1.0f, 100.0f);
    }

    float Area()
    {
        return round((radius * 2) * pi);
    }

    float Perimeter()
    {
        return round(2 * pi * radius);
    }

    void PrintInfo()
    {
        std::cout << "Circle | Area: " << Area() << " | Perimeter: " << Perimeter() << std::endl;
    }
};

const float Circle::pi = 3.14f;

class Rhombus : public Shape
{
private:
    float diagonal1, diagonal2, side;

public:
    Rhombus()
    {
        std::cout << "Please enter the length of each diagonal cross-section of a rhombus, followed by the length of its sides: ";
        std::cin >> diagonal1 >> diagonal2 >> side;
        diagonal1 = minmax(diagonal1, 1.0f, 100.0f);
        diagonal2 = minmax(diagonal2, 1.0f, 100.0f);
        side = minmax(side, 1.0f, 100000.0f);
    }

    float Area()
    {
        return round((diagonal1 * diagonal2) / 2);
    }

    float Perimeter()
    {
        return round(4 * side);
    }

    void PrintInfo()
    {
        std::cout << "Rhombus | Area: " << Area() << " | Perimeter: " << Perimeter() << std::endl;
    }
};

int main()
{
    int testCases;
    std::cout << "How many test cases would you like to run? ";
    std::cin >> testCases;
    testCases = minmax(testCases, 1, 10);

    for (int i = 0; i < testCases; i++)
    {
        Shape* shapes[4];
        shapes[0] = new Rectangle();
        shapes[1] = new Square();
        shapes[2] = new Circle();
        shapes[3] = new Rhombus();

        for (Shape* s : shapes)
        {
            s->PrintInfo();
        }
    }

    return 0;
}
