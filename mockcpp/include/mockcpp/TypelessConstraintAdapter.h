
#ifndef __MOCKCPP_TYPELESS_CONSTRAINT_ADAPTER_H
#define __MOCKCPP_TYPELESS_CONSTRAINT_ADAPTER_H

#include <mockcpp/mockcpp.h>
#include <mockcpp/Constraint.h>

MOCKCPP_NS_START

class RefAny;
class TypelessConstraint;
class TypelessConstraintAdapterImpl;

class TypelessConstraintAdapter : public Constraint
{
public:

    TypelessConstraintAdapter(TypelessConstraint* tc);
    ~TypelessConstraintAdapter();

    virtual bool eval(const RefAny& p) const;
    virtual std::string toString() const;
    
    TypelessConstraint* getAdaptedConstraint() const;

private:
    TypelessConstraintAdapterImpl* This;
};

MOCKCPP_NS_END

#endif
