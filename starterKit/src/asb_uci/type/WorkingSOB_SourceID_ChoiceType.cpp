/** @file WorkingSOB_SourceID_ChoiceType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#include "../../../include/asb_uci/type/WorkingSOB_SourceID_ChoiceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/SystemID_Type.h"
#include "../../../include/asb_uci/type/WorkingSOB_ID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SystemID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WorkingSOB_ID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WorkingSOB_SourceID_ChoiceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

WorkingSOB_SourceID_ChoiceType::WorkingSOB_SourceID_ChoiceType() = default;

WorkingSOB_SourceID_ChoiceType::~WorkingSOB_SourceID_ChoiceType() = default;

void WorkingSOB_SourceID_ChoiceType::copy(const uci::type::WorkingSOB_SourceID_ChoiceType& accessor) {
  copyImpl(accessor, false);
}

void WorkingSOB_SourceID_ChoiceType::copyImpl(const uci::type::WorkingSOB_SourceID_ChoiceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const WorkingSOB_SourceID_ChoiceType&>(accessor);
    if (accessorImpl.systemID_Accessor) {
      setSystemID(*(accessorImpl.systemID_Accessor));
    } else {
      systemID_Accessor.reset();
    }
    if (accessorImpl.workingSOB_ID_Accessor) {
      setWorkingSOB_ID(*(accessorImpl.workingSOB_ID_Accessor));
    } else {
      workingSOB_ID_Accessor.reset();
    }
  }
}

void WorkingSOB_SourceID_ChoiceType::reset() noexcept {
  systemID_Accessor.reset();
  workingSOB_ID_Accessor.reset();
}

uci::type::WorkingSOB_SourceID_ChoiceType::WorkingSOB_SourceID_ChoiceTypeChoice WorkingSOB_SourceID_ChoiceType::getWorkingSOB_SourceID_ChoiceTypeChoiceOrdinal() const noexcept {
  if (systemID_Accessor) {
    return WORKINGSOB_SOURCEID_CHOICETYPE_CHOICE_SYSTEMID;
  }
  if (workingSOB_ID_Accessor) {
    return WORKINGSOB_SOURCEID_CHOICETYPE_CHOICE_WORKINGSOB_ID;
  }
  return WORKINGSOB_SOURCEID_CHOICETYPE_CHOICE_NONE;
}

uci::type::WorkingSOB_SourceID_ChoiceType& WorkingSOB_SourceID_ChoiceType::setWorkingSOB_SourceID_ChoiceTypeChoiceOrdinal(uci::type::WorkingSOB_SourceID_ChoiceType::WorkingSOB_SourceID_ChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case WORKINGSOB_SOURCEID_CHOICETYPE_CHOICE_SYSTEMID:
      chooseSystemID("setWorkingSOB_SourceID_ChoiceTypeChoiceOrdinal", type);
      break;
    case WORKINGSOB_SOURCEID_CHOICETYPE_CHOICE_WORKINGSOB_ID:
      chooseWorkingSOB_ID("setWorkingSOB_SourceID_ChoiceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setWorkingSOB_SourceID_ChoiceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::SystemID_Type& WorkingSOB_SourceID_ChoiceType::getSystemID_() const {
  if (systemID_Accessor) {
    return *systemID_Accessor;
  }
  throw uci::base::UCIException("Error in getSystemID(): Unable to get SystemID, field not selected");
}

const uci::type::SystemID_Type& WorkingSOB_SourceID_ChoiceType::getSystemID() const {
  return getSystemID_();
}

uci::type::SystemID_Type& WorkingSOB_SourceID_ChoiceType::getSystemID() {
  return getSystemID_();
}

uci::type::WorkingSOB_SourceID_ChoiceType& WorkingSOB_SourceID_ChoiceType::setSystemID(const uci::type::SystemID_Type& accessor) {
  chooseSystemID();
  if (&accessor != systemID_Accessor.get()) {
    systemID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool WorkingSOB_SourceID_ChoiceType::isSystemID() const noexcept {
  return static_cast<bool>(systemID_Accessor);
}

uci::type::SystemID_Type& WorkingSOB_SourceID_ChoiceType::chooseSystemID(const std::string& method, uci::base::accessorType::AccessorType type) {
  workingSOB_ID_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::systemID_Type : type};
  if ((!systemID_Accessor) || (systemID_Accessor->getAccessorType() != requestedType)) {
    systemID_Accessor = SystemID_Type::create(type);
    if (!systemID_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *systemID_Accessor;
}

uci::type::SystemID_Type& WorkingSOB_SourceID_ChoiceType::chooseSystemID(uci::base::accessorType::AccessorType type) {
  return chooseSystemID("chooseSystemID", type);
}

uci::type::WorkingSOB_ID_Type& WorkingSOB_SourceID_ChoiceType::getWorkingSOB_ID_() const {
  if (workingSOB_ID_Accessor) {
    return *workingSOB_ID_Accessor;
  }
  throw uci::base::UCIException("Error in getWorkingSOB_ID(): Unable to get WorkingSOB_ID, field not selected");
}

const uci::type::WorkingSOB_ID_Type& WorkingSOB_SourceID_ChoiceType::getWorkingSOB_ID() const {
  return getWorkingSOB_ID_();
}

uci::type::WorkingSOB_ID_Type& WorkingSOB_SourceID_ChoiceType::getWorkingSOB_ID() {
  return getWorkingSOB_ID_();
}

uci::type::WorkingSOB_SourceID_ChoiceType& WorkingSOB_SourceID_ChoiceType::setWorkingSOB_ID(const uci::type::WorkingSOB_ID_Type& accessor) {
  chooseWorkingSOB_ID();
  if (&accessor != workingSOB_ID_Accessor.get()) {
    workingSOB_ID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool WorkingSOB_SourceID_ChoiceType::isWorkingSOB_ID() const noexcept {
  return static_cast<bool>(workingSOB_ID_Accessor);
}

uci::type::WorkingSOB_ID_Type& WorkingSOB_SourceID_ChoiceType::chooseWorkingSOB_ID(const std::string& method, uci::base::accessorType::AccessorType type) {
  systemID_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::workingSOB_ID_Type : type};
  if ((!workingSOB_ID_Accessor) || (workingSOB_ID_Accessor->getAccessorType() != requestedType)) {
    workingSOB_ID_Accessor = WorkingSOB_ID_Type::create(type);
    if (!workingSOB_ID_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *workingSOB_ID_Accessor;
}

uci::type::WorkingSOB_ID_Type& WorkingSOB_SourceID_ChoiceType::chooseWorkingSOB_ID(uci::base::accessorType::AccessorType type) {
  return chooseWorkingSOB_ID("chooseWorkingSOB_ID", type);
}

std::unique_ptr<WorkingSOB_SourceID_ChoiceType> WorkingSOB_SourceID_ChoiceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::workingSOB_SourceID_ChoiceType : type};
  return (requestedType == uci::type::accessorType::workingSOB_SourceID_ChoiceType) ? boost::make_unique<WorkingSOB_SourceID_ChoiceType>() : nullptr;
}

/**  */
namespace WorkingSOB_SourceID_ChoiceType_Names {

constexpr const char* Extern_Type_Name{"WorkingSOB_SourceID_ChoiceType"};
constexpr const char* SystemID_Name{"SystemID"};
constexpr const char* WorkingSOB_ID_Name{"WorkingSOB_ID"};

} // namespace WorkingSOB_SourceID_ChoiceType_Names

void WorkingSOB_SourceID_ChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::WorkingSOB_SourceID_ChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = WorkingSOB_SourceID_ChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + WorkingSOB_SourceID_ChoiceType_Names::SystemID_Name) {
      SystemID_Type::deserialize(valueType.second, accessor.chooseSystemID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + WorkingSOB_SourceID_ChoiceType_Names::WorkingSOB_ID_Name) {
      WorkingSOB_ID_Type::deserialize(valueType.second, accessor.chooseWorkingSOB_ID(), nodeName, nsPrefix);
    }
  }
}

std::string WorkingSOB_SourceID_ChoiceType::serialize(const uci::type::WorkingSOB_SourceID_ChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? WorkingSOB_SourceID_ChoiceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, WorkingSOB_SourceID_ChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isSystemID()) {
    SystemID_Type::serialize(accessor.getSystemID(), node, WorkingSOB_SourceID_ChoiceType_Names::SystemID_Name);
  } else if (accessor.isWorkingSOB_ID()) {
    WorkingSOB_ID_Type::serialize(accessor.getWorkingSOB_ID(), node, WorkingSOB_SourceID_ChoiceType_Names::WorkingSOB_ID_Name);
  }
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

uci::type::WorkingSOB_SourceID_ChoiceType& WorkingSOB_SourceID_ChoiceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::WorkingSOB_SourceID_ChoiceType>().release());
}

uci::type::WorkingSOB_SourceID_ChoiceType& WorkingSOB_SourceID_ChoiceType::create(const uci::type::WorkingSOB_SourceID_ChoiceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::WorkingSOB_SourceID_ChoiceType> newAccessor{boost::make_unique<asb_uci::type::WorkingSOB_SourceID_ChoiceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void WorkingSOB_SourceID_ChoiceType::destroy(uci::type::WorkingSOB_SourceID_ChoiceType& accessor) {
  delete dynamic_cast<asb_uci::type::WorkingSOB_SourceID_ChoiceType*>(&accessor);
}

} // namespace type

} // namespace uci

