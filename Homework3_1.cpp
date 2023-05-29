#include <iostream>
#include <cmath>
struct Point{
    int x;
    int y;
    
    Point(int x = 2, int y = 3){
        this->x = x;
        this->y = y;
    }
    
    Point(const Point& a){
        this->x = a.x;
        this->y = a.y;
    }
    
    ~Point(){};
    
    float Dist(){
        return(sqrt(x * x + y * y));
    }
    void pointPrint(){
        std::cout<<x<<"  "<<y<<std::endl;
    }
};

int main(int argc, char* argv[]){
    int n = 0;
    Point* a = (Point*)malloc(n * sizeof(Point));
    std::cin>>n;
    int arr[n][2];
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<2; j++){
            std::cin>>arr[n][j];
        }
    }
    
    for(int i = 0; i<n; i++){
        Point point;
        point.x = arr[i][0];
        point.y = arr[i][0];
        a[i] = point;
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].Dist() > a[j + 1].Dist()) {
                Point temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; ++i) //output
    {
        a[i].pointPrint();
    }
    return EXIT_SUCCESS;
}
