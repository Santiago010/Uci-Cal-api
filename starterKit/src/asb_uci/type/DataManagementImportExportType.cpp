/** @file DataManagementImportExportType.cpp
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#include "../../../include/asb_uci/type/DataManagementImportExportType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/AttributedURI_Type.h"
#include "../../../include/asb_uci/type/MissionID_Type.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AttributedURI_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DataManagementImportExportType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionID_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

DataManagementImportExportType::DataManagementImportExportType()
  : missionID_Accessor{boost::make_unique<MissionID_Type>()},
    workingPathURI_Accessor{boost::make_unique<AttributedURI_Type>()} {
}

DataManagementImportExportType::~DataManagementImportExportType() = default;

void DataManagementImportExportType::copy(const uci::type::DataManagementImportExportType& accessor) {
  copyImpl(accessor, false);
}

void DataManagementImportExportType::copyImpl(const uci::type::DataManagementImportExportType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const DataManagementImportExportType&>(accessor);
    setMissionID(*(accessorImpl.missionID_Accessor));
    setWorkingPathURI(*(accessorImpl.workingPathURI_Accessor));
  }
}

void DataManagementImportExportType::reset() noexcept {
  missionID_Accessor->reset();
  workingPathURI_Accessor->reset();
}

const uci::type::MissionID_Type& DataManagementImportExportType::getMissionID() const {
  return *missionID_Accessor;
}

uci::type::MissionID_Type& DataManagementImportExportType::getMissionID() {
  return *missionID_Accessor;
}

uci::type::DataManagementImportExportType& DataManagementImportExportType::setMissionID(const uci::type::MissionID_Type& accessor) {
  if (&accessor != missionID_Accessor.get()) {
    missionID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::AttributedURI_Type& DataManagementImportExportType::getWorkingPathURI() const noexcept {
  return *workingPathURI_Accessor;
}

uci::type::AttributedURI_Type& DataManagementImportExportType::getWorkingPathURI() noexcept {
  return *workingPathURI_Accessor;
}

uci::type::DataManagementImportExportType& DataManagementImportExportType::setWorkingPathURI(const uci::type::AttributedURI_Type& value) {
  return setWorkingPathURI(value.c_str());
}

uci::type::DataManagementImportExportType& DataManagementImportExportType::setWorkingPathURI(const std::string& value) {
  return setWorkingPathURI(value.c_str());
}

uci::type::DataManagementImportExportType& DataManagementImportExportType::setWorkingPathURI(const char* value) {
  workingPathURI_Accessor->setStringValue(value);
  return *this;
}

std::unique_ptr<DataManagementImportExportType> DataManagementImportExportType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::dataManagementImportExportType : type};
  return (requestedType == uci::type::accessorType::dataManagementImportExportType) ? boost::make_unique<DataManagementImportExportType>() : nullptr;
}

/**  */
namespace DataManagementImportExportType_Names {

constexpr const char* Extern_Type_Name{"DataManagementImportExportType"};
constexpr const char* MissionID_Name{"MissionID"};
constexpr const char* WorkingPathURI_Name{"WorkingPathURI"};

} // namespace DataManagementImportExportType_Names

void DataManagementImportExportType::deserialize(const boost::property_tree::ptree& propTree, uci::type::DataManagementImportExportType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = DataManagementImportExportType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + DataManagementImportExportType_Names::MissionID_Name) {
      MissionID_Type::deserialize(valueType.second, accessor.getMissionID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + DataManagementImportExportType_Names::WorkingPathURI_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setWorkingPathURI(*value);
      }
    }
  }
}

std::string DataManagementImportExportType::serialize(const uci::type::DataManagementImportExportType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? DataManagementImportExportType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, DataManagementImportExportType_Names::Extern_Type_Name);
  }
  MissionID_Type::serialize(accessor.getMissionID(), node, DataManagementImportExportType_Names::MissionID_Name);
  asb_uci::util::SerializationHelpers::serializeString(accessor.getWorkingPathURI(), node, DataManagementImportExportType_Names::WorkingPathURI_Name);
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

uci::type::DataManagementImportExportType& DataManagementImportExportType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::DataManagementImportExportType>().release());
}

uci::type::DataManagementImportExportType& DataManagementImportExportType::create(const uci::type::DataManagementImportExportType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::DataManagementImportExportType> newAccessor{boost::make_unique<asb_uci::type::DataManagementImportExportType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void DataManagementImportExportType::destroy(uci::type::DataManagementImportExportType& accessor) {
  delete dynamic_cast<asb_uci::type::DataManagementImportExportType*>(&accessor);
}

} // namespace type

} // namespace uci

