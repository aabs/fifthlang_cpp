#pragma once
#include <memory>

using namespace std;

class Scope
{
private:
    shared_ptr<Scope> _parent_scope;

public:
    Scope();
    ~Scope();
    void with_parent(shared_ptr<Scope> parent);
};
