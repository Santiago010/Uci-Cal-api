/** @file SupportCapabilityCommandBaseType.cpp
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

#include "../../../include/asb_uci/type/SupportCapabilityCommandBaseType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/CommandBaseType.h"
#include "../../../include/asb_uci/type/SupportCapabilityID_Type.h"
#include "../../../include/asb_uci/util/DerivedTypesCopier.h"
#include "../../../include/asb_uci/util/DerivedTypesCreator.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/DerivedTypesSerializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SupportCapabilityCommandBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SupportCapabilityID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SupportCapabilityCommandBaseType::SupportCapabilityCommandBaseType()
  : supportCapabilityID_Accessor{boost::make_unique<SupportCapabilityID_Type>()} {
}

SupportCapabilityCommandBaseType::~SupportCapabilityCommandBaseType() = default;

void SupportCapabilityCommandBaseType::copy(const uci::type::SupportCapabilityCommandBaseType& accessor) {
  copyImpl(accessor, false);
}

void SupportCapabilityCommandBaseType::copyImpl(const uci::type::SupportCapabilityCommandBaseType& accessor, const bool checkIfDerivation) {
  if (&accessor != this) {
    if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::supportCapabilityCommandBaseType)) {
      CommandBaseType::copyImpl(accessor, false);
      const auto& accessorImpl = dynamic_cast<const SupportCapabilityCommandBaseType&>(accessor);
      setSupportCapabilityID(*(accessorImpl.supportCapabilityID_Accessor));
    } else {
      asb_uci::util::DerivedTypesCopier::copy(accessor, *this);
    }
  }
}

void SupportCapabilityCommandBaseType::reset() noexcept {
  CommandBaseType::reset();
  supportCapabilityID_Accessor->reset();
}

const uci::type::SupportCapabilityID_Type& SupportCapabilityCommandBaseType::getSupportCapabilityID() const {
  return *supportCapabilityID_Accessor;
}

uci::type::SupportCapabilityID_Type& SupportCapabilityCommandBaseType::getSupportCapabilityID() {
  return *supportCapabilityID_Accessor;
}

uci::type::SupportCapabilityCommandBaseType& SupportCapabilityCommandBaseType::setSupportCapabilityID(const uci::type::SupportCapabilityID_Type& accessor) {
  if (&accessor != supportCapabilityID_Accessor.get()) {
    supportCapabilityID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<SupportCapabilityCommandBaseType> SupportCapabilityCommandBaseType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::supportCapabilityCommandBaseType : type};
  return std::unique_ptr<SupportCapabilityCommandBaseType>(dynamic_cast<SupportCapabilityCommandBaseType*>(asb_uci::util::DerivedTypesCreator::create(requestedType)));
}

/**  */
namespace SupportCapabilityCommandBaseType_Names {

constexpr const char* Extern_Type_Name{"SupportCapabilityCommandBaseType"};
constexpr const char* SupportCapabilityID_Name{"SupportCapabilityID"};

} // namespace SupportCapabilityCommandBaseType_Names

void SupportCapabilityCommandBaseType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SupportCapabilityCommandBaseType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SupportCapabilityCommandBaseType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SupportCapabilityCommandBaseType_Names::SupportCapabilityID_Name) {
      SupportCapabilityID_Type::deserialize(valueType.second, accessor.getSupportCapabilityID(), nodeName, nsPrefix);
    }
  }
  CommandBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string SupportCapabilityCommandBaseType::serialize(const uci::type::SupportCapabilityCommandBaseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool checkIfDerivation, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SupportCapabilityCommandBaseType_Names::Extern_Type_Name : nodeName)};
  if (!checkIfDerivation || (accessor.getAccessorType() == uci::type::accessorType::supportCapabilityCommandBaseType)) {
    boost::property_tree::ptree newNode;
    boost::property_tree::ptree& node = (createNode ? newNode : propTree);
    if (addTypeAttribute) {
      asb_uci::util::SerializationHelpers::addTypeAttribute(node, SupportCapabilityCommandBaseType_Names::Extern_Type_Name);
    }
    CommandBaseType::serialize(accessor, node, "", false, false, false);
    SupportCapabilityID_Type::serialize(accessor.getSupportCapabilityID(), node, SupportCapabilityCommandBaseType_Names::SupportCapabilityID_Name);
    if (createNode) {
      propTree.add_child(generatedNodeName, node);
    }
  } else {
    asb_uci::util::DerivedTypesSerializer::serialize(accessor, propTree, nodeName, createNode);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace asb_uci

