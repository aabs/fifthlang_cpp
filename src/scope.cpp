#include "scope.hpp"


Scope::Scope()
{
}

Scope::~Scope()
{
}

void Scope::with_parent(shared_ptr<Scope> parent)
{
    _parent_scope = parent;
}
