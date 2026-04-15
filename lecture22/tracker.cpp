

#include <iostream>
class Tracker {
    int id;
public:
    Tracker(int i) : id{i} {
        std::cout << "create " << id << '\n';
    }
    Tracker(const Tracker& o) : id{o.id} {
        std::cout << "copy " << id << '\n';
    }
    ~Tracker() {
        std::cout << "destroy " << id << '\n';
    }
};
int main() {
    Tracker a{1};
    Tracker b = a;
}

