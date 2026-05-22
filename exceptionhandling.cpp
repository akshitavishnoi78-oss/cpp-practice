/*
try{
statements ; 
throw exception; 
}
catch(type arguement){
statements; 
}

MULTIPLE CATCH BLOCKS 
try { body }
catch (type1 arg1) { handle type1 error }
catch (type2 arg2) { handle type2 error }
catch (typeN argN) { handle typeN error }

*/
/*
#include<iostream>
#include<string>
using namespace std;

class Cricketer{
protected:
    string name;
    int age;
    int matches_played;

public:
    Cricketer(string n, int a, int mp){
        name = n;
        age = a;
        matches_played = mp;
    }

    virtual void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Matches Played: " << matches_played << endl;
    }

    virtual float calculateScore() = 0;
    virtual float calculateSalary() = 0;
};

// Batsman
class Batsman : virtual public Cricketer{
protected:
    int runs;

public:
    Batsman(string n, int a, int mp, int r)
        : Cricketer(n,a,mp){
        runs = r;
    }

    float calculateScore(){
        return (matches_played == 0) ? 0 : (float)runs / matches_played;
    }

    float calculateSalary(){
        return 5000*matches_played + 10*runs;
    }
};

// Bowler
class Bowler : virtual public Cricketer{
protected:
    int wickets;

public:
    Bowler(string n, int a, int mp, int w)
        : Cricketer(n,a,mp){
        wickets = w;
    }

    float calculateScore(){
        return (matches_played == 0) ? 0 : (float)wickets / matches_played;
    }

    float calculateSalary(){
        return 4000*matches_played + 50*wickets;
    }
};

// AllRounder
class AllRounder : public Batsman, public Bowler{
public:
    AllRounder(string n, int a, int mp, int r, int w)
        : Cricketer(n,a,mp),
          Batsman(n,a,mp,r),
          Bowler(n,a,mp,w){}

    float calculateScore(){
        float bat = (float)runs / matches_played;
        float bowl = (float)wickets / matches_played;
        return (bat + bowl) / 2;
    }

    float calculateSalary(){
        return 5500*matches_played + 5*runs + 40*wickets;
    }
};

int main(){
    Cricketer* team[3];

    team[0] = new Batsman("Virat",34,250,12000);
    team[1] = new Bowler("Bumrah",30,150,200);
    team[2] = new AllRounder("Pandya",29,180,3500,120);

    float totalscore = 0, totalsalary = 0;

    for(int i=0;i<3;i++){
        team[i]->display();

        float score = team[i]->calculateScore();
        float salary = team[i]->calculateSalary();

        cout << "Score: " << score << endl;
        cout << "Salary: " << salary << endl << endl;

        totalscore += score;
        totalsalary += salary;
    }

    cout << "Total Team Score: " << totalscore << endl;
    cout << "Total Team Salary: " << totalsalary << endl;

    return 0;
}
*/ 
/*
#include<iostream>
#include<string> 
using namespace std; 
class Employee{
    protected: 
    string name; 
    int id; 
    int salary; 
    public: 
    Employee(string n, int i, int s){
        name = n; 
        id = i; 
        salary = s; 
    }
    virtual float calculateSalary() = 0; 
    virtual void display(){
        cout<<"Employee's name:"<<name<<endl; 
        cout<<"Employee ID"<<id<<endl; 
        cout<<"Employee Salary:"<<salary<<endl; 
    }
}; 
class Manager: public Employee{
    protected:
    int bonus; 
    public:
    Manager(string n, int i, int s, int b):Employee(n,i,s){
        bonus = b; 
    }
    float calculateSalary(){
        return bonus+salary; 
    }
}; 
class Engineer:public Employee{
    protected:
    int overtime_hours; 
    public:
    Engineer(string n, int i, int s, int o):Employee(n,i,s){
        overtime_hours=o; 
    }
    float calculateSalary(){
        return 100*overtime_hours+salary; 
    }
}; 
class Intern:virtual public Employee{
    int stipened; 
    public:
    Intern(string n, int i, int s):Employee(n,i,s){
        stipened = s; 
    }
    float calculateSalary(){
        return stipened; 
    }
}; 
int main(){
    Employee*emp[3]; 
    emp[0] = new Manager("Amit", 101, 50000, 10000); 
    emp[1] = new Engineer("Vinay", 203, 40000, 20); 
    emp[2] = new Intern("Vini", 405, 15000); 
    float totalpayroll = 0; 
    for(int i=0;i<3;i++){
        emp[i]->display(); 
        float salary = emp[i]->calculateSalary(); 
        cout<<"Salary:"<<salary<<endl; 
        totalpayroll += salary; 
    }
    cout<<"Total payroll:"<<totalpayroll<<endl; 
    return 0; 
}
    */ 
   /*
#include<iostream> 
#include<string> 
using namespace std; 
class Character{
    protected:
    string health; 
    int level; 
    public: 
    Character(string h, int l){
        health = h; 
        level = l; 
    }
    virtual void display() = 0; 
    virtual float calcDamage() = 0; 
}; 
class Warrior:virtual public Character{
    protected:
    int attack_power; 
    public:
    Warrior(string h, int l, int ap):Character(h,l){
        attack_power = ap; 
    }
    float calcDamage(){
        return attack_power + level; 
    }
}; 
class Mage:virutal public Character{
    protected:
    int magic_power; 
    public: 
    Mage(string h, int l, int mp):Character(h,l){
        magic_power = mp; 
    }
    float calcDamage(){
        return magic_power + level; 
    }
}; 
class Hybrid:virutal public Warrior, virtual public Mage{
    public:
    Hybrid(string h, int l, int ap, int mp):Warrior(ap),Mage(mp){}
    float calcDamage(){
        return magic_power + attack_power + level; 
    }
}; 
int main(){
    Character*cha[3]; 
    cha[0] = new Warrior("Mira", 5, 250); 
    cha[1] = new Mage("Hara", 3, 450); 
    cha[2] = new Hybrid("Vira", 6, 300, 150); 
    float totaldamage = 0; 
    for(int i=0;i<3;i++){
        cha[i]->display(); 
        float damage = cha[i]->calcDamage(); 
        cout<<"Damage"<<damage<<endl; 
        totaldamage += damage; 
    }
    cout<<"Total Damage:"<<totaldamage<<endl; 
    return 0; 
}
*/ 
#include<iostrea,> 
#include<string>
using namespace std; 
class SocialMediaPost{
    protected: 
    int postID; 
    string authorName; 
    int likesCount; 
    public:
    SocialMediaPost(int p, string a, int l){
        postID = p; 
        authorName = a; 
        likesCount = l; 
    }
    virtual void displayPost() = 0; 
}; 
class ImagePost:public SocialMediaPost{
    protected:
    int px; 
    int KB; 
    public:
    ImagePost(int p, string a, int l, int x, int k):SocialMediaPost(p,a,l){
        px = x; 
        KB = k; 
    }
    void displayPost() override{
        cout<<"Megapixels:"<<px<<endl;
        cout<<"File size:"<<KB<<endl; 
    }
}; 
class VideoPost:public SocialMediaPost{
    protected:
    int secs; 
    int FPS; 
    public:
    VideoPost(int p, string a, int l, int s, int f):SocialMediaPost(p,a,l){
        secs = s; 
        FPS = f; 
    }
    void displayPost() override{
        cout<<secs; 
        cout<<FPS; 
    }
}; 
int main(){
    SocialMediaPost*ob[2]; 
    ob[0] = new ImagePost(234,"Maya",45,56,345); 
    ob[1] = new VideoPost(345,"Vinay", 34, 60, 23); 
    for(int i=0; i<2; i++){
        ob[i]->displayPost(); 
    }
    return 0; 
}
