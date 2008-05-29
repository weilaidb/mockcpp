
#ifndef __MOCKCPP_VOID_RESULT_HANDLER_H
#define __MOCKCPP_VOID_RESULT_HANDLER_H

#include <mockcpp.h>
#include <ResultHandler.h>

#include <string>
#include <typeinfo>

MOCKCPP_NS_START

class Any;
class SelfDescribe;

///////////////////////////////////////////////////////////
class VoidResultHandler: public ResultHandler
{
public:

    VoidResultHandler( const std::type_info& typeInfo
                     , const std::string& expectedTypeString
                     , const SelfDescribe* resultProvider);

    bool matches(const Any& val) const;

    Any& getResult(const Any& val) const;

private:

    const std::type_info& expectedTypeInfo;
    const std::string& expectedTypeString;
    const SelfDescribe* resultProvider;
};

///////////////////////////////////////////////////////////

MOCKCPP_NS_END

#endif
