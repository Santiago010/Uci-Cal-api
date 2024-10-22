/** @file CommScheduleAllocationType.h
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

#ifndef ASB_UCI_TYPE_COMMSCHEDULEALLOCATIONTYPE_H
#define ASB_UCI_TYPE_COMMSCHEDULEALLOCATIONTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommScheduleAllocationType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CommCoverageUserDataType;
class CommScheduleAllocationID_Type;
class CommSchedulingRequirementID_Type;
class RequestID_Type;
class SystemID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class CommScheduleAllocationType : public virtual uci::type::CommScheduleAllocationType {
public:
  /** The list of CommSchedulingRequirements that the allocation is intended to fulfill. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using CommSchedulingRequirementID = asb_uci::base::BoundedList<uci::type::CommSchedulingRequirementID_Type, uci::type::accessorType::commSchedulingRequirementID_Type, asb_uci::type::CommSchedulingRequirementID_Type>;

  /** Represents a list of communication allocation times that are being allocated from approved CommSchedulingRequests.
    * [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  using AllocatedComm = asb_uci::base::BoundedList<uci::type::CommCoverageUserDataType, uci::type::accessorType::commCoverageUserDataType, asb_uci::type::CommCoverageUserDataType>;

  /** The constructor */
  CommScheduleAllocationType();

  /** The copy constructor
    *
    * @param rhs The CommScheduleAllocationType to copy from
    */
  CommScheduleAllocationType(const CommScheduleAllocationType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CommScheduleAllocationType to move from
    */
  CommScheduleAllocationType(CommScheduleAllocationType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The CommScheduleAllocationType to copy from
    * @return The CommScheduleAllocationType that was assigned
    */
  CommScheduleAllocationType& operator=(const CommScheduleAllocationType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CommScheduleAllocationType to move from
    * @return The CommScheduleAllocationType that was assigned
    */
  CommScheduleAllocationType& operator=(CommScheduleAllocationType&& rhs) = delete;

  /** The destructor */
  virtual ~CommScheduleAllocationType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommScheduleAllocationType whose contents are to be used to set this
    *      uci::type::CommScheduleAllocationType's contents.
    */
  void copy(const uci::type::CommScheduleAllocationType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommScheduleAllocationType whose contents are to be used to set this
    *      uci::type::CommScheduleAllocationType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CommScheduleAllocationType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the CommScheduleAllocationID field contained in this message fragment
    *
    * @return The const reference to the accessor to the CommScheduleAllocationID field.
    */
  const uci::type::CommScheduleAllocationID_Type& getCommScheduleAllocationID() const override;

  /** Returns the accessor to the CommScheduleAllocationID field contained in this message fragment
    *
    * @return The reference to the accessor to the CommScheduleAllocationID field.
    */
  uci::type::CommScheduleAllocationID_Type& getCommScheduleAllocationID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommScheduleAllocationType& setCommScheduleAllocationID(const uci::type::CommScheduleAllocationID_Type& accessor) override;

  /** Returns the accessor to the ControllingSystemID field contained in this message fragment
    *
    * @return The const reference to the accessor to the ControllingSystemID field.
    */
  const uci::type::SystemID_Type& getControllingSystemID() const override;

  /** Returns the accessor to the ControllingSystemID field contained in this message fragment
    *
    * @return The reference to the accessor to the ControllingSystemID field.
    */
  uci::type::SystemID_Type& getControllingSystemID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommScheduleAllocationType& setControllingSystemID(const uci::type::SystemID_Type& accessor) override;

  /** Returns the accessor to the SystemID field contained in this message fragment
    *
    * @return The const reference to the accessor to the SystemID field.
    */
  const uci::type::SystemID_Type& getSystemID() const override;

  /** Returns the accessor to the SystemID field contained in this message fragment
    *
    * @return The reference to the accessor to the SystemID field.
    */
  uci::type::SystemID_Type& getSystemID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommScheduleAllocationType& setSystemID(const uci::type::SystemID_Type& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SystemID_Type& getDesignatedSystemID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SystemID_Type& getDesignatedSystemID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SystemID_Type& getDesignatedSystemID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommScheduleAllocationType& setDesignatedSystemID(const uci::type::SystemID_Type& accessor) override;

  /** Returns whether this optional field DesignatedSystemIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDesignatedSystemID() const noexcept override;

  /** Enables the optional field such that getDesignatedSystemID will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SystemID_Type& enableDesignatedSystemID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommScheduleAllocationType& clearDesignatedSystemID() noexcept override;

  /** Returns the accessor to the CommSchedulingRequirementID field contained in this message fragment
    *
    * @return The const reference to the accessor to the CommSchedulingRequirementID field.
    */
  const uci::type::CommScheduleAllocationType::CommSchedulingRequirementID& getCommSchedulingRequirementID() const override;

  /** Returns the accessor to the CommSchedulingRequirementID field contained in this message fragment
    *
    * @return The reference to the accessor to the CommSchedulingRequirementID field.
    */
  uci::type::CommScheduleAllocationType::CommSchedulingRequirementID& getCommSchedulingRequirementID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommScheduleAllocationType& setCommSchedulingRequirementID(const uci::type::CommScheduleAllocationType::CommSchedulingRequirementID& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequestID_Type& getCommSchedulingRequestID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RequestID_Type& getCommSchedulingRequestID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequestID_Type& getCommSchedulingRequestID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommScheduleAllocationType& setCommSchedulingRequestID(const uci::type::RequestID_Type& accessor) override;

  /** Returns whether this optional field CommSchedulingRequestIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasCommSchedulingRequestID() const noexcept override;

  /** Enables the optional field such that getCommSchedulingRequestID will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RequestID_Type& enableCommSchedulingRequestID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommScheduleAllocationType& clearCommSchedulingRequestID() noexcept override;

  /** Returns the accessor to the AllocatedComm field contained in this message fragment
    *
    * @return The const reference to the accessor to the AllocatedComm field.
    */
  const uci::type::CommScheduleAllocationType::AllocatedComm& getAllocatedComm() const override;

  /** Returns the accessor to the AllocatedComm field contained in this message fragment
    *
    * @return The reference to the accessor to the AllocatedComm field.
    */
  uci::type::CommScheduleAllocationType::AllocatedComm& getAllocatedComm() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommScheduleAllocationType& setAllocatedComm(const uci::type::CommScheduleAllocationType::AllocatedComm& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CommScheduleAllocationType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CommScheduleAllocationType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::CommScheduleAllocationType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CommScheduleAllocationID_Type> commScheduleAllocationID_Accessor;
  std::unique_ptr<SystemID_Type> controllingSystemID_Accessor;
  std::unique_ptr<SystemID_Type> systemID_Accessor;
  std::unique_ptr<SystemID_Type> designatedSystemID_Accessor;
  std::unique_ptr<CommSchedulingRequirementID> commSchedulingRequirementID_Accessor;
  std::unique_ptr<RequestID_Type> commSchedulingRequestID_Accessor;
  std::unique_ptr<AllocatedComm> allocatedComm_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COMMSCHEDULEALLOCATIONTYPE_H
