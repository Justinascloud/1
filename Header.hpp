#ifndef Header_h
#define Header_h
class Apple{
private:
    int weight;
    int condition;
    
public:
    //Constructor
    Apple();
    Apple(int weight, int condition);
    //Destructor
    ~Apple();
    
public:
    //Setters
    void setWeight(int w);
    void setCondition(int c);
    
public:
    //Getters
    float getWeight();
    int getCondition();
};
class Tree{
private:
    //Produces per day
    int apple;
    
public:
    //Constructor
    Tree();
    Tree(int apple);
    //Destructor
    ~Tree();

public:
    //Setters
    void setApple(int a);
    
public:
    //Getters
    int getApple();
    
    void growFruit();
    void removeFruit();
};
class Basket{
private:
    int amount;
    
public:
    //Constructor
    Basket();
    Basket(int amount);
    //Destructor
    ~Basket();
    
public:
    //Setter
    void setAmount(int am);
    
public:
    //Getter
    int getAmount();
    //Methods
    void addFruit();
    void emptyFruit();
    
};
class Picker{
private:
    int value;
    
public:
    //Constructor
    Picker();
    Picker(int value);
    //Destructor
    ~Picker();
    
public:
    //Setter
    void setValue(int v);
    
public:
    //Getter
    int getValue();
    //Method
    void collectFruit();
};
#endif /* Header_h */
