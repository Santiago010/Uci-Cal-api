/** @file StoreLoadoutChoiceType.cpp
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

#include "../../../include/asb_uci/type/StoreLoadoutChoiceType.h"

#include <memory>
#include <string>

#include <boost/optional/optional.hpp>
#include <boost/smart_ptr/make_unique.hpp>

#include "../../../include/asb_uci/type/EmptyType.h"
#include "../../../include/asb_uci/type/StoreLoadoutItemPET.h"
#include "../../../include/asb_uci/util/DerivedTypesDeserializer.h"
#include "../../../include/asb_uci/util/SerializationHelpers.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/UCIException.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/accessorType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EmptyType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreLoadoutChoiceType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/StoreLoadoutItemPET.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

asb_uci::base::BoundedList<uci::type::StoreLoadoutChoiceType,uci::type::accessorType::storeLoadoutChoiceType,asb_uci::type::StoreLoadoutItemType> StoreLoadoutChoiceType::asStoreList(){
    return this->choiceValue;
  }

StoreLoadoutChoiceType& StoreLoadoutChoiceType::chooseStoreList(std::initializer_list<asb_uci::type::StoreLoadoutItemType> StoreList){
  if(StoreList.size() == 0){
    this->choiceType = ChoiseTypeEnum::NULL_CHOICE;
    this->choiceValue.clear(); // Limpia el contenido de choiceValue
  }else{
    this->choiceType = StoreLoadoutChoiceType::ChoiseTypeEnum::STORE_LIST;
      for(const auto& sl: StoreList){
      // this->choiceValue.push_back(sl);
    }
  }

  return *this;
}


// StoreLoadoutChoiceType::StoreLoadoutChoiceType() {

// }

// StoreLoadoutChoiceType::~StoreLoadoutChoiceType() = default;

void StoreLoadoutChoiceType::copy(const uci::type::StoreLoadoutChoiceType& accessor) {
  copyImpl(accessor, false);
}

void StoreLoadoutChoiceType::copyImpl(const uci::type::StoreLoadoutChoiceType& accessor, const bool /*checkIfDerivation*/) {
  if (&accessor != this) {
    const auto& accessorImpl = dynamic_cast<const StoreLoadoutChoiceType&>(accessor);
    if (accessorImpl.storeList_Accessor) {
      setStoreList(*(accessorImpl.storeList_Accessor));
    } else {
      storeList_Accessor.reset();
    }
    if (accessorImpl.terminator_Accessor) {
      setTerminator(*(accessorImpl.terminator_Accessor));
    } else {
      terminator_Accessor.reset();
    }
  }
}

void StoreLoadoutChoiceType::reset() noexcept {
  storeList_Accessor.reset();
  terminator_Accessor.reset();
}

uci::type::StoreLoadoutChoiceType::StoreLoadoutChoiceTypeChoice StoreLoadoutChoiceType::getStoreLoadoutChoiceTypeChoiceOrdinal() const noexcept {
  if (storeList_Accessor) {
    return STORELOADOUTCHOICETYPE_CHOICE_STORELIST;
  }
  if (terminator_Accessor) {
    return STORELOADOUTCHOICETYPE_CHOICE_TERMINATOR;
  }
  return STORELOADOUTCHOICETYPE_CHOICE_NONE;
}

uci::type::StoreLoadoutChoiceType& StoreLoadoutChoiceType::setStoreLoadoutChoiceTypeChoiceOrdinal(uci::type::StoreLoadoutChoiceType::StoreLoadoutChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type) {
  switch (ordinal) {
    case STORELOADOUTCHOICETYPE_CHOICE_STORELIST:
      chooseStoreList();
      break;
    case STORELOADOUTCHOICETYPE_CHOICE_TERMINATOR:
      chooseTerminator("setStoreLoadoutChoiceTypeChoiceOrdinal", type);
      break;
    default:
      throw uci::base::UCIException("Error in setStoreLoadoutChoiceTypeChoiceOrdinal(): The provided ordinal is not valid");
      break;
  }
  return *this;
}

uci::type::StoreLoadoutChoiceType::StoreList& StoreLoadoutChoiceType::getStoreList_() const {
  if (storeList_Accessor) {
    return *storeList_Accessor;
  }
  throw uci::base::UCIException("Error in getStoreList(): Unable to get StoreList, field not selected");
}

const uci::type::StoreLoadoutChoiceType::StoreList& StoreLoadoutChoiceType::getStoreList() const {
  return getStoreList_();
}

uci::type::StoreLoadoutChoiceType::StoreList& StoreLoadoutChoiceType::getStoreList() {
  return getStoreList_();
}

uci::type::StoreLoadoutChoiceType& StoreLoadoutChoiceType::setStoreList(const uci::type::StoreLoadoutChoiceType::StoreList& accessor) {
  chooseStoreList();
  if (&accessor != storeList_Accessor.get()) {
    storeList_Accessor->copyImpl(accessor, false);
  }
  return *this;
}

bool StoreLoadoutChoiceType::isStoreList() const noexcept {
  return static_cast<bool>(storeList_Accessor);
}

uci::type::StoreLoadoutChoiceType::StoreList& StoreLoadoutChoiceType::chooseStoreList() {
  terminator_Accessor.reset();
  if (!storeList_Accessor) {
    storeList_Accessor = boost::make_unique<StoreList>(1, SIZE_MAX);
  }
  return *storeList_Accessor;
}

uci::type::EmptyType& StoreLoadoutChoiceType::getTerminator_() const {
  if (terminator_Accessor) {
    return *terminator_Accessor;
  }
  throw uci::base::UCIException("Error in getTerminator(): An attempt was made to get an optional field that was not enabled, call hasTerminator() to determine if it is safe to call getTerminator()");
}

const uci::type::EmptyType& StoreLoadoutChoiceType::getTerminator() const {
  return getTerminator_();
}

uci::type::EmptyType& StoreLoadoutChoiceType::getTerminator() {
  return getTerminator_();
}

uci::type::StoreLoadoutChoiceType& StoreLoadoutChoiceType::setTerminator(const uci::type::EmptyType& value) {
  return setTerminator(value.c_str());
}

uci::type::StoreLoadoutChoiceType& StoreLoadoutChoiceType::setTerminator(const std::string& value) {
  return setTerminator(value.c_str());
}

uci::type::StoreLoadoutChoiceType& StoreLoadoutChoiceType::setTerminator(const char * value) {
  chooseTerminator().setStringValue(value);
  return *this;
}

bool StoreLoadoutChoiceType::isTerminator() const noexcept {
  return static_cast<bool>(terminator_Accessor);
}

uci::type::EmptyType& StoreLoadoutChoiceType::chooseTerminator(const std::string& /*method*/, uci::base::accessorType::AccessorType type) {
  storeList_Accessor.reset();
  if (!terminator_Accessor) {
    terminator_Accessor = EmptyType::create(type);
  }
  return *terminator_Accessor;
}

uci::type::EmptyType& StoreLoadoutChoiceType::chooseTerminator(uci::base::accessorType::AccessorType type) {
  return chooseTerminator("chooseTerminator", type);
}

std::unique_ptr<StoreLoadoutChoiceType> StoreLoadoutChoiceType::create(const uci::base::accessorType::AccessorType type) {
  const uci::base::accessorType::AccessorType requestedType{(type == uci::base::accessorType::null) ? uci::type::accessorType::storeLoadoutChoiceType : type};
  return (requestedType == uci::type::accessorType::storeLoadoutChoiceType) ? boost::make_unique<StoreLoadoutChoiceType>() : nullptr;
}

/**  */
namespace StoreLoadoutChoiceType_Names {

constexpr const char* Extern_Type_Name{"StoreLoadoutChoiceType"};
constexpr const char* StoreList_Name{"StoreList"};
constexpr const char* Terminator_Name{"Terminator"};

} // namespace StoreLoadoutChoiceType_Names

void StoreLoadoutChoiceType::deserialize(const boost::property_tree::ptree& propTree, uci::type::StoreLoadoutChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, const bool topLevel) {
  nodeName = StoreLoadoutChoiceType_Names::Extern_Type_Name;
  const boost::property_tree::ptree& node = (topLevel ? propTree.ordered_begin()->second : propTree);
  for (const boost::property_tree::ptree::value_type& valueType : node.get_child("")) {
    if ((valueType.first == "<xmlattr>") && topLevel) {
      nsPrefix = asb_uci::util::SerializationHelpers::checkForNamespacePrefix(valueType.second.get_child(""));
    } else if (valueType.first == nsPrefix + StoreLoadoutChoiceType_Names::StoreList_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        uci::type::StoreLoadoutChoiceType::StoreList& boundedList = accessor.chooseStoreList();
        const uci::type::StoreLoadoutChoiceType::StoreList::size_type boundedListSize{boundedList.size()};
        boundedList.resize(boundedListSize + 1, asb_uci::util::SerializationHelpers::checkForTypeAttribute(valueType.second, nsPrefix));
        asb_uci::util::DerivedTypesDeserializer::deserialize(valueType.second, boundedList.at(boundedListSize), nodeName, nsPrefix);
      }
    } else if (valueType.first == nsPrefix + StoreLoadoutChoiceType_Names::Terminator_Name) {
      if (const boost::optional<std::string> value = valueType.second.get_value_optional<std::string>()) {
        accessor.chooseTerminator().setStringValue(*value);
      }
    }
  }
}

std::string StoreLoadoutChoiceType::serialize(const uci::type::StoreLoadoutChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, const bool createNode, const bool addTypeAttribute, const bool /*checkIfDerivation*/, const bool /*topLevel*/) {
  std::string generatedNodeName{(nodeName.empty() ? StoreLoadoutChoiceType_Names::Extern_Type_Name : nodeName)};
  boost::property_tree::ptree newNode;
  boost::property_tree::ptree& node = (createNode ? newNode : propTree);
  if (addTypeAttribute) {
    asb_uci::util::SerializationHelpers::addTypeAttribute(node, StoreLoadoutChoiceType_Names::Extern_Type_Name);
  }
  if (accessor.isStoreList()) {
    {
      const uci::type::StoreLoadoutChoiceType::StoreList& boundedList = accessor.getStoreList();
      for (uci::type::StoreLoadoutChoiceType::StoreList::size_type i = 0, end = boundedList.size(); i < end; ++i) {
        asb_uci::type::StoreLoadoutItemPET::serialize(boundedList.at(i), node, StoreLoadoutChoiceType_Names::StoreList_Name);
      }
    }
  } else if (accessor.isTerminator()) {
    asb_uci::util::SerializationHelpers::serializeString(accessor.getTerminator(), node, StoreLoadoutChoiceType_Names::Terminator_Name);
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

uci::type::StoreLoadoutChoiceType& StoreLoadoutChoiceType::create(uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  return *(boost::make_unique<asb_uci::type::StoreLoadoutChoiceType>().release());
}

uci::type::StoreLoadoutChoiceType& StoreLoadoutChoiceType::create(const uci::type::StoreLoadoutChoiceType& accessor, uci::base::AbstractServiceBusConnection* /*abstractServiceBusConnection*/) {
  std::unique_ptr<asb_uci::type::StoreLoadoutChoiceType> newAccessor{boost::make_unique<asb_uci::type::StoreLoadoutChoiceType>()};
  newAccessor->copyImpl(accessor, false);
  return *(newAccessor.release());
}

void StoreLoadoutChoiceType::destroy(uci::type::StoreLoadoutChoiceType& accessor) {
  delete dynamic_cast<asb_uci::type::StoreLoadoutChoiceType*>(&accessor);
}

} // namespace type

} // namespace uci

