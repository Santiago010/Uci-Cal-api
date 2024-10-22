/** @file COMINT_SubcapabilityGeolocationType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:22 PM
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

#include "extjson_uci/type/COMINT_SubcapabilityGeolocationType.h"

#include <string>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "extjson_uci/type/EntityID_Type.h"
#include "extjson_uci/type/SignalGeolocationControlEnum.h"
#include "extjson_uci/type/SignalGeolocationMethodEnum.h"
#include "extjson_uci/util/DerivedTypesDeserializer.h"
#include "extjson_uci/util/SerializationHelpers.h"
#include "uci/type/COMINT_SubcapabilityGeolocationType.h"

/**  */
namespace extjson_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/**  */
namespace COMINT_SubcapabilityGeolocationType_Names {

constexpr const char* Extern_Type_Name{"COMINT_SubcapabilityGeolocationType"};
constexpr const char* EntityID_Name{"EntityID"};
constexpr const char* GeolocationState_Name{"GeolocationState"};
constexpr const char* GeolocationType_Name{"GeolocationType"};

} // namespace COMINT_SubcapabilityGeolocationType_Names

bool COMINT_SubcapabilityGeolocationType::deserialize(const boost::property_tree::ptree& propTree, uci::type::COMINT_SubcapabilityGeolocationType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = COMINT_SubcapabilityGeolocationType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if (valueType.first == nsPrefix + COMINT_SubcapabilityGeolocationType_Names::EntityID_Name) {
      extjson_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, accessor.enableEntityID(extjson_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix)), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + COMINT_SubcapabilityGeolocationType_Names::GeolocationState_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.getGeolocationState().setValueFromName(*value);
      }
    } else if (valueType.first == nsPrefix + COMINT_SubcapabilityGeolocationType_Names::GeolocationType_Name) {
      SignalGeolocationMethodEnum::deserializeList(valueType.second, accessor.getGeolocationType());
    }
  }
  return true;
}

std::string COMINT_SubcapabilityGeolocationType::serialize(const uci::type::COMINT_SubcapabilityGeolocationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{nodeName.empty() ? COMINT_SubcapabilityGeolocationType_Names::Extern_Type_Name : nodeName};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    extjson_uci::util::SerializationHelpers::addTypeAttribute(node, COMINT_SubcapabilityGeolocationType_Names::Extern_Type_Name);
  }
  EntityID_Type::serialize(accessor.getEntityID(), node, COMINT_SubcapabilityGeolocationType_Names::EntityID_Name);
  SignalGeolocationControlEnum::serialize(accessor.getGeolocationState(), node, COMINT_SubcapabilityGeolocationType_Names::GeolocationState_Name, false);
  {
    SignalGeolocationMethodEnum::serializeList(accessor.getGeolocationType(), node, COMINT_SubcapabilityGeolocationType_Names::GeolocationType_Name);
  }
  if (createNode) {
    propTree.add_child(boost::property_tree::ptree::path_type(generatedNodeName, '#'), node);
  }
  return generatedNodeName;
}

} // namespace type

} // namespace extjson_uci

