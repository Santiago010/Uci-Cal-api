/** @file PO_ComponentApertureType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
 *
 * <pre>
 * Unclassified               U N C L A S S I F I E D               Unclassified
 *
 * DISTRIBUTION STATEMENT D: Distribution authorized to Department of Defense
 *    and U.S. DoD contractors only, Critical Technology, Export Controlled,
 *    26 January 2023. Other requests for this document shall be referred to
 *    AFLCMC/XA (OAMO), Wright-Patterson AFB OH 45433.
 *
 * DESTRUCTION NOTICE: Destroy by any method that will prevent disclosure of
 *    contents or reconstruction of the document.
 *
 * WARNING - This document contains technical data whose export is restricted
 *    by the Arms Export Control Act (Section 2751 of Title 22, United States
 *    Code) or the Export Control Reform Act of 2018 (Chapter 58 Sections
 *    4801-4852 of Title 50, United States Code). Violations of these export
 *    laws are subject to severe criminal penalties. Disseminate in accordance
 *    with provisions of DoD Directive 5230.25 and DoD Instruction 2040.02.
 *
 * Controlled by: USAF
 * Controlled by: AFLCMC/XA (OAMO)
 * CUI Category(ies): CTI, EXPT
 * Distribution Statement D
 * POC: Wayne Artuso, 937-713-5124
 *
 * CUI//SP-CTI/SP-EXPT
 * </pre>
 *
 */

#include "../../../include/asb_uci/type/PO_ComponentApertureType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/PO_ApertureID_Type.h"
#include "../../../include/asb_uci/type/PO_ComponentF_StopType.h"
#include "../../../include/asb_uci/type/PO_FPA_ID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ApertureID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentApertureType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentF_StopType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_FPA_ID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

PO_ComponentApertureType::PO_ComponentApertureType()
  : apertureID_Accessor{boost::make_unique<PO_ApertureID_Type>()},
    fPA_ID_Accessor{boost::make_unique<FPA_ID>(1, SIZE_MAX)},
    f_Stop_Accessor{boost::make_unique<PO_ComponentF_StopType>()} {
}

PO_ComponentApertureType::~PO_ComponentApertureType() = default;

void PO_ComponentApertureType::copy(const uci::type::PO_ComponentApertureType& accessor) {
  copyImpl(accessor, false);
}

void PO_ComponentApertureType::copyImpl(const uci::type::PO_ComponentApertureType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const PO_ComponentApertureType&>(accessor);
    setApertureID(*(accessorImpl.apertureID_Accessor));
    setFPA_ID(*(accessorImpl.fPA_ID_Accessor));
    setF_Stop(*(accessorImpl.f_Stop_Accessor));
  }
}

void PO_ComponentApertureType::reset() noexcept {
  apertureID_Accessor->reset();
  fPA_ID_Accessor->reset();
  f_Stop_Accessor->reset();
}

const uci::type::PO_ApertureID_Type& PO_ComponentApertureType::getApertureID() const {
  return *apertureID_Accessor;
}

uci::type::PO_ApertureID_Type& PO_ComponentApertureType::getApertureID() {
  return *apertureID_Accessor;
}

uci::type::PO_ComponentApertureType& PO_ComponentApertureType::setApertureID(const uci::type::PO_ApertureID_Type& accessor) {
  if (&accessor != apertureID_Accessor.get()) {
    apertureID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PO_ComponentApertureType::FPA_ID& PO_ComponentApertureType::getFPA_ID() const {
  return *fPA_ID_Accessor;
}

uci::type::PO_ComponentApertureType::FPA_ID& PO_ComponentApertureType::getFPA_ID() {
  return *fPA_ID_Accessor;
}

uci::type::PO_ComponentApertureType& PO_ComponentApertureType::setFPA_ID(const uci::type::PO_ComponentApertureType::FPA_ID& accessor) {
  if (&accessor != fPA_ID_Accessor.get()) {
    fPA_ID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::PO_ComponentF_StopType& PO_ComponentApertureType::getF_Stop() const {
  return *f_Stop_Accessor;
}

uci::type::PO_ComponentF_StopType& PO_ComponentApertureType::getF_Stop() {
  return *f_Stop_Accessor;
}

uci::type::PO_ComponentApertureType& PO_ComponentApertureType::setF_Stop(const uci::type::PO_ComponentF_StopType& accessor) {
  if (&accessor != f_Stop_Accessor.get()) {
    f_Stop_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<PO_ComponentApertureType> PO_ComponentApertureType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::pO_ComponentApertureType : type};
  return (requestedType == uci::type::accessorType::pO_ComponentApertureType) ? boost::make_unique<PO_ComponentApertureType>() : nullptr;
}

/**  */
namespace PO_ComponentApertureType_Names {

constexpr const char* Extern_Type_Name{"PO_ComponentApertureType"};
constexpr const char* ApertureID_Name{"ApertureID"};
constexpr const char* FPA_ID_Name{"FPA_ID"};
constexpr const char* F_Stop_Name{"F_Stop"};

} // namespace PO_ComponentApertureType_Names

void PO_ComponentApertureType::deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentApertureType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = PO_ComponentApertureType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + PO_ComponentApertureType_Names::ApertureID_Name) {
      PO_ApertureID_Type::deserialize(valueType.second, accessor.getApertureID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + PO_ComponentApertureType_Names::FPA_ID_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::PO_ComponentApertureType::FPA_ID& boundedList = accessor.getFPA_ID();
        const uci::type::PO_ComponentApertureType::FPA_ID::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::PO_FPA_ID_Type::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + PO_ComponentApertureType_Names::F_Stop_Name) {
      PO_ComponentF_StopType::deserialize(valueType.second, accessor.getF_Stop(), nodeName, nsPrefix);
    }
  }
}

std::string PO_ComponentApertureType::serialize(const uci::type::PO_ComponentApertureType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? PO_ComponentApertureType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, PO_ComponentApertureType_Names::Extern_Type_Name);
  }
  PO_ApertureID_Type::serialize(accessor.getApertureID(), node, PO_ComponentApertureType_Names::ApertureID_Name);
  {
    const uci::type::PO_ComponentApertureType::FPA_ID& boundedList = accessor.getFPA_ID();
    for (uci::type::PO_ComponentApertureType::FPA_ID::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::PO_FPA_ID_Type::serialize(boundedList.at(i), node, PO_ComponentApertureType_Names::FPA_ID_Name);
    }
  }
  PO_ComponentF_StopType::serialize(accessor.getF_Stop(), node, PO_ComponentApertureType_Names::F_Stop_Name);
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

uci::type::PO_ComponentApertureType& PO_ComponentApertureType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::PO_ComponentApertureType>().release());
}

uci::type::PO_ComponentApertureType& PO_ComponentApertureType::create(const uci::type::PO_ComponentApertureType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::PO_ComponentApertureType> newAccessor{boost::make_unique<asb_uci::type::PO_ComponentApertureType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void PO_ComponentApertureType::destroy(uci::type::PO_ComponentApertureType& accessor) {
  delete dynamic_cast<asb_uci::type::PO_ComponentApertureType*>(&accessor);
}

} // namespace type

} // namespace uci

