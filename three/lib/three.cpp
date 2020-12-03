#include <vector>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

vector<string> readInput(string filename) {
    vector<string> grid;
    string str;
    ifstream input(filename.c_str());
    while(getline(input, str)) {
        grid.push_back(str);
    }
    return grid;
}

class Hill {
    public:
        Hill(vector<string> input);
        void move(int x, int y);
        int getX();
        int getY();
        bool atBottom();
        bool hasTree();
        vector<string> getHill();

    private:
      int posx = 0;
      int posy = 0;
      int width = 0;
      int length = 0;
      vector<string> grid;
};

Hill::Hill(vector<string> input) {
    posx = 0;
    posy = 0;
    grid = input;
    width = grid[0].size();
    length = grid.size();
}

bool Hill::atBottom() {
    return posy == (length - 1);
}

int Hill::getX() { return posx; }
int Hill::getY() { return posy; }

bool Hill::hasTree() {
    return grid[posy][posx] == '#';
}

void Hill::move(int x, int y) {
    if((posy + y) < length) {
        posy += y;
    }
    int xAmount = posx + x;
    if(xAmount < width) {
        posx = xAmount;
    } else {
        x = xAmount - width;
        posx = x;
    }
}

vector<string> Hill::getHill() {
    return grid;
}