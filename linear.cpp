#include "matplotlibcpp.h"
#include <algorithm>
#include <vector>

namespace plt = matplotlibcpp;
using namespace std;

int main() {

    vector<double> x;
    for(int i = 0; i < 100; ++i)
        x.push_back(i);

    vector<double> x2;
    vector<double> x3;
    for(auto i : x) {
        x2.push_back(i*i);
        x3.push_back(i*i*i);
    }

    plt::figure_size(1200, 780);
    plt::named_plot("f(x) = x",x, x );
    plt::named_plot("f(x) = x^2",x, x2 );
    plt::named_plot("f(x) = x^3",x, x3 );

    plt::title("Linear");
    plt::legend();
    plt::xlabel("x");
    plt::ylabel("f(x)");
    
    plt::save("./linear.png");
    plt::show();
}
