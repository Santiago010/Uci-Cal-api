/** @file SubsystemCompletedBIT_Type.h
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

#ifndef ASB_UCI_TYPE_SUBSYSTEMCOMPLETEDBIT_TYPE_H
#define ASB_UCI_TYPE_SUBSYSTEMCOMPLETEDBIT_TYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/SubsystemBIT_ResultEnum.h"
#include "../../../include/asb_uci/type/VisibleString256Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemCompletedBIT_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class BIT_ID_Type;
class SubsystemCompletedBIT_ItemType;

/** See annotations in child elements and messages/elements that use this type for details. */
class SubsystemCompletedBIT_Type : public virtual uci::type::SubsystemCompletedBIT_Type {
public:
  /** Indicates the results of an item tested by the BIT. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using BIT_Item = asb_uci::base::BoundedList<uci::type::SubsystemCompletedBIT_ItemType, uci::type::accessorType::subsystemCompletedBIT_ItemType, asb_uci::type::SubsystemCompletedBIT_ItemType>;

  /** The constructor */
  SubsystemCompletedBIT_Type();

  /** The copy constructor
    *
    * @param rhs The SubsystemCompletedBIT_Type to copy from
    */
  SubsystemCompletedBIT_Type(const SubsystemCompletedBIT_Type& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SubsystemCompletedBIT_Type to move from
    */
  SubsystemCompletedBIT_Type(SubsystemCompletedBIT_Type&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SubsystemCompletedBIT_Type to copy from
    * @return The SubsystemCompletedBIT_Type that was assigned
    */
  SubsystemCompletedBIT_Type& operator=(const SubsystemCompletedBIT_Type& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SubsystemCompletedBIT_Type to move from
    * @return The SubsystemCompletedBIT_Type that was assigned
    */
  SubsystemCompletedBIT_Type& operator=(SubsystemCompletedBIT_Type&& rhs) = delete;

  /** The destructor */
  virtual ~SubsystemCompletedBIT_Type();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SubsystemCompletedBIT_Type whose contents are to be used to set this
    *      uci::type::SubsystemCompletedBIT_Type's contents.
    */
  void copy(const uci::type::SubsystemCompletedBIT_Type& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SubsystemCompletedBIT_Type whose contents are to be used to set this
    *      uci::type::SubsystemCompletedBIT_Type's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SubsystemCompletedBIT_Type& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the BIT_ID field contained in this message fragment
    *
    * @return The const reference to the accessor to the BIT_ID field.
    */
  const uci::type::BIT_ID_Type& getBIT_ID() const override;

  /** Returns the accessor to the BIT_ID field contained in this message fragment
    *
    * @return The reference to the accessor to the BIT_ID field.
    */
  uci::type::BIT_ID_Type& getBIT_ID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemCompletedBIT_Type& setBIT_ID(const uci::type::BIT_ID_Type& accessor) override;

  /** Returns the contents of the message's Timetag field
    *
    * @return The contents of the Timetag field
    */
  uci::type::DateTimeTypeValue getTimetag() const override;

  /** Sets the contents of the message's Timetag field
    *
    * @param value The new value to set the Timetag field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemCompletedBIT_Type& setTimetag(uci::type::DateTimeTypeValue value) override;

  /** Returns the contents of the message's Result field
    *
    * @return The contents of the Result field
    */
  const uci::type::SubsystemBIT_ResultEnum& getResult() const override;

  /** Returns the contents of the message's Result field
    *
    * @return The contents of the Result field
    */
  uci::type::SubsystemBIT_ResultEnum& getResult() override;

  /** Sets the contents of the message's Result field
    *
    * @param accessor The accessor to use to set the Result field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemCompletedBIT_Type& setResult(const uci::type::SubsystemBIT_ResultEnum& accessor) override;

  /** Sets the contents of the message's Result field
    *
    * @param value The new value to set the Result field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemCompletedBIT_Type& setResult(uci::type::SubsystemBIT_ResultEnum::EnumerationItem value) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  asb_uci::type::VisibleString256Type& getFailReason_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const asb_uci::type::VisibleString256Type& getFailReason() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  asb_uci::type::VisibleString256Type& getFailReason() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemCompletedBIT_Type& setFailReason(const asb_uci::type::VisibleString256Type& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemCompletedBIT_Type& setFailReason(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemCompletedBIT_Type& setFailReason(const char* value) override;

  /** Returns whether this optional field failReason_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasFailReason() const noexcept override;

  /** Enables the optional field such that getFailReason will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  asb_uci::type::VisibleString256Type& enableFailReason(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemCompletedBIT_Type& clearFailReason() noexcept override;

  /** Returns the accessor to the BIT_Item field contained in this message fragment
    *
    * @return The const reference to the accessor to the BIT_Item field.
    */
  const uci::type::SubsystemCompletedBIT_Type::BIT_Item& getBIT_Item() const override;

  /** Returns the accessor to the BIT_Item field contained in this message fragment
    *
    * @return The reference to the accessor to the BIT_Item field.
    */
  uci::type::SubsystemCompletedBIT_Type::BIT_Item& getBIT_Item() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemCompletedBIT_Type& setBIT_Item(const uci::type::SubsystemCompletedBIT_Type::BIT_Item& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SubsystemCompletedBIT_Type> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SubsystemCompletedBIT_Type& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SubsystemCompletedBIT_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<BIT_ID_Type> bIT_ID_Accessor;
  DateTimeTypeValue timetag_Accessor{0};
  std::unique_ptr<SubsystemBIT_ResultEnum> result_Accessor;
  std::unique_ptr<asb_uci::type::VisibleString256Type> failReason_Accessor;
  std::unique_ptr<BIT_Item> bIT_Item_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SUBSYSTEMCOMPLETEDBIT_TYPE_H