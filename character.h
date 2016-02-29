/* 
 * This class is used for storing all the number benefits 
 */
 
 
// Make a general class from which
// other classes will be derived.
class classes {
  public:
    virtual int str;
    virtual int intel;
    virtual int wis;
    virtual int chari;
    virtual int dex;
    virtual int con;
};


// warrior class based on the general parent class
class warrior : public classes {
  public:
    int str = 2.0;
    int intel = 0.5;
    int wis = 0.1;
    int chari = 1.0;
    int dex = 1.2;
    int con = 1.5;
}