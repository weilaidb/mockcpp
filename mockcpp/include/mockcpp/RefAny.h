
#ifndef __MOCKPP_REF_ANY_H
#define __MOCKPP_REF_ANY_H

#include <mockcpp/mockcpp.h>

#include <mockcpp/AnyBase.h>
#include <mockcpp/RefHolder.h>

MOCKCPP_NS_START

class RefAny : public AnyBase
{
public: 

   RefAny();

   template <typename ValueType>
   RefAny(const ValueType& value)
      : AnyBase(new RefHolder<ValueType>(value))
   {}

#if 0
   RefAny(const char* value);
   RefAny(char* value);
#endif

   RefAny(const RefAny & other);

public:

   template<typename ValueType>
   RefAny& operator=(const ValueType & rhs)
   {
      RefAny(rhs).swap(*this);
      return *this;
   }

   RefAny& operator=(const RefAny & rhs);

   template <typename ValueType>
   bool changeValue(const ValueType& val)
   {
      RefHolder<ValueType>* p = dynamic_cast<RefHolder<ValueType>*>(getContent());
      if (p == 0)
      {
         return false;
      }

      p->changeValue(val);

      return true;
   }
};

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
const RefAny EmptyRefAny;

RefAny& getEmptyRefAny();
/////////////////////////////////////////////////////

MOCKCPP_NS_END


#endif // __MOCKPP_REF_ANY_H

