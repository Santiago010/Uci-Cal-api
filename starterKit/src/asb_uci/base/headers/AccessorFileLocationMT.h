#ifndef MY_ACCESSOR_H
#define MY_ACCESSOR_H

#include "../../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include <string>

namespace uci {
namespace base {

class AcccessorFileLocationMT : public Accessor {
public:
    AcccessorFileLocationMT();
    
    uci::base::accessorType::AccessorType getAccessorType() const noexcept override;
    
    void reset() override;
    
    void setData(const std::string& d);
    std::string getData() const;

private:
    std::string data;
};

} // namespace base
} // namespace uci

#endif // MY_ACCESSOR_H
