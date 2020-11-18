#ifndef TEAM3_NODE_H
#define TEAM3_NODE_H

#include <memory>
#include "../drawing/Point.h"

class Node {
private:
    int idx_;
    int post_idx_;
    std::unique_ptr<Point> position_;
public:
    Node(int idx, int post_idx);
    void setPosition(std::unique_ptr<Point> position);
    Point getPosition() const;
    int getId();
};


#endif //TEAM3_NODE_H