/** @file IFF_SubmodesType.cpp
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

#include "../../../include/asb_uci/type/IFF_SubmodesType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AirTargetVolumeCommandType.h"
#include "../../../include/asb_uci/type/IFF_ActiveModesType.h"
#include "../../../include/asb_uci/type/RepetitionType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AirTargetVolumeCommandType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_ActiveModesType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_SubmodesType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RepetitionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

IFF_SubmodesType::IFF_SubmodesType()
  : iFF_ActiveModes_Accessor{boost::make_unique<IFF_ActiveModes>(1, SIZE_MAX)},
    targetVolume_Accessor{boost::make_unique<TargetVolume>(0, SIZE_MAX)} {
}

IFF_SubmodesType::~IFF_SubmodesType() = default;

void IFF_SubmodesType::copy(const uci::type::IFF_SubmodesType& accessor) {
  copyImpl(accessor, false);
}

void IFF_SubmodesType::copyImpl(const uci::type::IFF_SubmodesType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const IFF_SubmodesType&>(accessor);
    setIFF_ActiveModes(*(accessorImpl.iFF_ActiveModes_Accessor));
    setTargetVolume(*(accessorImpl.targetVolume_Accessor));
    if (accessorImpl.repetition_Accessor) {
      setRepetition(*(accessorImpl.repetition_Accessor));
    } else {
      repetition_Accessor.reset();
    }
  }
}

void IFF_SubmodesType::reset() noexcept {
  iFF_ActiveModes_Accessor->reset();
  targetVolume_Accessor->reset();
  repetition_Accessor.reset();
}

const uci::type::IFF_SubmodesType::IFF_ActiveModes& IFF_SubmodesType::getIFF_ActiveModes() const {
  return *iFF_ActiveModes_Accessor;
}

uci::type::IFF_SubmodesType::IFF_ActiveModes& IFF_SubmodesType::getIFF_ActiveModes() {
  return *iFF_ActiveModes_Accessor;
}

uci::type::IFF_SubmodesType& IFF_SubmodesType::setIFF_ActiveModes(const uci::type::IFF_SubmodesType::IFF_ActiveModes& accessor) {
  if (&accessor != iFF_ActiveModes_Accessor.get()) {
    iFF_ActiveModes_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::IFF_SubmodesType::TargetVolume& IFF_SubmodesType::getTargetVolume() const {
  return *targetVolume_Accessor;
}

uci::type::IFF_SubmodesType::TargetVolume& IFF_SubmodesType::getTargetVolume() {
  return *targetVolume_Accessor;
}

uci::type::IFF_SubmodesType& IFF_SubmodesType::setTargetVolume(const uci::type::IFF_SubmodesType::TargetVolume& accessor) {
  if (&accessor != targetVolume_Accessor.get()) {
    targetVolume_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

uci::type::RepetitionType& IFF_SubmodesType::getRepetition_() const {
  if (repetition_Accessor) {
    return *repetition_Accessor;
  }
  throw uci::base::UCIException("Error in getRepetition(): An attempt was made to get an optional field that was not enabled, call hasRepetition() to determine if it is safe to call getRepetition()");
}

const uci::type::RepetitionType& IFF_SubmodesType::getRepetition() const {
  return getRepetition_();
}

uci::type::RepetitionType& IFF_SubmodesType::getRepetition() {
  return getRepetition_();
}

uci::type::IFF_SubmodesType& IFF_SubmodesType::setRepetition(const uci::type::RepetitionType& accessor) {
  enableRepetition();
  if (&accessor != repetition_Accessor.get()) {
    repetition_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool IFF_SubmodesType::hasRepetition() const noexcept {
  return static_cast<bool>(repetition_Accessor);
}

uci::type::RepetitionType& IFF_SubmodesType::enableRepetition(uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::repetitionType : type};
  if ((!repetition_Accessor) || (repetition_Accessor->getAccessorType() != requestedType)) {
    repetition_Accessor = RepetitionType::create(requestedType);
    if (!repetition_Accessor) {
      throw uci::base::UCIException("Error in enableRepetition(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *repetition_Accessor;
}

uci::type::IFF_SubmodesType& IFF_SubmodesType::clearRepetition() noexcept {
  repetition_Accessor.reset();
  return *this;
}

std::unique_ptr<IFF_SubmodesType> IFF_SubmodesType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::iFF_SubmodesType : type};
  return (requestedType == uci::type::accessorType::iFF_SubmodesType) ? boost::make_unique<IFF_SubmodesType>() : nullptr;
}

/**  */
namespace IFF_SubmodesType_Names {

constexpr const char* Extern_Type_Name{"IFF_SubmodesType"};
constexpr const char* IFF_ActiveModes_Name{"IFF_ActiveModes"};
constexpr const char* TargetVolume_Name{"TargetVolume"};
constexpr const char* Repetition_Name{"Repetition"};

} // namespace IFF_SubmodesType_Names

void IFF_SubmodesType::deserialize(const boost::property_tree::ptree& propTree, uci::type::IFF_SubmodesType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = IFF_SubmodesType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + IFF_SubmodesType_Names::IFF_ActiveModes_Name) {
      uci::type::IFF_SubmodesType::IFF_ActiveModes& boundedList = accessor.getIFF_ActiveModes();
      const uci::type::IFF_SubmodesType::IFF_ActiveModes::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::IFF_ActiveModesType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IFF_SubmodesType_Names::TargetVolume_Name) {
      uci::type::IFF_SubmodesType::TargetVolume& boundedList = accessor.getTargetVolume();
      const uci::type::IFF_SubmodesType::TargetVolume::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::AirTargetVolumeCommandType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + IFF_SubmodesType_Names::Repetition_Name) {
      RepetitionType::deserialize(valueType.second, accessor.enableRepetition(), nodeName, nsPrefix);
    }
  }
}

std::string IFF_SubmodesType::serialize(const uci::type::IFF_SubmodesType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? IFF_SubmodesType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, IFF_SubmodesType_Names::Extern_Type_Name);
  }
  {
    const uci::type::IFF_SubmodesType::IFF_ActiveModes& boundedList = accessor.getIFF_ActiveModes();
    for (uci::type::IFF_SubmodesType::IFF_ActiveModes::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::IFF_ActiveModesType::serialize(boundedList.at(i), node, IFF_SubmodesType_Names::IFF_ActiveModes_Name);
    }
  }
  {
    const uci::type::IFF_SubmodesType::TargetVolume& boundedList = accessor.getTargetVolume();
    for (uci::type::IFF_SubmodesType::TargetVolume::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::AirTargetVolumeCommandType::serialize(boundedList.at(i), node, IFF_SubmodesType_Names::TargetVolume_Name);
    }
  }
  if (accessor.hasRepetition()) {
    RepetitionType::serialize(accessor.getRepetition(), node, IFF_SubmodesType_Names::Repetition_Name);
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

uci::type::IFF_SubmodesType& IFF_SubmodesType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::IFF_SubmodesType>().release());
}

uci::type::IFF_SubmodesType& IFF_SubmodesType::create(const uci::type::IFF_SubmodesType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::IFF_SubmodesType> newAccessor{boost::make_unique<asb_uci::type::IFF_SubmodesType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void IFF_SubmodesType::destroy(uci::type::IFF_SubmodesType& accessor) {
  delete dynamic_cast<asb_uci::type::IFF_SubmodesType*>(&accessor);
}

} // namespace type

} // namespace uci

