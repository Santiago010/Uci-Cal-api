/** @file SubsystemMaintenanceStatusMDT.h
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

#ifndef ASB_UCI_TYPE_SUBSYSTEMMAINTENANCESTATUSMDT_H
#define ASB_UCI_TYPE_SUBSYSTEMMAINTENANCESTATUSMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemMaintenanceStatusMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CompletionStatusType;
class SubsystemID_Type;
class SubsystemMaintenanceStatusType;
class SubsystemMaintenanceTestResultType;

/** The SubsystemMaintenanceStatusMDT is the Message Data Type (MDT) of the SubsystemMaintenanceStatus Message. This
  * message typically reports all maintenance status unless the MaintenanceCommandInformation is provided for a specific
  * CommandID and its associated tests.
  */
class SubsystemMaintenanceStatusMDT : public virtual uci::type::SubsystemMaintenanceStatusMDT {
public:
  /** Indicates a maintenance test that is currently running or enqueued to run. Only results with a ProcessStatus of
    * QUEUED or PROCESSING should be included in this element. This element can be used for maintenance test initiated via
    * SubsystemMaintenanceCommand or SubsystemStateCommand. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using CurrentTest = asb_uci::base::BoundedList<uci::type::SubsystemMaintenanceTestResultType, uci::type::accessorType::subsystemMaintenanceTestResultType, asb_uci::type::SubsystemMaintenanceTestResultType>;

  /** Indicates results of a previously completed maintenance test. Only results with a ProcessStatus of COMPLETED or
    * FAILED should be included in this element. This element can be used for results from maintenance test initiated via
    * SubsystemMaintenanceCommand or SubsystemStateCommand. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using CompletedTest = asb_uci::base::BoundedList<uci::type::SubsystemMaintenanceTestResultType, uci::type::accessorType::subsystemMaintenanceTestResultType, asb_uci::type::SubsystemMaintenanceTestResultType>;

  /** The constructor */
  SubsystemMaintenanceStatusMDT();

  /** The copy constructor
    *
    * @param rhs The SubsystemMaintenanceStatusMDT to copy from
    */
  SubsystemMaintenanceStatusMDT(const SubsystemMaintenanceStatusMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SubsystemMaintenanceStatusMDT to move from
    */
  SubsystemMaintenanceStatusMDT(SubsystemMaintenanceStatusMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SubsystemMaintenanceStatusMDT to copy from
    * @return The SubsystemMaintenanceStatusMDT that was assigned
    */
  SubsystemMaintenanceStatusMDT& operator=(const SubsystemMaintenanceStatusMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SubsystemMaintenanceStatusMDT to move from
    * @return The SubsystemMaintenanceStatusMDT that was assigned
    */
  SubsystemMaintenanceStatusMDT& operator=(SubsystemMaintenanceStatusMDT&& rhs) = delete;

  /** The destructor */
  virtual ~SubsystemMaintenanceStatusMDT();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SubsystemMaintenanceStatusMDT whose contents are to be used to set this
    *      uci::type::SubsystemMaintenanceStatusMDT's contents.
    */
  void copy(const uci::type::SubsystemMaintenanceStatusMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SubsystemMaintenanceStatusMDT whose contents are to be used to set this
    *      uci::type::SubsystemMaintenanceStatusMDT's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SubsystemMaintenanceStatusMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SubsystemMaintenanceStatusType& getMaintenanceCommandInformation_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SubsystemMaintenanceStatusType& getMaintenanceCommandInformation() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SubsystemMaintenanceStatusType& getMaintenanceCommandInformation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceStatusMDT& setMaintenanceCommandInformation(const uci::type::SubsystemMaintenanceStatusType& accessor) override;

  /** Returns whether this optional field MaintenanceCommandInformationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMaintenanceCommandInformation() const noexcept override;

  /** Enables the optional field such that getMaintenanceCommandInformation will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SubsystemMaintenanceStatusType& enableMaintenanceCommandInformation(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceStatusMDT& clearMaintenanceCommandInformation() noexcept override;

  /** Returns the accessor to the SubsystemID field contained in this message fragment
    *
    * @return The const reference to the accessor to the SubsystemID field.
    */
  const uci::type::SubsystemID_Type& getSubsystemID() const override;

  /** Returns the accessor to the SubsystemID field contained in this message fragment
    *
    * @return The reference to the accessor to the SubsystemID field.
    */
  uci::type::SubsystemID_Type& getSubsystemID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceStatusMDT& setSubsystemID(const uci::type::SubsystemID_Type& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CompletionStatusType& getOverallStatus_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CompletionStatusType& getOverallStatus() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CompletionStatusType& getOverallStatus() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceStatusMDT& setOverallStatus(const uci::type::CompletionStatusType& accessor) override;

  /** Returns whether this optional field OverallStatusis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasOverallStatus() const noexcept override;

  /** Enables the optional field such that getOverallStatus will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CompletionStatusType& enableOverallStatus(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceStatusMDT& clearOverallStatus() noexcept override;

  /** Returns the accessor to the CurrentTest field contained in this message fragment
    *
    * @return The const reference to the accessor to the CurrentTest field.
    */
  const uci::type::SubsystemMaintenanceStatusMDT::CurrentTest& getCurrentTest() const override;

  /** Returns the accessor to the CurrentTest field contained in this message fragment
    *
    * @return The reference to the accessor to the CurrentTest field.
    */
  uci::type::SubsystemMaintenanceStatusMDT::CurrentTest& getCurrentTest() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceStatusMDT& setCurrentTest(const uci::type::SubsystemMaintenanceStatusMDT::CurrentTest& accessor) override;

  /** Returns the accessor to the CompletedTest field contained in this message fragment
    *
    * @return The const reference to the accessor to the CompletedTest field.
    */
  const uci::type::SubsystemMaintenanceStatusMDT::CompletedTest& getCompletedTest() const override;

  /** Returns the accessor to the CompletedTest field contained in this message fragment
    *
    * @return The reference to the accessor to the CompletedTest field.
    */
  uci::type::SubsystemMaintenanceStatusMDT::CompletedTest& getCompletedTest() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemMaintenanceStatusMDT& setCompletedTest(const uci::type::SubsystemMaintenanceStatusMDT::CompletedTest& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SubsystemMaintenanceStatusMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SubsystemMaintenanceStatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SubsystemMaintenanceStatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SubsystemMaintenanceStatusType> maintenanceCommandInformation_Accessor;
  std::unique_ptr<SubsystemID_Type> subsystemID_Accessor;
  std::unique_ptr<CompletionStatusType> overallStatus_Accessor;
  std::unique_ptr<CurrentTest> currentTest_Accessor;
  std::unique_ptr<CompletedTest> completedTest_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SUBSYSTEMMAINTENANCESTATUSMDT_H
