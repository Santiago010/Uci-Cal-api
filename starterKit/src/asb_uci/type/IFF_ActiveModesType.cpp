/** @file IFF_ActiveModesType.cpp
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

#include "../../../include/asb_uci/type/IFF_ActiveModesType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/IFF_ActivityTransponderType.h"
#include "../../../include/asb_uci/type/IFF_ModeSelectionType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_ActiveModesType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_ActivityTransponderType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_ModeSelectionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

IFF_ActiveModesType::IFF_ActiveModesType() = default;

IFF_ActiveModesType::~IFF_ActiveModesType() = default;

void IFF_ActiveModesType::copy(const uci::type::IFF_ActiveModesType& accessor) {
  copyImpl(accessor, false);
}

void IFF_ActiveModesType::copyImpl(const uci::type::IFF_ActiveModesType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const IFF_ActiveModesType&>(accessor);
    if (accessorImpl.iFF_TransponderModes_Accessor) {
      setIFF_TransponderModes(*(accessorImpl.iFF_TransponderModes_Accessor));
    } else {
      iFF_TransponderModes_Accessor.reset();
    }
    if (accessorImpl.iFF_InterrogationModes_Accessor) {
      setIFF_InterrogationModes(*(accessorImpl.iFF_InterrogationModes_Accessor));
    } else {
      iFF_InterrogationModes_Accessor.reset();
    }
  }
}

void IFF_ActiveModesType::reset() noexcept {
  iFF_TransponderModes_Accessor.reset();
  iFF_InterrogationModes_Accessor.reset();
}

uci::type::IFF_ActiveModesType::IFF_ActiveModesTypeChoice IFF_ActiveModesType::getIFF_ActiveModesTypeChoiceOrdinal() const noexcept {
  if (iFF_TransponderModes_Accessor) {
    return IFF_ACTIVEMODESTYPE_CHOICE_IFF_TRANSPONDERMODES;
  }
  if (iFF_InterrogationModes_Accessor) {
    return IFF_ACTIVEMODESTYPE_CHOICE_IFF_INTERROGATIONMODES;
  }
  return IFF_ACTIVEMODESTYPE_CHOICE_NONE;
}

uci::type::IFF_ActiveModesType& IFF_ActiveModesType::setIFF_ActiveModesTypeChoiceOrdinal(uci::type::IFF_ActiveModesType::IFF_ActiveModesTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case IFF_ACTIVEMODESTYPE_CHOICE_IFF_TRANSPONDERMODES:
      chooseIFF_TransponderModes("setIFF_ActiveModesTypeChoiceOrdinal", type);
      break;
    case IFF_ACTIVEMODESTYPE_CHOICE_IFF_INTERROGATIONMODES:
      chooseIFF_InterrogationModes("setIFF_ActiveModesTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setIFF_ActiveModesTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::IFF_ActivityTransponderType& IFF_ActiveModesType::getIFF_TransponderModes_() const {
  if (iFF_TransponderModes_Accessor) {
    return *iFF_TransponderModes_Accessor;
  }
  throw uci::base::UCIException("Error in getIFF_TransponderModes(): Unable to get IFF_TransponderModes, field not selected");
}

const uci::type::IFF_ActivityTransponderType& IFF_ActiveModesType::getIFF_TransponderModes() const {
  return getIFF_TransponderModes_();
}

uci::type::IFF_ActivityTransponderType& IFF_ActiveModesType::getIFF_TransponderModes() {
  return getIFF_TransponderModes_();
}

uci::type::IFF_ActiveModesType& IFF_ActiveModesType::setIFF_TransponderModes(const uci::type::IFF_ActivityTransponderType& accessor) {
  chooseIFF_TransponderModes();
  if (&accessor != iFF_TransponderModes_Accessor.get()) {
    iFF_TransponderModes_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool IFF_ActiveModesType::isIFF_TransponderModes() const noexcept {
  return static_cast<bool>(iFF_TransponderModes_Accessor);
}

uci::type::IFF_ActivityTransponderType& IFF_ActiveModesType::chooseIFF_TransponderModes(const std::string& method, uci::base::accessorType::AccessorType type) {
  iFF_InterrogationModes_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iFF_ActivityTransponderType : type};
  if ((!iFF_TransponderModes_Accessor) || (iFF_TransponderModes_Accessor->getAccessorType() != requestedType)) {
    iFF_TransponderModes_Accessor = IFF_ActivityTransponderType::create(type);
    if (!iFF_TransponderModes_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *iFF_TransponderModes_Accessor;
}

uci::type::IFF_ActivityTransponderType& IFF_ActiveModesType::chooseIFF_TransponderModes(uci::base::accessorType::AccessorType type) {
  return chooseIFF_TransponderModes("chooseIFF_TransponderModes", type);
}

uci::type::IFF_ModeSelectionType& IFF_ActiveModesType::getIFF_InterrogationModes_() const {
  if (iFF_InterrogationModes_Accessor) {
    return *iFF_InterrogationModes_Accessor;
  }
  throw uci::base::UCIException("Error in getIFF_InterrogationModes(): Unable to get IFF_InterrogationModes, field not selected");
}

const uci::type::IFF_ModeSelectionType& IFF_ActiveModesType::getIFF_InterrogationModes() const {
  return getIFF_InterrogationModes_();
}

uci::type::IFF_ModeSelectionType& IFF_ActiveModesType::getIFF_InterrogationModes() {
  return getIFF_InterrogationModes_();
}

uci::type::IFF_ActiveModesType& IFF_ActiveModesType::setIFF_InterrogationModes(const uci::type::IFF_ModeSelectionType& accessor) {
  chooseIFF_InterrogationModes();
  if (&accessor != iFF_InterrogationModes_Accessor.get()) {
    iFF_InterrogationModes_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool IFF_ActiveModesType::isIFF_InterrogationModes() const noexcept {
  return static_cast<bool>(iFF_InterrogationModes_Accessor);
}

uci::type::IFF_ModeSelectionType& IFF_ActiveModesType::chooseIFF_InterrogationModes(const std::string& method, uci::base::accessorType::AccessorType type) {
  iFF_TransponderModes_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iFF_ModeSelectionType : type};
  if ((!iFF_InterrogationModes_Accessor) || (iFF_InterrogationModes_Accessor->getAccessorType() != requestedType)) {
    iFF_InterrogationModes_Accessor = IFF_ModeSelectionType::create(type);
    if (!iFF_InterrogationModes_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *iFF_InterrogationModes_Accessor;
}

uci::type::IFF_ModeSelectionType& IFF_ActiveModesType::chooseIFF_InterrogationModes(uci::base::accessorType::AccessorType type) {
  return chooseIFF_InterrogationModes("chooseIFF_InterrogationModes", type);
}

std::unique_ptr<IFF_ActiveModesType> IFF_ActiveModesType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iFF_ActiveModesType : type};
  return (requestedType == uci::type::accessorType::iFF_ActiveModesType) ? boost::make_unique<IFF_ActiveModesType>() : nullptr;
}

/**  */
namespace IFF_ActiveModesType_Names {

constexpr const char* Extern_Type_Name{"IFF_ActiveModesType"};
constexpr const char* IFF_TransponderModes_Name{"IFF_TransponderModes"};
constexpr const char* IFF_InterrogationModes_Name{"IFF_InterrogationModes"};

} // namespace IFF_ActiveModesType_Names

void IFF_ActiveModesType::deserialize(const boost::property_tree::ptree& propTree, uci::type::IFF_ActiveModesType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = IFF_ActiveModesType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + IFF_ActiveModesType_Names::IFF_TransponderModes_Name) {
      IFF_ActivityTransponderType::deserialize(valueType.second, accessor.chooseIFF_TransponderModes(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IFF_ActiveModesType_Names::IFF_InterrogationModes_Name) {
      IFF_ModeSelectionType::deserialize(valueType.second, accessor.chooseIFF_InterrogationModes(), nodeName, nsPrefix);
    }
  }
}

std::string IFF_ActiveModesType::serialize(const uci::type::IFF_ActiveModesType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? IFF_ActiveModesType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, IFF_ActiveModesType_Names::Extern_Type_Name);
  }
  if (accessor.isIFF_TransponderModes()) {
    IFF_ActivityTransponderType::serialize(accessor.getIFF_TransponderModes(), node, IFF_ActiveModesType_Names::IFF_TransponderModes_Name);
  } else if (accessor.isIFF_InterrogationModes()) {
    IFF_ModeSelectionType::serialize(accessor.getIFF_InterrogationModes(), node, IFF_ActiveModesType_Names::IFF_InterrogationModes_Name);
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

uci::type::IFF_ActiveModesType& IFF_ActiveModesType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::IFF_ActiveModesType>().release());
}

uci::type::IFF_ActiveModesType& IFF_ActiveModesType::create(const uci::type::IFF_ActiveModesType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::IFF_ActiveModesType> newAccessor{boost::make_unique<asb_uci::type::IFF_ActiveModesType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void IFF_ActiveModesType::destroy(uci::type::IFF_ActiveModesType& accessor) {
  delete dynamic_cast<asb_uci::type::IFF_ActiveModesType*>(&accessor);
}

} // namespace type

} // namespace uci

