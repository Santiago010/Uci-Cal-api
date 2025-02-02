/** @file ECEF_PositionVelocityCovarianceType.cpp
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

#include "../../../include/asb_uci/type/ECEF_PositionVelocityCovarianceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ECEF_PositionVelocityCovarianceType.h"
#include "../../../../cppInterface/2.3.2/include/xs/type/simpleXmlSchemaPrimitives.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

ECEF_PositionVelocityCovarianceType::ECEF_PositionVelocityCovarianceType() = default;

ECEF_PositionVelocityCovarianceType::~ECEF_PositionVelocityCovarianceType() = default;

void ECEF_PositionVelocityCovarianceType::copy(const uci::type::ECEF_PositionVelocityCovarianceType& accessor) {
  copyImpl(accessor, false);
}

void ECEF_PositionVelocityCovarianceType::copyImpl(const uci::type::ECEF_PositionVelocityCovarianceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const ECEF_PositionVelocityCovarianceType&>(accessor);
    setPxVx(accessorImpl.pxVx_Accessor);
    setPxVy(accessorImpl.pxVy_Accessor);
    setPxVz(accessorImpl.pxVz_Accessor);
    setPyVx(accessorImpl.pyVx_Accessor);
    setPyVy(accessorImpl.pyVy_Accessor);
    setPyVz(accessorImpl.pyVz_Accessor);
    setPzVx(accessorImpl.pzVx_Accessor);
    setPzVy(accessorImpl.pzVy_Accessor);
    setPzVz(accessorImpl.pzVz_Accessor);
  }
}

void ECEF_PositionVelocityCovarianceType::reset() noexcept {
  pxVx_Accessor = 0.0;
  pxVy_Accessor = 0.0;
  pxVz_Accessor = 0.0;
  pyVx_Accessor = 0.0;
  pyVy_Accessor = 0.0;
  pyVz_Accessor = 0.0;
  pzVx_Accessor = 0.0;
  pzVy_Accessor = 0.0;
  pzVz_Accessor = 0.0;
}

xs::Double ECEF_PositionVelocityCovarianceType::getPxVx() const {
  return pxVx_Accessor;
}

uci::type::ECEF_PositionVelocityCovarianceType& ECEF_PositionVelocityCovarianceType::setPxVx(xs::Double value) {
  pxVx_Accessor = value;
  return *this;
}


xs::Double ECEF_PositionVelocityCovarianceType::getPxVy() const {
  return pxVy_Accessor;
}

uci::type::ECEF_PositionVelocityCovarianceType& ECEF_PositionVelocityCovarianceType::setPxVy(xs::Double value) {
  pxVy_Accessor = value;
  return *this;
}


xs::Double ECEF_PositionVelocityCovarianceType::getPxVz() const {
  return pxVz_Accessor;
}

uci::type::ECEF_PositionVelocityCovarianceType& ECEF_PositionVelocityCovarianceType::setPxVz(xs::Double value) {
  pxVz_Accessor = value;
  return *this;
}


xs::Double ECEF_PositionVelocityCovarianceType::getPyVx() const {
  return pyVx_Accessor;
}

uci::type::ECEF_PositionVelocityCovarianceType& ECEF_PositionVelocityCovarianceType::setPyVx(xs::Double value) {
  pyVx_Accessor = value;
  return *this;
}


xs::Double ECEF_PositionVelocityCovarianceType::getPyVy() const {
  return pyVy_Accessor;
}

uci::type::ECEF_PositionVelocityCovarianceType& ECEF_PositionVelocityCovarianceType::setPyVy(xs::Double value) {
  pyVy_Accessor = value;
  return *this;
}


xs::Double ECEF_PositionVelocityCovarianceType::getPyVz() const {
  return pyVz_Accessor;
}

uci::type::ECEF_PositionVelocityCovarianceType& ECEF_PositionVelocityCovarianceType::setPyVz(xs::Double value) {
  pyVz_Accessor = value;
  return *this;
}


xs::Double ECEF_PositionVelocityCovarianceType::getPzVx() const {
  return pzVx_Accessor;
}

uci::type::ECEF_PositionVelocityCovarianceType& ECEF_PositionVelocityCovarianceType::setPzVx(xs::Double value) {
  pzVx_Accessor = value;
  return *this;
}


xs::Double ECEF_PositionVelocityCovarianceType::getPzVy() const {
  return pzVy_Accessor;
}

uci::type::ECEF_PositionVelocityCovarianceType& ECEF_PositionVelocityCovarianceType::setPzVy(xs::Double value) {
  pzVy_Accessor = value;
  return *this;
}


xs::Double ECEF_PositionVelocityCovarianceType::getPzVz() const {
  return pzVz_Accessor;
}

uci::type::ECEF_PositionVelocityCovarianceType& ECEF_PositionVelocityCovarianceType::setPzVz(xs::Double value) {
  pzVz_Accessor = value;
  return *this;
}


std::unique_ptr<ECEF_PositionVelocityCovarianceType> ECEF_PositionVelocityCovarianceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::eCEF_PositionVelocityCovarianceType : type};
  return (requestedType == uci::type::accessorType::eCEF_PositionVelocityCovarianceType) ? boost::make_unique<ECEF_PositionVelocityCovarianceType>() : nullptr;
}

/**  */
namespace ECEF_PositionVelocityCovarianceType_Names {

constexpr const char* Extern_Type_Name{"ECEF_PositionVelocityCovarianceType"};
constexpr const char* PxVx_Name{"PxVx"};
constexpr const char* PxVy_Name{"PxVy"};
constexpr const char* PxVz_Name{"PxVz"};
constexpr const char* PyVx_Name{"PyVx"};
constexpr const char* PyVy_Name{"PyVy"};
constexpr const char* PyVz_Name{"PyVz"};
constexpr const char* PzVx_Name{"PzVx"};
constexpr const char* PzVy_Name{"PzVy"};
constexpr const char* PzVz_Name{"PzVz"};

} // namespace ECEF_PositionVelocityCovarianceType_Names

void ECEF_PositionVelocityCovarianceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::ECEF_PositionVelocityCovarianceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = ECEF_PositionVelocityCovarianceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PxVx_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPxVx(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PxVy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPxVy(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PxVz_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPxVz(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PyVx_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPyVx(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PyVy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPyVy(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PyVz_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPyVz(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PzVx_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPzVx(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PzVy_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPzVy(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    } else if (valueType.first == nsPrefix + ECEF_PositionVelocityCovarianceType_Names::PzVz_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.setPzVz(asb_uci::util::SerializationHelpers::deserializeDouble(*value));
      }
    }
  }
}

std::string ECEF_PositionVelocityCovarianceType::serialize(const uci::type::ECEF_PositionVelocityCovarianceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? ECEF_PositionVelocityCovarianceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, ECEF_PositionVelocityCovarianceType_Names::Extern_Type_Name);
  }
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getPxVx(), node, ECEF_PositionVelocityCovarianceType_Names::PxVx_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getPxVy(), node, ECEF_PositionVelocityCovarianceType_Names::PxVy_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getPxVz(), node, ECEF_PositionVelocityCovarianceType_Names::PxVz_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getPyVx(), node, ECEF_PositionVelocityCovarianceType_Names::PyVx_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getPyVy(), node, ECEF_PositionVelocityCovarianceType_Names::PyVy_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getPyVz(), node, ECEF_PositionVelocityCovarianceType_Names::PyVz_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getPzVx(), node, ECEF_PositionVelocityCovarianceType_Names::PzVx_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getPzVy(), node, ECEF_PositionVelocityCovarianceType_Names::PzVy_Name);
  asb_uci::util::SerializationHelpers::serializeDouble(accessor.getPzVz(), node, ECEF_PositionVelocityCovarianceType_Names::PzVz_Name);
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

uci::type::ECEF_PositionVelocityCovarianceType& ECEF_PositionVelocityCovarianceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::ECEF_PositionVelocityCovarianceType>().release());
}

uci::type::ECEF_PositionVelocityCovarianceType& ECEF_PositionVelocityCovarianceType::create(const uci::type::ECEF_PositionVelocityCovarianceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::ECEF_PositionVelocityCovarianceType> newAccessor{boost::make_unique<asb_uci::type::ECEF_PositionVelocityCovarianceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void ECEF_PositionVelocityCovarianceType::destroy(uci::type::ECEF_PositionVelocityCovarianceType& accessor) {
  delete dynamic_cast<asb_uci::type::ECEF_PositionVelocityCovarianceType*>(&accessor);
}

} // namespace type

} // namespace uci

