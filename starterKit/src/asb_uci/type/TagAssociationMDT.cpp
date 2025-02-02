/** @file TagAssociationMDT.cpp
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

#include "../../../include/asb_uci/type/TagAssociationMDT.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/DataRecordBaseType.h"
#include "../../../include/asb_uci/type/SecureStringType.h"
#include "../../../include/asb_uci/type/TagAssociationID_Type.h"
#include "../../../include/asb_uci/type/TagAssociationTargetType.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SecureStringType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TagAssociationID_Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TagAssociationMDT.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TagAssociationTargetType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

TagAssociationMDT::TagAssociationMDT()
  : tagAssociationID_Accessor{boost::make_unique<TagAssociationID_Type>()},
    tag_Accessor{boost::make_unique<Tag>(0, SIZE_MAX)},
    target_Accessor{boost::make_unique<Target>(0, SIZE_MAX)} {
}

TagAssociationMDT::~TagAssociationMDT() = default;

void TagAssociationMDT::copy(const uci::type::TagAssociationMDT& accessor) {
  copyImpl(accessor, false);
}

void TagAssociationMDT::copyImpl(const uci::type::TagAssociationMDT& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    DataRecordBaseType::copyImpl(accessor, false);
    const auto& accessorImpl = dynamic_cast<const TagAssociationMDT&>(accessor);
    setTagAssociationID(*(accessorImpl.tagAssociationID_Accessor));
    setTag(*(accessorImpl.tag_Accessor));
    setTarget(*(accessorImpl.target_Accessor));
  }
}

void TagAssociationMDT::reset() noexcept {
  DataRecordBaseType::reset();
  tagAssociationID_Accessor->reset();
  tag_Accessor->reset();
  target_Accessor->reset();
}

const uci::type::TagAssociationID_Type& TagAssociationMDT::getTagAssociationID() const {
  return *tagAssociationID_Accessor;
}

uci::type::TagAssociationID_Type& TagAssociationMDT::getTagAssociationID() {
  return *tagAssociationID_Accessor;
}

uci::type::TagAssociationMDT& TagAssociationMDT::setTagAssociationID(const uci::type::TagAssociationID_Type& accessor) {
  if (&accessor != tagAssociationID_Accessor.get()) {
    tagAssociationID_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::TagAssociationMDT::Tag& TagAssociationMDT::getTag() const {
  return *tag_Accessor;
}

uci::type::TagAssociationMDT::Tag& TagAssociationMDT::getTag() {
  return *tag_Accessor;
}

uci::type::TagAssociationMDT& TagAssociationMDT::setTag(const uci::type::TagAssociationMDT::Tag& accessor) {
  if (&accessor != tag_Accessor.get()) {
    tag_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

const uci::type::TagAssociationMDT::Target& TagAssociationMDT::getTarget() const {
  return *target_Accessor;
}

uci::type::TagAssociationMDT::Target& TagAssociationMDT::getTarget() {
  return *target_Accessor;
}

uci::type::TagAssociationMDT& TagAssociationMDT::setTarget(const uci::type::TagAssociationMDT::Target& accessor) {
  if (&accessor != target_Accessor.get()) {
    target_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

std::unique_ptr<TagAssociationMDT> TagAssociationMDT::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::tagAssociationMDT : type};
  return (requestedType == uci::type::accessorType::tagAssociationMDT) ? boost::make_unique<TagAssociationMDT>() : nullptr;
}

/**  */
namespace TagAssociationMDT_Names {

constexpr const char* Extern_Type_Name{"TagAssociationMDT"};
constexpr const char* TagAssociationID_Name{"TagAssociationID"};
constexpr const char* Tag_Name{"Tag"};
constexpr const char* Target_Name{"Target"};

} // namespace TagAssociationMDT_Names

void TagAssociationMDT::deserialize(const boost::property_tree::ptree& propTree, uci::type::TagAssociationMDT& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = TagAssociationMDT_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + TagAssociationMDT_Names::TagAssociationID_Name) {
      TagAssociationID_Type::deserialize(valueType.second, accessor.getTagAssociationID(), nodeName, nsPrefix);
    } else if (valueType.first == nsPrefix + TagAssociationMDT_Names::Tag_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::TagAssociationMDT::Tag& boundedList = accessor.getTag();
        const uci::type::TagAssociationMDT::Tag::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1);
        asb_uci::type::SecureStringType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + TagAssociationMDT_Names::Target_Name) {
      uci::type::TagAssociationMDT::Target& boundedList = accessor.getTarget();
      const uci::type::TagAssociationMDT::Target::size_type boundedListSize{boundedList.size()};
      boundedList.resize(boundedListSize + 1);
      asb_uci::type::TagAssociationTargetType::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
    }
  }
  DataRecordBaseType::deserialize(node, accessor, nodeName, nsPrefix);
}

std::string TagAssociationMDT::serialize(const uci::type::TagAssociationMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? TagAssociationMDT_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, TagAssociationMDT_Names::Extern_Type_Name);
  }
  DataRecordBaseType::serialize(accessor, node, "", false, false, false);
  TagAssociationID_Type::serialize(accessor.getTagAssociationID(), node, TagAssociationMDT_Names::TagAssociationID_Name);
  {
    const uci::type::TagAssociationMDT::Tag& boundedList = accessor.getTag();
    for (uci::type::TagAssociationMDT::Tag::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::SecureStringType::serialize(boundedList.at(i), node, TagAssociationMDT_Names::Tag_Name);
    }
  }
  {
    const uci::type::TagAssociationMDT::Target& boundedList = accessor.getTarget();
    for (uci::type::TagAssociationMDT::Target::size_type i = 0, end = boundedList.size(); i < end; ++i) {
      asb_uci::type::TagAssociationTargetType::serialize(boundedList.at(i), node, TagAssociationMDT_Names::Target_Name);
    }
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

uci::type::TagAssociationMDT& TagAssociationMDT::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::TagAssociationMDT>().release());
}

uci::type::TagAssociationMDT& TagAssociationMDT::create(const uci::type::TagAssociationMDT& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::TagAssociationMDT> newAccessor{boost::make_unique<asb_uci::type::TagAssociationMDT>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void TagAssociationMDT::destroy(uci::type::TagAssociationMDT& accessor) {
  delete dynamic_cast<asb_uci::type::TagAssociationMDT*>(&accessor);
}

} // namespace type

} // namespace uci

