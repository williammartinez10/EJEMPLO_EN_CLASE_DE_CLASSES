

class Triangle{
    private:
    // Properties
    double side1;
    double side2;
    double side3;

    public:
    // Getters (These are NOT in-line methods)
    double getSide1() { return side1; }
    double getSide2() { return side2; } 
    double getSide3() { return side3; }


    // Setters (These ARE in-line methods)
    void setSide1(double s1) { side1 = s1; }
    void setSide2(double s2) { side2 = s2; }
    void setSide3(double s3) { side3 = s3; }


    //Constructors
    Triangle(double s1, double s2, double s3)
    {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }


    // Instance methods - Only declare them. Do not define them like above!
    double getArea();
    bool largerThan(Triangle t2);

};