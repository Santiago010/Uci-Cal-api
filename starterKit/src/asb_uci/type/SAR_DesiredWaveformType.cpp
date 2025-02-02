/** @file SAR_DesiredWaveformType.cpp
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

#include "../../../include/asb_uci/type/SAR_DesiredWaveformType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/ForeignKeyType.h"
#include "../../../include/asb_uci/type/SAR_WaveformSelectionEnum.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ForeignKeyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SAR_DesiredWaveformType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SAR_WaveformSelectionEnum.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

SAR_DesiredWaveformType::SAR_DesiredWaveformType() = default;

SAR_DesiredWaveformType::~SAR_DesiredWaveformType() = default;

void SAR_DesiredWaveformType::copy(const uci::type::SAR_DesiredWaveformType& accessor) {
  copyImpl(accessor, false);
}

void SAR_DesiredWaveformType::copyImpl(const uci::type::SAR_DesiredWaveformType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const SAR_DesiredWaveformType&>(accessor);
    if (accessorImpl.waveformType_Accessor) {
      setWaveformType(*(accessorImpl.waveformType_Accessor));
    } else {
      waveformType_Accessor.reset();
    }
    if (accessorImpl.foreignWaveform_Accessor) {
      setForeignWaveform(*(accessorImpl.foreignWaveform_Accessor));
    } else {
      foreignWaveform_Accessor.reset();
    }
  }
}

void SAR_DesiredWaveformType::reset() noexcept {
  waveformType_Accessor.reset();
  foreignWaveform_Accessor.reset();
}

uci::type::SAR_DesiredWaveformType::SAR_DesiredWaveformTypeChoice SAR_DesiredWaveformType::getSAR_DesiredWaveformTypeChoiceOrdinal() const noexcept {
  if (waveformType_Accessor) {
    return SAR_DESIREDWAVEFORMTYPE_CHOICE_WAVEFORMTYPE;
  }
  if (foreignWaveform_Accessor) {
    return SAR_DESIREDWAVEFORMTYPE_CHOICE_FOREIGNWAVEFORM;
  }
  return SAR_DESIREDWAVEFORMTYPE_CHOICE_NONE;
}

uci::type::SAR_DesiredWaveformType& SAR_DesiredWaveformType::setSAR_DesiredWaveformTypeChoiceOrdinal(uci::type::SAR_DesiredWaveformType::SAR_DesiredWaveformTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case SAR_DESIREDWAVEFORMTYPE_CHOICE_WAVEFORMTYPE:
      chooseWaveformType("setSAR_DesiredWaveformTypeChoiceOrdinal", type);
      break;
    case SAR_DESIREDWAVEFORMTYPE_CHOICE_FOREIGNWAVEFORM:
      chooseForeignWaveform("setSAR_DesiredWaveformTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setSAR_DesiredWaveformTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::SAR_WaveformSelectionEnum& SAR_DesiredWaveformType::getWaveformType_() const {
  if (waveformType_Accessor) {
    return *waveformType_Accessor;
  }
  throw uci::base::UCIException("Error in getWaveformType(): Unable to get WaveformType, field not selected");
}

const uci::type::SAR_WaveformSelectionEnum& SAR_DesiredWaveformType::getWaveformType() const {
  return getWaveformType_();
}

uci::type::SAR_WaveformSelectionEnum& SAR_DesiredWaveformType::getWaveformType() {
  return getWaveformType_();
}

uci::type::SAR_DesiredWaveformType& SAR_DesiredWaveformType::setWaveformType(const uci::type::SAR_WaveformSelectionEnum& accessor) {
  chooseWaveformType();
  if (&accessor != waveformType_Accessor.get()) {
    waveformType_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::SAR_DesiredWaveformType& SAR_DesiredWaveformType::setWaveformType(uci::type::SAR_WaveformSelectionEnum::EnumerationItem value) {
  chooseWaveformType().setValue(value);
  return *this;
}

bool SAR_DesiredWaveformType::isWaveformType() const noexcept {
  return static_cast<bool>(waveformType_Accessor);
}

uci::type::SAR_WaveformSelectionEnum& SAR_DesiredWaveformType::chooseWaveformType(const std::string& method, uci::base::accessorType::AccessorType type) {
  foreignWaveform_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sAR_WaveformSelectionEnum : type};
  if ((!waveformType_Accessor) || (waveformType_Accessor->getAccessorType() != requestedType)) {
    waveformType_Accessor = SAR_WaveformSelectionEnum::create(type);
    if (!waveformType_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *waveformType_Accessor;
}

uci::type::SAR_WaveformSelectionEnum& SAR_DesiredWaveformType::chooseWaveformType(uci::base::accessorType::AccessorType type) {
  return chooseWaveformType("chooseWaveformType", type);
}

uci::type::ForeignKeyType& SAR_DesiredWaveformType::getForeignWaveform_() const {
  if (foreignWaveform_Accessor) {
    return *foreignWaveform_Accessor;
  }
  throw uci::base::UCIException("Error in getForeignWaveform(): Unable to get ForeignWaveform, field not selected");
}

const uci::type::ForeignKeyType& SAR_DesiredWaveformType::getForeignWaveform() const {
  return getForeignWaveform_();
}

uci::type::ForeignKeyType& SAR_DesiredWaveformType::getForeignWaveform() {
  return getForeignWaveform_();
}

uci::type::SAR_DesiredWaveformType& SAR_DesiredWaveformType::setForeignWaveform(const uci::type::ForeignKeyType& accessor) {
  chooseForeignWaveform("setForeignWaveform", accessor.getAccessorType());
  if (&accessor != foreignWaveform_Accessor.get()) {
    foreignWaveform_Accessor->copyImpl(accessor, true);
  }
  return *this;
}

bool SAR_DesiredWaveformType::isForeignWaveform() const noexcept {
  return static_cast<bool>(foreignWaveform_Accessor);
}

uci::type::ForeignKeyType& SAR_DesiredWaveformType::chooseForeignWaveform(const std::string& method, uci::base::accessorType::AccessorType type) {
  waveformType_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::foreignKeyType : type};
  if ((!foreignWaveform_Accessor) || (foreignWaveform_Accessor->getAccessorType() != requestedType)) {
    foreignWaveform_Accessor = ForeignKeyType::create(type);
    if (!foreignWaveform_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *foreignWaveform_Accessor;
}

uci::type::ForeignKeyType& SAR_DesiredWaveformType::chooseForeignWaveform(uci::base::accessorType::AccessorType type) {
  return chooseForeignWaveform("chooseForeignWaveform", type);
}

std::unique_ptr<SAR_DesiredWaveformType> SAR_DesiredWaveformType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::sAR_DesiredWaveformType : type};
  return (requestedType == uci::type::accessorType::sAR_DesiredWaveformType) ? boost::make_unique<SAR_DesiredWaveformType>() : nullptr;
}

/**  */
namespace SAR_DesiredWaveformType_Names {

constexpr const char* Extern_Type_Name{"SAR_DesiredWaveformType"};
constexpr const char* WaveformType_Name{"WaveformType"};
constexpr const char* ForeignWaveform_Name{"ForeignWaveform"};

} // namespace SAR_DesiredWaveformType_Names

void SAR_DesiredWaveformType::deserialize(const boost::property_tree::ptree& propTree, uci::type::SAR_DesiredWaveformType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = SAR_DesiredWaveformType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + SAR_DesiredWaveformType_Names::WaveformType_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseWaveformType().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + SAR_DesiredWaveformType_Names::ForeignWaveform_Name) {
      asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.chooseForeignWaveform(asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    }
  }
}

std::string SAR_DesiredWaveformType::serialize(const uci::type::SAR_DesiredWaveformType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? SAR_DesiredWaveformType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, SAR_DesiredWaveformType_Names::Extern_Type_Name);
  }
  if (accessor.isWaveformType()) {
    SAR_WaveformSelectionEnum::serialize(accessor.getWaveformType(), node, SAR_DesiredWaveformType_Names::WaveformType_Name, false);
  } else if (accessor.isForeignWaveform()) {
    ForeignKeyType::serialize(accessor.getForeignWaveform(), node, SAR_DesiredWaveformType_Names::ForeignWaveform_Name);
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

uci::type::SAR_DesiredWaveformType& SAR_DesiredWaveformType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::SAR_DesiredWaveformType>().release());
}

uci::type::SAR_DesiredWaveformType& SAR_DesiredWaveformType::create(const uci::type::SAR_DesiredWaveformType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::SAR_DesiredWaveformType> newAccessor{boost::make_unique<asb_uci::type::SAR_DesiredWaveformType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void SAR_DesiredWaveformType::destroy(uci::type::SAR_DesiredWaveformType& accessor) {
  delete dynamic_cast<asb_uci::type::SAR_DesiredWaveformType*>(&accessor);
}

} // namespace type

} // namespace uci

