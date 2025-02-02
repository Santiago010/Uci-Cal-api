/** @file DLZ_DataType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:18 PM
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

#include "extxml_uci/type/DLZ_DataType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extxml_uci/type/SteeringUnitVectorType.h"
#include "extxml_uci/type/Velocity2D_Type.h"
#include "extxml_uci/util/DerivedTypesDeserializer.h"
#include "extxml_uci/util/SerializationHelpers.h"
#include "uci/type/DLZ_DataType.h"

/**  */
namespace extxml_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace DLZ_DataType_Names {

constexpr const char* Extern_Type_Name{"DLZ_DataType"};
constexpr const char* RangeTurnAndClose_Name{"RangeTurnAndClose"};
constexpr const char* RangeMinimum_Name{"RangeMinimum"};
constexpr const char* RangeTurnAndRun_Name{"RangeTurnAndRun"};
constexpr const char* RangeProbabilityOfIntercept_Name{"RangeProbabilityOfIntercept"};
constexpr const char* RangeMaxGuidance_Name{"RangeMaxGuidance"};
constexpr const char* RangeOptimal_Name{"RangeOptimal"};
constexpr const char* RangeMaxAero_Name{"RangeMaxAero"};
constexpr const char* TargetClosureRate_Name{"TargetClosureRate"};
constexpr const char* TargetRange_Name{"TargetRange"};
constexpr const char* WeaponToTargetSeekerActivationRange_Name{"WeaponToTargetSeekerActivationRange"};
constexpr const char* WeaponToTargetAutonomousRange_Name{"WeaponToTargetAutonomousRange"};
constexpr const char* WeaponToTargetMPRFRange_Name{"WeaponToTargetMPRFRange"};
constexpr const char* A_Pole_Name{"A_Pole"};
constexpr const char* F_Pole_Name{"F_Pole"};
constexpr const char* M_Pole_Name{"M_Pole"};
constexpr const char* AllowableSteeringError_Name{"AllowableSteeringError"};
constexpr const char* SteeringUnitVector_Name{"SteeringUnitVector"};
constexpr const char* LoftAngle_Name{"LoftAngle"};
constexpr const char* DigitalManuveringCueAngle_Name{"DigitalManuveringCueAngle"};
constexpr const char* TimeOfIntercept_Name{"TimeOfIntercept"};
constexpr const char* TimeToRelease_Name{"TimeToRelease"};
constexpr const char* TimeOfActivation_Name{"TimeOfActivation"};
constexpr const char* TimeOfMPRF_Name{"TimeOfMPRF"};
constexpr const char* TimeOfAutonomous_Name{"TimeOfAutonomous"};

} // namespace DLZ_DataType_Names

bool DLZ_DataType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DLZ_DataType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DLZ_DataType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = extxml_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeTurnAndClose_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeTurnAndClose(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeMinimum_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeMinimum(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeTurnAndRun_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeTurnAndRun(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeProbabilityOfIntercept_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeProbabilityOfIntercept(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeMaxGuidance_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeMaxGuidance(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeOptimal_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeOptimal(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::RangeMaxAero_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setRangeMaxAero(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TargetClosureRate_Name) {
      extxml_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableTargetClosureRate(extxml_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TargetRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTargetRange(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::WeaponToTargetSeekerActivationRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setWeaponToTargetSeekerActivationRange(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::WeaponToTargetAutonomousRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setWeaponToTargetAutonomousRange(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::WeaponToTargetMPRFRange_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setWeaponToTargetMPRFRange(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::A_Pole_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setA_Pole(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::F_Pole_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setF_Pole(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::M_Pole_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setM_Pole(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::AllowableSteeringError_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setAllowableSteeringError(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::SteeringUnitVector_Name) {
      SteeringUnitVectorType::deserialize(valueType.second, accessor.enableSteeringUnitVector(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::LoftAngle_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setLoftAngle(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::DigitalManuveringCueAngle_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setDigitalManuveringCueAngle(extxml_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TimeOfIntercept_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimeOfIntercept(extxml_uci::util::SerializationHelpers::deserializeTime(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TimeToRelease_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimeToRelease(extxml_uci::util::SerializationHelpers::deserializeTime(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TimeOfActivation_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimeOfActivation(extxml_uci::util::SerializationHelpers::deserializeTime(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TimeOfMPRF_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimeOfMPRF(extxml_uci::util::SerializationHelpers::deserializeTime(*value));
      }
    } else if (valueType.first == nsPrefix + DLZ_DataType_Names::TimeOfAutonomous_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setTimeOfAutonomous(extxml_uci::util::SerializationHelpers::deserializeTime(*value));
      }
    }
  }
  return true;
}

std::string DLZ_DataType::serialize(const uci::type::DLZ_DataType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? DLZ_DataType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extxml_uci::util::SerializationHelpers::addTypeAttribute(node, DLZ_DataType_Names::Extern_Type_Name);
  }
  if (accessor.hasRangeTurnAndClose()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeTurnAndClose(), node, DLZ_DataType_Names::RangeTurnAndClose_Name);
  }
  extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeMinimum(), node, DLZ_DataType_Names::RangeMinimum_Name);
  extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeTurnAndRun(), node, DLZ_DataType_Names::RangeTurnAndRun_Name);
  extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeProbabilityOfIntercept(), node, DLZ_DataType_Names::RangeProbabilityOfIntercept_Name);
  extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeMaxGuidance(), node, DLZ_DataType_Names::RangeMaxGuidance_Name);
  extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeOptimal(), node, DLZ_DataType_Names::RangeOptimal_Name);
  extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getRangeMaxAero(), node, DLZ_DataType_Names::RangeMaxAero_Name);
  Velocity2D_Type::serialize(accessor.getTargetClosureRate(), node, DLZ_DataType_Names::TargetClosureRate_Name);
  extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getTargetRange(), node, DLZ_DataType_Names::TargetRange_Name);
  if (accessor.hasWeaponToTargetSeekerActivationRange()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getWeaponToTargetSeekerActivationRange(), node, DLZ_DataType_Names::WeaponToTargetSeekerActivationRange_Name);
  }
  if (accessor.hasWeaponToTargetAutonomousRange()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getWeaponToTargetAutonomousRange(), node, DLZ_DataType_Names::WeaponToTargetAutonomousRange_Name);
  }
  if (accessor.hasWeaponToTargetMPRFRange()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getWeaponToTargetMPRFRange(), node, DLZ_DataType_Names::WeaponToTargetMPRFRange_Name);
  }
  if (accessor.hasA_Pole()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getA_Pole(), node, DLZ_DataType_Names::A_Pole_Name);
  }
  if (accessor.hasF_Pole()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getF_Pole(), node, DLZ_DataType_Names::F_Pole_Name);
  }
  if (accessor.hasM_Pole()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getM_Pole(), node, DLZ_DataType_Names::M_Pole_Name);
  }
  if (accessor.hasAllowableSteeringError()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getAllowableSteeringError(), node, DLZ_DataType_Names::AllowableSteeringError_Name);
  }
  if (accessor.hasSteeringUnitVector()) {
    SteeringUnitVectorType::serialize(accessor.getSteeringUnitVector(), node, DLZ_DataType_Names::SteeringUnitVector_Name);
  }
  if (accessor.hasLoftAngle()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getLoftAngle(), node, DLZ_DataType_Names::LoftAngle_Name);
  }
  if (accessor.hasDigitalManuveringCueAngle()) {
    extxml_uci::util::SerializationHelpers::serializeDouble(accessor.getDigitalManuveringCueAngle(), node, DLZ_DataType_Names::DigitalManuveringCueAngle_Name);
  }
  extxml_uci::util::SerializationHelpers::serializeTime(accessor.getTimeOfIntercept(), node, DLZ_DataType_Names::TimeOfIntercept_Name);
  extxml_uci::util::SerializationHelpers::serializeTime(accessor.getTimeToRelease(), node, DLZ_DataType_Names::TimeToRelease_Name);
  if (accessor.hasTimeOfActivation()) {
    extxml_uci::util::SerializationHelpers::serializeTime(accessor.getTimeOfActivation(), node, DLZ_DataType_Names::TimeOfActivation_Name);
  }
  if (accessor.hasTimeOfMPRF()) {
    extxml_uci::util::SerializationHelpers::serializeTime(accessor.getTimeOfMPRF(), node, DLZ_DataType_Names::TimeOfMPRF_Name);
  }
  if (accessor.hasTimeOfAutonomous()) {
    extxml_uci::util::SerializationHelpers::serializeTime(accessor.getTimeOfAutonomous(), node, DLZ_DataType_Names::TimeOfAutonomous_Name);
  }
  if (createNode) {
    propTree.add_child(generatedNodeName, node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extxml_uci

