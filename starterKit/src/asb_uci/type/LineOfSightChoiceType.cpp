/** @file LineOfSightChoiceType.cpp
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

#include "../../../include/asb_uci/type/LineOfSightChoiceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/LOS3D_KinematicsType.h"
#include "../../../include/asb_uci/type/LOS_MeasurementAndUncertaintyType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LOS3D_KinematicsType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LOS_MeasurementAndUncertaintyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LineOfSightChoiceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

LineOfSightChoiceType::LineOfSightChoiceType() = default;

LineOfSightChoiceType::~LineOfSightChoiceType() = default;

void LineOfSightChoiceType::copy(const uci::type::LineOfSightChoiceType& accessor) {
  copyImpl(accessor, false);
}

void LineOfSightChoiceType::copyImpl(const uci::type::LineOfSightChoiceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const LineOfSightChoiceType&>(accessor);
    if (accessorImpl.lOS_AzEl_Accessor) {
      setLOS_AzEl(*(accessorImpl.lOS_AzEl_Accessor));
    } else {
      lOS_AzEl_Accessor.reset();
    }
    if (accessorImpl.lOS3D_Kinematics_Accessor) {
      setLOS3D_Kinematics(*(accessorImpl.lOS3D_Kinematics_Accessor));
    } else {
      lOS3D_Kinematics_Accessor.reset();
    }
  }
}

void LineOfSightChoiceType::reset() noexcept {
  lOS_AzEl_Accessor.reset();
  lOS3D_Kinematics_Accessor.reset();
}

uci::type::LineOfSightChoiceType::LineOfSightChoiceTypeChoice LineOfSightChoiceType::getLineOfSightChoiceTypeChoiceOrdinal() const noexcept {
  if (lOS_AzEl_Accessor) {
    return LINEOFSIGHTCHOICETYPE_CHOICE_LOS_AZEL;
  }
  if (lOS3D_Kinematics_Accessor) {
    return LINEOFSIGHTCHOICETYPE_CHOICE_LOS3D_KINEMATICS;
  }
  return LINEOFSIGHTCHOICETYPE_CHOICE_NONE;
}

uci::type::LineOfSightChoiceType& LineOfSightChoiceType::setLineOfSightChoiceTypeChoiceOrdinal(uci::type::LineOfSightChoiceType::LineOfSightChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case LINEOFSIGHTCHOICETYPE_CHOICE_LOS_AZEL:
      chooseLOS_AzEl("setLineOfSightChoiceTypeChoiceOrdinal", type);
      break;
    case LINEOFSIGHTCHOICETYPE_CHOICE_LOS3D_KINEMATICS:
      chooseLOS3D_Kinematics("setLineOfSightChoiceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setLineOfSightChoiceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::LOS_MeasurementAndUncertaintyType& LineOfSightChoiceType::getLOS_AzEl_() const {
  if (lOS_AzEl_Accessor) {
    return *lOS_AzEl_Accessor;
  }
  throw uci::base::UCIException("Error in getLOS_AzEl(): Unable to get LOS_AzEl, field not selected");
}

const uci::type::LOS_MeasurementAndUncertaintyType& LineOfSightChoiceType::getLOS_AzEl() const {
  return getLOS_AzEl_();
}

uci::type::LOS_MeasurementAndUncertaintyType& LineOfSightChoiceType::getLOS_AzEl() {
  return getLOS_AzEl_();
}

uci::type::LineOfSightChoiceType& LineOfSightChoiceType::setLOS_AzEl(const uci::type::LOS_MeasurementAndUncertaintyType& accessor) {
  chooseLOS_AzEl();
  if (&accessor != lOS_AzEl_Accessor.get()) {
    lOS_AzEl_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool LineOfSightChoiceType::isLOS_AzEl() const noexcept {
  return static_cast<bool>(lOS_AzEl_Accessor);
}

uci::type::LOS_MeasurementAndUncertaintyType& LineOfSightChoiceType::chooseLOS_AzEl(const std::string& method, uci::base::accessorType::AccessorType type) {
  lOS3D_Kinematics_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::lOS_MeasurementAndUncertaintyType : type};
  if ((!lOS_AzEl_Accessor) || (lOS_AzEl_Accessor->getAccessorType() != requestedType)) {
    lOS_AzEl_Accessor = LOS_MeasurementAndUncertaintyType::create(type);
    if (!lOS_AzEl_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *lOS_AzEl_Accessor;
}

uci::type::LOS_MeasurementAndUncertaintyType& LineOfSightChoiceType::chooseLOS_AzEl(uci::base::accessorType::AccessorType type) {
  return chooseLOS_AzEl("chooseLOS_AzEl", type);
}

uci::type::LOS3D_KinematicsType& LineOfSightChoiceType::getLOS3D_Kinematics_() const {
  if (lOS3D_Kinematics_Accessor) {
    return *lOS3D_Kinematics_Accessor;
  }
  throw uci::base::UCIException("Error in getLOS3D_Kinematics(): Unable to get LOS3D_Kinematics, field not selected");
}

const uci::type::LOS3D_KinematicsType& LineOfSightChoiceType::getLOS3D_Kinematics() const {
  return getLOS3D_Kinematics_();
}

uci::type::LOS3D_KinematicsType& LineOfSightChoiceType::getLOS3D_Kinematics() {
  return getLOS3D_Kinematics_();
}

uci::type::LineOfSightChoiceType& LineOfSightChoiceType::setLOS3D_Kinematics(const uci::type::LOS3D_KinematicsType& accessor) {
  chooseLOS3D_Kinematics();
  if (&accessor != lOS3D_Kinematics_Accessor.get()) {
    lOS3D_Kinematics_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool LineOfSightChoiceType::isLOS3D_Kinematics() const noexcept {
  return static_cast<bool>(lOS3D_Kinematics_Accessor);
}

uci::type::LOS3D_KinematicsType& LineOfSightChoiceType::chooseLOS3D_Kinematics(const std::string& method, uci::base::accessorType::AccessorType type) {
  lOS_AzEl_Accessor.reset();
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::lOS3D_KinematicsType : type};
  if ((!lOS3D_Kinematics_Accessor) || (lOS3D_Kinematics_Accessor->getAccessorType() != requestedType)) {
    lOS3D_Kinematics_Accessor = LOS3D_KinematicsType::create(type);
    if (!lOS3D_Kinematics_Accessor) {
      throw uci::base::UCIException("Error in " + method + "(): Specified type is not equal to nor derived from the native type of object");
    }
  }
  return *lOS3D_Kinematics_Accessor;
}

uci::type::LOS3D_KinematicsType& LineOfSightChoiceType::chooseLOS3D_Kinematics(uci::base::accessorType::AccessorType type) {
  return chooseLOS3D_Kinematics("chooseLOS3D_Kinematics", type);
}

std::unique_ptr<LineOfSightChoiceType> LineOfSightChoiceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::lineOfSightChoiceType : type};
  return (requestedType == uci::type::accessorType::lineOfSightChoiceType) ? boost::make_unique<LineOfSightChoiceType>() : nullptr;
}

/**  */
namespace LineOfSightChoiceType_Names {

constexpr const char* Extern_Type_Name{"LineOfSightChoiceType"};
constexpr const char* LOS_AzEl_Name{"LOS_AzEl"};
constexpr const char* LOS3D_Kinematics_Name{"LOS3D_Kinematics"};

} // namespace LineOfSightChoiceType_Names

void LineOfSightChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::LineOfSightChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = LineOfSightChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + LineOfSightChoiceType_Names::LOS_AzEl_Name) {
      LOS_MeasurementAndUncertaintyType::deserialize(valueType.second, accessor.chooseLOS_AzEl(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + LineOfSightChoiceType_Names::LOS3D_Kinematics_Name) {
      LOS3D_KinematicsType::deserialize(valueType.second, accessor.chooseLOS3D_Kinematics(), nodeName, nsPrefix);
    }
  }
}

std::string LineOfSightChoiceType::serialize(const uci::type::LineOfSightChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? LineOfSightChoiceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, LineOfSightChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isLOS_AzEl()) {
    LOS_MeasurementAndUncertaintyType::serialize(accessor.getLOS_AzEl(), node, LineOfSightChoiceType_Names::LOS_AzEl_Name);
  } else if (accessor.isLOS3D_Kinematics()) {
    LOS3D_KinematicsType::serialize(accessor.getLOS3D_Kinematics(), node, LineOfSightChoiceType_Names::LOS3D_Kinematics_Name);
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

uci::type::LineOfSightChoiceType& LineOfSightChoiceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::LineOfSightChoiceType>().release());
}

uci::type::LineOfSightChoiceType& LineOfSightChoiceType::create(const uci::type::LineOfSightChoiceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::LineOfSightChoiceType> newAccessor{boost::make_unique<asb_uci::type::LineOfSightChoiceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void LineOfSightChoiceType::destroy(uci::type::LineOfSightChoiceType& accessor) {
  delete dynamic_cast<asb_uci::type::LineOfSightChoiceType*>(&accessor);
}

} // namespace type

} // namespace uci

