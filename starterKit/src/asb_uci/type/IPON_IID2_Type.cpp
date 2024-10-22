/** @file IPON_IID2_Type.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#include "../../../include/asb_uci/type/IPON_IID2_Type.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/IPON_IID2_ProgramCodeType.h"
#include "../../../include/asb_uci/type/IPON_IID2_ProjectCodeType.h"
#include "../../../include/asb_uci/type/IPON_IID2_SortieNumberType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IPON_IID2_ProgramCodeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IPON_IID2_ProjectCodeType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IPON_IID2_SortieNumberType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IPON_IID2_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

IPON_IID2_Type::IPON_IID2_Type()
  : programCode_Accessor{boost::make_unique<IPON_IID2_ProgramCodeType>()},
    sortieNumber_Accessor{boost::make_unique<IPON_IID2_SortieNumberType>()},
    projectCode_Accessor{boost::make_unique<IPON_IID2_ProjectCodeType>()} {
}

IPON_IID2_Type::~IPON_IID2_Type() = default;

void IPON_IID2_Type::copy(const uci::type::IPON_IID2_Type& accessor) {
  copyImpl(accessor, false);
}

void IPON_IID2_Type::copyImpl(const uci::type::IPON_IID2_Type& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const IPON_IID2_Type&>(accessor);
    setProgramCode(*(accessorImpl.programCode_Accessor));
    setSortieNumber(*(accessorImpl.sortieNumber_Accessor));
    setProjectCode(*(accessorImpl.projectCode_Accessor));
  }
}

void IPON_IID2_Type::reset() noexcept {
  programCode_Accessor->reset();
  sortieNumber_Accessor->reset();
  projectCode_Accessor->reset();
}

const uci::type::IPON_IID2_ProgramCodeType& IPON_IID2_Type::getProgramCode() const noexcept {
  return *programCode_Accessor;
}

uci::type::IPON_IID2_ProgramCodeType& IPON_IID2_Type::getProgramCode() noexcept {
  return *programCode_Accessor;
}

uci::type::IPON_IID2_Type& IPON_IID2_Type::setProgramCode(const uci::type::IPON_IID2_ProgramCodeType& value) {
  return setProgramCode(value.c_str());
}

uci::type::IPON_IID2_Type& IPON_IID2_Type::setProgramCode(const std::string& value) {
  return setProgramCode(value.c_str());
}

uci::type::IPON_IID2_Type& IPON_IID2_Type::setProgramCode(const char* value) {
  programCode_Accessor->setStringValue(value);
  return *this;
}

const uci::type::IPON_IID2_SortieNumberType& IPON_IID2_Type::getSortieNumber() const noexcept {
  return *sortieNumber_Accessor;
}

uci::type::IPON_IID2_SortieNumberType& IPON_IID2_Type::getSortieNumber() noexcept {
  return *sortieNumber_Accessor;
}

uci::type::IPON_IID2_Type& IPON_IID2_Type::setSortieNumber(const uci::type::IPON_IID2_SortieNumberType& value) {
  return setSortieNumber(value.c_str());
}

uci::type::IPON_IID2_Type& IPON_IID2_Type::setSortieNumber(const std::string& value) {
  return setSortieNumber(value.c_str());
}

uci::type::IPON_IID2_Type& IPON_IID2_Type::setSortieNumber(const char* value) {
  sortieNumber_Accessor->setStringValue(value);
  return *this;
}

const uci::type::IPON_IID2_ProjectCodeType& IPON_IID2_Type::getProjectCode() const noexcept {
  return *projectCode_Accessor;
}

uci::type::IPON_IID2_ProjectCodeType& IPON_IID2_Type::getProjectCode() noexcept {
  return *projectCode_Accessor;
}

uci::type::IPON_IID2_Type& IPON_IID2_Type::setProjectCode(const uci::type::IPON_IID2_ProjectCodeType& value) {
  return setProjectCode(value.c_str());
}

uci::type::IPON_IID2_Type& IPON_IID2_Type::setProjectCode(const std::string& value) {
  return setProjectCode(value.c_str());
}

uci::type::IPON_IID2_Type& IPON_IID2_Type::setProjectCode(const char* value) {
  projectCode_Accessor->setStringValue(value);
  return *this;
}

std::unique_ptr<IPON_IID2_Type> IPON_IID2_Type::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iPON_IID2_Type : type};
  return (requestedType == uci::type::accessorType::iPON_IID2_Type) ? boost::make_unique<IPON_IID2_Type>() : nullptr;
}

/**  */
namespace IPON_IID2_Type_Names {

constexpr const char* Extern_Type_Name{"IPON_IID2_Type"};
constexpr const char* ProgramCode_Name{"ProgramCode"};
constexpr const char* SortieNumber_Name{"SortieNumber"};
constexpr const char* ProjectCode_Name{"ProjectCode"};

} // namespace IPON_IID2_Type_Names

void IPON_IID2_Type::deserialize(const boost::property_tree::ptree& propTree, uci::type::IPON_IID2_Type& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = IPON_IID2_Type_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + IPON_IID2_Type_Names::ProgramCode_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setProgramCode(*value);
      }
    } else if (valueType.first == nsPrefix + IPON_IID2_Type_Names::SortieNumber_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setSortieNumber(*value);
      }
    } else if (valueType.first == nsPrefix + IPON_IID2_Type_Names::ProjectCode_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setProjectCode(*value);
      }
    }
  }
}

std::string IPON_IID2_Type::serialize(const uci::type::IPON_IID2_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? IPON_IID2_Type_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, IPON_IID2_Type_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeString(accessor.getProgramCode(), node, IPON_IID2_Type_Names::ProgramCode_Name);
  asb_uci::util::SerializationHelpers::serializeString(accessor.getSortieNumber(), node, IPON_IID2_Type_Names::SortieNumber_Name);
  asb_uci::util::SerializationHelpers::serializeString(accessor.getProjectCode(), node, IPON_IID2_Type_Names::ProjectCode_Name);
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

uci::type::IPON_IID2_Type& IPON_IID2_Type::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::IPON_IID2_Type>().release());
}

uci::type::IPON_IID2_Type& IPON_IID2_Type::create(const uci::type::IPON_IID2_Type& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::IPON_IID2_Type> newAccessor{boost::make_unique<asb_uci::type::IPON_IID2_Type>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void IPON_IID2_Type::destroy(uci::type::IPON_IID2_Type& accessor) {
  delete dynamic_cast<asb_uci::type::IPON_IID2_Type*>(&accessor);
}

} // namespace type

} // namespace uci

