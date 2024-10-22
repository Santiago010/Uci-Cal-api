/** @file SubsystemMaintenanceTestResultPET.h
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

#ifndef ASB_UCI_TYPE_SUBSYSTEMMAINTENANCETESTRESULTPET_H
#define ASB_UCI_TYPE_SUBSYSTEMMAINTENANCETESTRESULTPET_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemMaintenanceTestResultPET.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CapabilityID_Type;
class CommandID_Type;
class SubsystemID_Type;
class SubsystemMaintenanceID_Type;
class SubsystemMaintenanceResultEventType;
class SubsystemMaintenanceResultStatusType;

/** Abstract extension type for subsystem maintenance test results. Available extension types include:
  * SubsystemMaintenanceTestResultType.
  */
class SubsystemMaintenanceTestResultPET : public virtual uci::type::SubsystemMaintenanceTestResultPET {
public:
  /** Indicates a list of unique ID(s) of the Subsystem component(s) whose maintenace test status is being reported.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using SubsystemComponentID = asb_uci::base::BoundedList<uci::type::SubsystemID_Type, uci::type::accessorType::subsystemID_Type, asb_uci::type::SubsystemID_Type>;

  /** Indicates a list of Capabilities whose maintenance test status is being reported. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using CapabilityID = asb_uci::base::BoundedList<uci::type::CapabilityID_Type, uci::type::accessorType::capabilityID_Type, asb_uci::type::CapabilityID_Type>;

  /** List of test events (i.e., test steps) associated with the sibling TestID. This may be a partial or full list. In the
    * CompletedTest, this element will provide list of completed or failed maintenance test unit results. In the
    * CurrentTest, this element will provide list of results for maintenance test units in process or in queue.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using EventResult = asb_uci::base::BoundedList<uci::type::SubsystemMaintenanceResultEventType, uci::type::accessorType::subsystemMaintenanceResultEventType, asb_uci::type::SubsystemMaintenanceResultEventType>;

  /** The constructor */
  SubsystemMaintenanceTestResultPET();

  /** The copy constructor
    *
    * @param rhs The SubsystemMaintenanceTestResultPET to copy from
    */
  SubsystemMaintenanceTestResultPET(const SubsystemMaintenanceTestResultPET& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SubsystemMaintenanceTestResultPET to move from
    */
  SubsystemMaintenanceTestResultPET(SubsystemMaintenanceTestResultPET&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SubsystemMaintenanceTestResultPET to copy from
    * @return The SubsystemMaintenanceTestResultPET that was assigned
    */
  SubsystemMaintenanceTestResultPET& operator=(const SubsystemMaintenanceTestResultPET& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SubsystemMaintenanceTestResultPET to move from
    * @return The SubsystemMaintenanceTestResultPET that was assigned
    */
  SubsystemMaintenanceTestResultPET& operator=(SubsystemMaintenanceTestResultPET&& rhs) = delete;

  /** The destructor */
  virtual ~SubsystemMaintenanceTestResultPET();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SubsystemMaintenanceTestResultPET whose contents are to be used to set this
    *      uci::type::SubsystemMaintenanceTestResultPET's contents.
    */
  void copy(const uci::type::SubsystemMaintenanceTestResultPET& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SubsystemMaintenanceTestResultPET whose contents are to be used to set this
    *      uci::type::SubsystemMaintenanceTestResultPET's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SubsystemMaintenanceTestResultPET& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommandID_Type& getCommandID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CommandID_Type& getCommandID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommandID_Type& getCommandID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceTestResultPET& setCommandID(const uci::type::CommandID_Type& accessor) override;

  /** Returns whether this optional field CommandIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasCommandID() const noexcept override;

  /** Enables the optional field such that getCommandID will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CommandID_Type& enableCommandID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceTestResultPET& clearCommandID() noexcept override;

  /** Returns the accessor to the TestID field contained in this message fragment
    *
    * @return The const reference to the accessor to the TestID field.
    */
  const uci::type::SubsystemMaintenanceID_Type& getTestID() const override;

  /** Returns the accessor to the TestID field contained in this message fragment
    *
    * @return The reference to the accessor to the TestID field.
    */
  uci::type::SubsystemMaintenanceID_Type& getTestID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceTestResultPET& setTestID(const uci::type::SubsystemMaintenanceID_Type& accessor) override;

  /** Returns the accessor to the SubsystemComponentID field contained in this message fragment
    *
    * @return The const reference to the accessor to the SubsystemComponentID field.
    */
  const uci::type::SubsystemMaintenanceTestResultPET::SubsystemComponentID& getSubsystemComponentID() const override;

  /** Returns the accessor to the SubsystemComponentID field contained in this message fragment
    *
    * @return The reference to the accessor to the SubsystemComponentID field.
    */
  uci::type::SubsystemMaintenanceTestResultPET::SubsystemComponentID& getSubsystemComponentID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceTestResultPET& setSubsystemComponentID(const uci::type::SubsystemMaintenanceTestResultPET::SubsystemComponentID& accessor) override;

  /** Returns the accessor to the CapabilityID field contained in this message fragment
    *
    * @return The const reference to the accessor to the CapabilityID field.
    */
  const uci::type::SubsystemMaintenanceTestResultPET::CapabilityID& getCapabilityID() const override;

  /** Returns the accessor to the CapabilityID field contained in this message fragment
    *
    * @return The reference to the accessor to the CapabilityID field.
    */
  uci::type::SubsystemMaintenanceTestResultPET::CapabilityID& getCapabilityID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceTestResultPET& setCapabilityID(const uci::type::SubsystemMaintenanceTestResultPET::CapabilityID& accessor) override;

  /** Returns the accessor to the TestResultStatus field contained in this message fragment
    *
    * @return The const reference to the accessor to the TestResultStatus field.
    */
  const uci::type::SubsystemMaintenanceResultStatusType& getTestResultStatus() const override;

  /** Returns the accessor to the TestResultStatus field contained in this message fragment
    *
    * @return The reference to the accessor to the TestResultStatus field.
    */
  uci::type::SubsystemMaintenanceResultStatusType& getTestResultStatus() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceTestResultPET& setTestResultStatus(const uci::type::SubsystemMaintenanceResultStatusType& accessor) override;

  /** Returns the accessor to the EventResult field contained in this message fragment
    *
    * @return The const reference to the accessor to the EventResult field.
    */
  const uci::type::SubsystemMaintenanceTestResultPET::EventResult& getEventResult() const override;

  /** Returns the accessor to the EventResult field contained in this message fragment
    *
    * @return The reference to the accessor to the EventResult field.
    */
  uci::type::SubsystemMaintenanceTestResultPET::EventResult& getEventResult() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceTestResultPET& setEventResult(const uci::type::SubsystemMaintenanceTestResultPET::EventResult& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SubsystemMaintenanceTestResultPET> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SubsystemMaintenanceTestResultPET& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SubsystemMaintenanceTestResultPET& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CommandID_Type> commandID_Accessor;
  std::unique_ptr<SubsystemMaintenanceID_Type> testID_Accessor;
  std::unique_ptr<SubsystemComponentID> subsystemComponentID_Accessor;
  std::unique_ptr<CapabilityID> capabilityID_Accessor;
  std::unique_ptr<SubsystemMaintenanceResultStatusType> testResultStatus_Accessor;
  std::unique_ptr<EventResult> eventResult_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SUBSYSTEMMAINTENANCETESTRESULTPET_H
