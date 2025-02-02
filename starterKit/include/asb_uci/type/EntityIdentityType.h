/** @file EntityIdentityType.h
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

#ifndef ASB_UCI_TYPE_ENTITYIDENTITYTYPE_H
#define ASB_UCI_TYPE_ENTITYIDENTITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/IdentityConfidenceType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/EntityIdentityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class QualifyingTagsType;
class TimeFunctionType;

/** See annotations in child elements and messages/elements that use this type for details. */
class EntityIdentityType : public virtual uci::type::EntityIdentityType, public virtual IdentityConfidenceType {
public:
  /** Provides identity qualifications to augment identification and associated processing of the Entity. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  using QualifyingTags = asb_uci::base::BoundedList<uci::type::QualifyingTagsType, uci::type::accessorType::qualifyingTagsType, asb_uci::type::QualifyingTagsType>;

  /** Indicates time related events that are associated to the entity such as when activated or when operational. The
    * multiplicity is limited to N-1 options where NONE is an event that has no value, thus removed from list of available
    * options. [Occurrences: Minimum: 0; Maximum: 12]
    */
  using AssociatedTime = asb_uci::base::BoundedList<uci::type::TimeFunctionType, uci::type::accessorType::timeFunctionType, asb_uci::type::TimeFunctionType>;

  /** The constructor */
  EntityIdentityType();

  /** The copy constructor
    *
    * @param rhs The EntityIdentityType to copy from
    */
  EntityIdentityType(const EntityIdentityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The EntityIdentityType to move from
    */
  EntityIdentityType(EntityIdentityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The EntityIdentityType to copy from
    * @return The EntityIdentityType that was assigned
    */
  EntityIdentityType& operator=(const EntityIdentityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The EntityIdentityType to move from
    * @return The EntityIdentityType that was assigned
    */
  EntityIdentityType& operator=(EntityIdentityType&& rhs) = delete;

  /** The destructor */
  ~EntityIdentityType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::EntityIdentityType whose contents are to be used to set this
    *      uci::type::EntityIdentityType's contents.
    */
  void copy(const uci::type::EntityIdentityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::EntityIdentityType whose contents are to be used to set this
    *      uci::type::EntityIdentityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::EntityIdentityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getSelfReportedIdentity() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::EntityIdentityType& setSelfReportedIdentity(xs::Boolean value) override;

  /** Returns whether this optional field SelfReportedIdentityis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSelfReportedIdentity() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::EntityIdentityType& clearSelfReportedIdentity() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getDifferenceIndicator() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::EntityIdentityType& setDifferenceIndicator(xs::Boolean value) override;

  /** Returns whether this optional field DifferenceIndicatoris available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDifferenceIndicator() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::EntityIdentityType& clearDifferenceIndicator() noexcept override;

  /** Returns the contents of the message's IdentityTimestamp field
    *
    * @return The contents of the IdentityTimestamp field
    */
  uci::type::DateTimeTypeValue getIdentityTimestamp() const override;

  /** Sets the contents of the message's IdentityTimestamp field
    *
    * @param value The new value to set the IdentityTimestamp field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::EntityIdentityType& setIdentityTimestamp(uci::type::DateTimeTypeValue value) override;

  /** Returns the accessor to the QualifyingTags field contained in this message fragment
    *
    * @return The const reference to the accessor to the QualifyingTags field.
    */
  const uci::type::EntityIdentityType::QualifyingTags& getQualifyingTags() const override;

  /** Returns the accessor to the QualifyingTags field contained in this message fragment
    *
    * @return The reference to the accessor to the QualifyingTags field.
    */
  uci::type::EntityIdentityType::QualifyingTags& getQualifyingTags() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::EntityIdentityType& setQualifyingTags(const uci::type::EntityIdentityType::QualifyingTags& accessor) override;

  /** Returns the accessor to the AssociatedTime field contained in this message fragment
    *
    * @return The const reference to the accessor to the AssociatedTime field.
    */
  const uci::type::EntityIdentityType::AssociatedTime& getAssociatedTime() const override;

  /** Returns the accessor to the AssociatedTime field contained in this message fragment
    *
    * @return The reference to the accessor to the AssociatedTime field.
    */
  uci::type::EntityIdentityType::AssociatedTime& getAssociatedTime() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::EntityIdentityType& setAssociatedTime(const uci::type::EntityIdentityType::AssociatedTime& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<EntityIdentityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::EntityIdentityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

  /** 
    *
    * @param accessor .
    * @param propTree .
    * @param nodeName .
    * @param createNode .
    * @param addTypeAttribute .
    * @param checkIfDerivation .
    * @param topLevel .
    * @return .
    */
  static std::string serialize(const uci::type::EntityIdentityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  boost::optional<asb_xs::Boolean> selfReportedIdentity_Accessor;
  boost::optional<asb_xs::Boolean> differenceIndicator_Accessor;
  DateTimeTypeValue identityTimestamp_Accessor{0};
  std::unique_ptr<QualifyingTags> qualifyingTags_Accessor;
  std::unique_ptr<AssociatedTime> associatedTime_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ENTITYIDENTITYTYPE_H
