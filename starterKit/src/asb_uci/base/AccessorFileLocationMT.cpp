#include "headers/AccessorFileLocationMT.h"

namespace uci {
namespace base {

AcccessorFileLocationMT::AcccessorFileLocationMT() : data("") {}

uci::base::accessorType::AccessorType AcccessorFileLocationMT::getAccessorType() const noexcept {
    return uci::base::accessorType::null;
}

void AcccessorFileLocationMT::reset() {
    data.clear();
}

void AcccessorFileLocationMT::setData(const std::string& d) {
    data = d;
}

std::string AcccessorFileLocationMT::getData() const {
    return data;
}

} // namespace base
} // namespace uci
