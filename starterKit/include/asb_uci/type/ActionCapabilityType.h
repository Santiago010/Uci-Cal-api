/** @file ActionCapabilityType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#ifndef ASB_UCI_TYPE_ACTIONCAPABILITYTYPE_H
#define ASB_UCI_TYPE_ACTIONCAPABILITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/ActionMessageOutputsEnum.h"
#include "../../../include/asb_uci/type/ActionTypeEnum.h"
#include "../../../include/asb_uci/type/CapabilityTypeEnum.h"
#include "../../../include/asb_uci/type/CommandableCapabilityDeclarationType.h"
#include "../../../include/asb_uci/type/TaskTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ActionCapabilityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ActionCapabilityOptionsType;

/** See annotations in child elements and messages/elements that use this type for details. */
class ActionCapabilityType : public virtual uci::type::ActionCapabilityType, public virtual CommandableCapabilityDeclarationType {
public:
  /** Indicates a Task type associated with the Action. See enumerated type annotations for further details. List size for
    * this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 21]
    */
  using AssociatedTaskType = asb_uci::base::BoundedList<uci::type::TaskTypeEnum, uci::type::accessorType::taskTypeEnum, asb_uci::type::TaskTypeEnum>;

  /** Indicates a Capability type associated with the Action. See enumerated type annotations for further details. List
    * size for this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 25]
    */
  using AssociatedCapabilityType = asb_uci::base::BoundedList<uci::type::CapabilityTypeEnum, uci::type::accessorType::capabilityTypeEnum, asb_uci::type::CapabilityTypeEnum>;

  /** Indicates a message that is an output of the Capability. See enumerated type annotations for details. List size for
    * this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 3]
    */
  using MessageOutput = asb_uci::base::BoundedList<uci::type::ActionMessageOutputsEnum, uci::type::accessorType::actionMessageOutputsEnum, asb_uci::type::ActionMessageOutputsEnum>;

  /** The constructor */
  ActionCapabilityType();

  /** The copy constructor
    *
    * @param rhs The ActionCapabilityType to copy from
    */
  ActionCapabilityType(const ActionCapabilityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ActionCapabilityType to move from
    */
  ActionCapabilityType(ActionCapabilityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ActionCapabilityType to copy from
    * @return The ActionCapabilityType that was assigned
    */
  ActionCapabilityType& operator=(const ActionCapabilityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ActionCapabilityType to move from
    * @return The ActionCapabilityType that was assigned
    */
  ActionCapabilityType& operator=(ActionCapabilityType&& rhs) = delete;

  /** The destructor */
  ~ActionCapabilityType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ActionCapabilityType whose contents are to be used to set this
    *      uci::type::ActionCapabilityType's contents.
    */
  void copy(const uci::type::ActionCapabilityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ActionCapabilityType whose contents are to be used to set this
    *      uci::type::ActionCapabilityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ActionCapabilityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's CapabilityType field
    *
    * @return The contents of the CapabilityType field
    */
  const uci::type::ActionTypeEnum& getCapabilityType() const override;

  /** Returns the contents of the message's CapabilityType field
    *
    * @return The contents of the CapabilityType field
    */
  uci::type::ActionTypeEnum& getCapabilityType() override;

  /** Sets the contents of the message's CapabilityType field
    *
    * @param accessor The accessor to use to set the CapabilityType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActionCapabilityType& setCapabilityType(const uci::type::ActionTypeEnum& accessor) override;

  /** Sets the contents of the message's CapabilityType field
    *
    * @param value The new value to set the CapabilityType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActionCapabilityType& setCapabilityType(uci::type::ActionTypeEnum::EnumerationItem value) override;

  /** Returns the accessor to the AssociatedTaskType field contained in this message fragment
    *
    * @return The const reference to the accessor to the AssociatedTaskType field.
    */
  const uci::type::ActionCapabilityType::AssociatedTaskType& getAssociatedTaskType() const override;

  /** Returns the accessor to the AssociatedTaskType field contained in this message fragment
    *
    * @return The reference to the accessor to the AssociatedTaskType field.
    */
  uci::type::ActionCapabilityType::AssociatedTaskType& getAssociatedTaskType() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActionCapabilityType& setAssociatedTaskType(const uci::type::ActionCapabilityType::AssociatedTaskType& accessor) override;

  /** Returns the accessor to the AssociatedCapabilityType field contained in this message fragment
    *
    * @return The const reference to the accessor to the AssociatedCapabilityType field.
    */
  const uci::type::ActionCapabilityType::AssociatedCapabilityType& getAssociatedCapabilityType() const override;

  /** Returns the accessor to the AssociatedCapabilityType field contained in this message fragment
    *
    * @return The reference to the accessor to the AssociatedCapabilityType field.
    */
  uci::type::ActionCapabilityType::AssociatedCapabilityType& getAssociatedCapabilityType() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActionCapabilityType& setAssociatedCapabilityType(const uci::type::ActionCapabilityType::AssociatedCapabilityType& accessor) override;

  /** Returns the accessor to the CapabilityOptions field contained in this message fragment
    *
    * @return The const reference to the accessor to the CapabilityOptions field.
    */
  const uci::type::ActionCapabilityOptionsType& getCapabilityOptions() const override;

  /** Returns the accessor to the CapabilityOptions field contained in this message fragment
    *
    * @return The reference to the accessor to the CapabilityOptions field.
    */
  uci::type::ActionCapabilityOptionsType& getCapabilityOptions() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActionCapabilityType& setCapabilityOptions(const uci::type::ActionCapabilityOptionsType& accessor) override;

  /** Returns the accessor to the MessageOutput field contained in this message fragment
    *
    * @return The const reference to the accessor to the MessageOutput field.
    */
  const uci::type::ActionCapabilityType::MessageOutput& getMessageOutput() const override;

  /** Returns the accessor to the MessageOutput field contained in this message fragment
    *
    * @return The reference to the accessor to the MessageOutput field.
    */
  uci::type::ActionCapabilityType::MessageOutput& getMessageOutput() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ActionCapabilityType& setMessageOutput(const uci::type::ActionCapabilityType::MessageOutput& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ActionCapabilityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ActionCapabilityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ActionCapabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<ActionTypeEnum> capabilityType_Accessor;
  std::unique_ptr<AssociatedTaskType> associatedTaskType_Accessor;
  std::unique_ptr<AssociatedCapabilityType> associatedCapabilityType_Accessor;
  std::unique_ptr<ActionCapabilityOptionsType> capabilityOptions_Accessor;
  std::unique_ptr<MessageOutput> messageOutput_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ACTIONCAPABILITYTYPE_H
