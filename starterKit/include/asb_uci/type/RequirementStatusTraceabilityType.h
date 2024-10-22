/** @file RequirementStatusTraceabilityType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#ifndef ASB_UCI_TYPE_REQUIREMENTSTATUSTRACEABILITYTYPE_H
#define ASB_UCI_TYPE_REQUIREMENTSTATUSTRACEABILITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RequirementStatusTraceabilityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ActivityID_Type;
class CapabilityID_Type;
class CommandID_Type;
class PlannedActivityID_Type;
class PlansReferenceType;

/** See annotations in child elements and messages/elements that use this type for details. */
class RequirementStatusTraceabilityType : public virtual uci::type::RequirementStatusTraceabilityType {
public:
  /** Indicates a specific Planned Activity the Requirement is associated with. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using PlannedActivityID = asb_uci::base::BoundedList<uci::type::PlannedActivityID_Type, uci::type::accessorType::plannedActivityID_Type, asb_uci::type::PlannedActivityID_Type>;

  /** Identifies a specific Capability the Requirement is associated with. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using CapabilityID = asb_uci::base::BoundedList<uci::type::CapabilityID_Type, uci::type::accessorType::capabilityID_Type, asb_uci::type::CapabilityID_Type>;

  /** Indicates the ID of an associated [Capability]Command. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using CommandID = asb_uci::base::BoundedList<uci::type::CommandID_Type, uci::type::accessorType::commandID_Type, asb_uci::type::CommandID_Type>;

  /** Indicates the ID of an associated actual/executing/executed Activity. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using ActivityID = asb_uci::base::BoundedList<uci::type::ActivityID_Type, uci::type::accessorType::activityID_Type, asb_uci::type::ActivityID_Type>;

  /** The constructor */
  RequirementStatusTraceabilityType();

  /** The copy constructor
    *
    * @param rhs The RequirementStatusTraceabilityType to copy from
    */
  RequirementStatusTraceabilityType(const RequirementStatusTraceabilityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The RequirementStatusTraceabilityType to move from
    */
  RequirementStatusTraceabilityType(RequirementStatusTraceabilityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The RequirementStatusTraceabilityType to copy from
    * @return The RequirementStatusTraceabilityType that was assigned
    */
  RequirementStatusTraceabilityType& operator=(const RequirementStatusTraceabilityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The RequirementStatusTraceabilityType to move from
    * @return The RequirementStatusTraceabilityType that was assigned
    */
  RequirementStatusTraceabilityType& operator=(RequirementStatusTraceabilityType&& rhs) = delete;

  /** The destructor */
  virtual ~RequirementStatusTraceabilityType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RequirementStatusTraceabilityType whose contents are to be used to set this
    *      uci::type::RequirementStatusTraceabilityType's contents.
    */
  void copy(const uci::type::RequirementStatusTraceabilityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RequirementStatusTraceabilityType whose contents are to be used to set this
    *      uci::type::RequirementStatusTraceabilityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::RequirementStatusTraceabilityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlansReferenceType& getPlans_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PlansReferenceType& getPlans() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlansReferenceType& getPlans() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementStatusTraceabilityType& setPlans(const uci::type::PlansReferenceType& accessor) override;

  /** Returns whether this optional field Plansis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPlans() const noexcept override;

  /** Enables the optional field such that getPlans will return the optional field and not throw an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlansReferenceType& enablePlans(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementStatusTraceabilityType& clearPlans() noexcept override;

  /** Returns the accessor to the PlannedActivityID field contained in this message fragment
    *
    * @return The const reference to the accessor to the PlannedActivityID field.
    */
  const uci::type::RequirementStatusTraceabilityType::PlannedActivityID& getPlannedActivityID() const override;

  /** Returns the accessor to the PlannedActivityID field contained in this message fragment
    *
    * @return The reference to the accessor to the PlannedActivityID field.
    */
  uci::type::RequirementStatusTraceabilityType::PlannedActivityID& getPlannedActivityID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementStatusTraceabilityType& setPlannedActivityID(const uci::type::RequirementStatusTraceabilityType::PlannedActivityID& accessor) override;

  /** Returns the accessor to the CapabilityID field contained in this message fragment
    *
    * @return The const reference to the accessor to the CapabilityID field.
    */
  const uci::type::RequirementStatusTraceabilityType::CapabilityID& getCapabilityID() const override;

  /** Returns the accessor to the CapabilityID field contained in this message fragment
    *
    * @return The reference to the accessor to the CapabilityID field.
    */
  uci::type::RequirementStatusTraceabilityType::CapabilityID& getCapabilityID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementStatusTraceabilityType& setCapabilityID(const uci::type::RequirementStatusTraceabilityType::CapabilityID& accessor) override;

  /** Returns the accessor to the CommandID field contained in this message fragment
    *
    * @return The const reference to the accessor to the CommandID field.
    */
  const uci::type::RequirementStatusTraceabilityType::CommandID& getCommandID() const override;

  /** Returns the accessor to the CommandID field contained in this message fragment
    *
    * @return The reference to the accessor to the CommandID field.
    */
  uci::type::RequirementStatusTraceabilityType::CommandID& getCommandID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementStatusTraceabilityType& setCommandID(const uci::type::RequirementStatusTraceabilityType::CommandID& accessor) override;

  /** Returns the accessor to the ActivityID field contained in this message fragment
    *
    * @return The const reference to the accessor to the ActivityID field.
    */
  const uci::type::RequirementStatusTraceabilityType::ActivityID& getActivityID() const override;

  /** Returns the accessor to the ActivityID field contained in this message fragment
    *
    * @return The reference to the accessor to the ActivityID field.
    */
  uci::type::RequirementStatusTraceabilityType::ActivityID& getActivityID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RequirementStatusTraceabilityType& setActivityID(const uci::type::RequirementStatusTraceabilityType::ActivityID& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<RequirementStatusTraceabilityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::RequirementStatusTraceabilityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::RequirementStatusTraceabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PlansReferenceType> plans_Accessor;
  std::unique_ptr<PlannedActivityID> plannedActivityID_Accessor;
  std::unique_ptr<CapabilityID> capabilityID_Accessor;
  std::unique_ptr<CommandID> commandID_Accessor;
  std::unique_ptr<ActivityID> activityID_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_REQUIREMENTSTATUSTRACEABILITYTYPE_H
