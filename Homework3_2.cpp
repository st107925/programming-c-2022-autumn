#include <iostream>
#include <string>

struct Est{
private:
    std::string Name;
    std::string Surname;
    int math;
    int phys;
    int inf;
public:
    Est(std::string Surname = "Ivanov", std::string Name = "Ivan", int math = 5, int phys = 5, int inf = 5){
        this->Name = Name;
        this->Surname = Surname;
        this->math = math;
        this->phys = phys;
        this->inf = inf;
    }
    
    Est(const Est& a){
        this->Name = a.Name;
        this->Surname = a.Surname;
        this->math = a.math;
        this->phys = a.phys;
        this->inf = a.inf;
    }
    
    ~Est(){}
    
    float mean(){
        return ((math+phys+inf)/3);
    }
    
    void printEst(){
        std::cout<<Surname<<" "<<Name<<std::endl;
    }
};

int main(int argc, char* argv[]){
    int n = 0;
    std::cin>>n;
    Est* st = new Est[n];

    std::string Name;
    std::string Surname;
    int math;
    int phys;
    int inf;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> Name;
        std::cin >> Surname;
        std::cin >> math;
        std::cin >> phys;
        std::cin >> inf;
        st[i] = Est(Name, Surname, math, phys, inf);
    }

    for (int i = 0; i < n; ++i) //sort
    {
        for (int j = n - 1; j > i; --j)
        {
            if (st[j - 1].mean() < st[j].mean())
            {
                Est temp = st[j - 1];
                st[j - 1] = st[j];
                st[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        st[i].printEst();
    }

    delete [] st;
    
    
    return EXIT_SUCCESS;
}
