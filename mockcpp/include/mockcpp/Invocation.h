
#ifndef __MOCKCPP_INVOCATION_H
#define __MOCKCPP_INVOCATION_H

#include <mockcpp/mockcpp.h>

#include <mockcpp/RefAny.h>
#include <string>

MOCKCPP_NS_START

class Stub;
class InvocationImpl;

class Invocation
{
public:
    Invocation(const std::string nameOfCaller
             , const RefAny& p01 = RefAny()
             , const RefAny& p02 = RefAny()
             , const RefAny& p03 = RefAny()
             , const RefAny& p04 = RefAny()
             , const RefAny& p05 = RefAny()
             , const RefAny& p06 = RefAny()
             , const RefAny& p07 = RefAny()
             , const RefAny& p08 = RefAny()
             , const RefAny& p09 = RefAny()
             , const RefAny& p10 = RefAny()
             , const RefAny& p11 = RefAny()
             , const RefAny& p12 = RefAny()
    );

    virtual ~Invocation();

    RefAny& getParameter(const unsigned int i) const;

    std::string getNameOfCaller() const;

    std::string toString(void) const;

private:
    InvocationImpl* This;
};

MOCKCPP_NS_END

#endif
