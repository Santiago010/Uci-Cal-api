/** @file DMPI_StatusMDT.h
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

#ifndef ASB_UCI_TYPE_DMPI_STATUSMDT_H
#define ASB_UCI_TYPE_DMPI_STATUSMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/DMPI_StateEnum.h"
#include "../../../include/asb_uci/type/StrikeStateEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DMPI_StatusMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ActivityPlanReferenceType;
class DMPI_ID_Type;
class DMPI_StoreStatusType;
class RoutePlanReferencesType;
class SystemID_Type;
class TaskID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class DMPI_StatusMDT : public virtual uci::type::DMPI_StatusMDT {
public:
  /** Indicates the DMPI status in terms of its associated store or stores. The number of instances of this element varies
    * depending on the store quantity of the associated DMPI, how the associated Strike Task or Tasks are allocated, etc.
    * See the annotations for the DMPI_Status message for further insight. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using StoreStatus = asb_uci::base::BoundedList<uci::type::DMPI_StoreStatusType, uci::type::accessorType::dMPI_StoreStatusType, asb_uci::type::DMPI_StoreStatusType>;

  /** The constructor */
  DMPI_StatusMDT();

  /** The copy constructor
    *
    * @param rhs The DMPI_StatusMDT to copy from
    */
  DMPI_StatusMDT(const DMPI_StatusMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The DMPI_StatusMDT to move from
    */
  DMPI_StatusMDT(DMPI_StatusMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The DMPI_StatusMDT to copy from
    * @return The DMPI_StatusMDT that was assigned
    */
  DMPI_StatusMDT& operator=(const DMPI_StatusMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The DMPI_StatusMDT to move from
    * @return The DMPI_StatusMDT that was assigned
    */
  DMPI_StatusMDT& operator=(DMPI_StatusMDT&& rhs) = delete;

  /** The destructor */
  virtual ~DMPI_StatusMDT();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::DMPI_StatusMDT whose contents are to be used to set this uci::type::DMPI_StatusMDT's
    *      contents.
    */
  void copy(const uci::type::DMPI_StatusMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::DMPI_StatusMDT whose contents are to be used to set this uci::type::DMPI_StatusMDT's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::DMPI_StatusMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the DMPI_ID field contained in this message fragment
    *
    * @return The const reference to the accessor to the DMPI_ID field.
    */
  const uci::type::DMPI_ID_Type& getDMPI_ID() const override;

  /** Returns the accessor to the DMPI_ID field contained in this message fragment
    *
    * @return The reference to the accessor to the DMPI_ID field.
    */
  uci::type::DMPI_ID_Type& getDMPI_ID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& setDMPI_ID(const uci::type::DMPI_ID_Type& accessor) override;

  /** Returns the contents of the message's DMPI_State field
    *
    * @return The contents of the DMPI_State field
    */
  const uci::type::DMPI_StateEnum& getDMPI_State() const override;

  /** Returns the contents of the message's DMPI_State field
    *
    * @return The contents of the DMPI_State field
    */
  uci::type::DMPI_StateEnum& getDMPI_State() override;

  /** Sets the contents of the message's DMPI_State field
    *
    * @param accessor The accessor to use to set the DMPI_State field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& setDMPI_State(const uci::type::DMPI_StateEnum& accessor) override;

  /** Sets the contents of the message's DMPI_State field
    *
    * @param value The new value to set the DMPI_State field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& setDMPI_State(uci::type::DMPI_StateEnum::EnumerationItem value) override;

  /** Returns the contents of the message's DMPI_StrikeState field
    *
    * @return The contents of the DMPI_StrikeState field
    */
  const uci::type::StrikeStateEnum& getDMPI_StrikeState() const override;

  /** Returns the contents of the message's DMPI_StrikeState field
    *
    * @return The contents of the DMPI_StrikeState field
    */
  uci::type::StrikeStateEnum& getDMPI_StrikeState() override;

  /** Sets the contents of the message's DMPI_StrikeState field
    *
    * @param accessor The accessor to use to set the DMPI_StrikeState field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& setDMPI_StrikeState(const uci::type::StrikeStateEnum& accessor) override;

  /** Sets the contents of the message's DMPI_StrikeState field
    *
    * @param value The new value to set the DMPI_StrikeState field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& setDMPI_StrikeState(uci::type::StrikeStateEnum::EnumerationItem value) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SystemID_Type& getSystemID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SystemID_Type& getSystemID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SystemID_Type& getSystemID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& setSystemID(const uci::type::SystemID_Type& accessor) override;

  /** Returns whether this optional field SystemIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSystemID() const noexcept override;

  /** Enables the optional field such that getSystemID will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SystemID_Type& enableSystemID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& clearSystemID() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RoutePlanReferencesType& getAssociatedRoutePlan_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RoutePlanReferencesType& getAssociatedRoutePlan() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RoutePlanReferencesType& getAssociatedRoutePlan() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& setAssociatedRoutePlan(const uci::type::RoutePlanReferencesType& accessor) override;

  /** Returns whether this optional field AssociatedRoutePlanis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAssociatedRoutePlan() const noexcept override;

  /** Enables the optional field such that getAssociatedRoutePlan will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RoutePlanReferencesType& enableAssociatedRoutePlan(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& clearAssociatedRoutePlan() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ActivityPlanReferenceType& getAssociatedActivityPlan_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ActivityPlanReferenceType& getAssociatedActivityPlan() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ActivityPlanReferenceType& getAssociatedActivityPlan() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& setAssociatedActivityPlan(const uci::type::ActivityPlanReferenceType& accessor) override;

  /** Returns whether this optional field AssociatedActivityPlanis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAssociatedActivityPlan() const noexcept override;

  /** Enables the optional field such that getAssociatedActivityPlan will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ActivityPlanReferenceType& enableAssociatedActivityPlan(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& clearAssociatedActivityPlan() noexcept override;

  /** Returns the accessor to the StoreStatus field contained in this message fragment
    *
    * @return The const reference to the accessor to the StoreStatus field.
    */
  const uci::type::DMPI_StatusMDT::StoreStatus& getStoreStatus() const override;

  /** Returns the accessor to the StoreStatus field contained in this message fragment
    *
    * @return The reference to the accessor to the StoreStatus field.
    */
  uci::type::DMPI_StatusMDT::StoreStatus& getStoreStatus() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& setStoreStatus(const uci::type::DMPI_StatusMDT::StoreStatus& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::TaskID_Type& getTaskID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::TaskID_Type& getTaskID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::TaskID_Type& getTaskID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& setTaskID(const uci::type::TaskID_Type& accessor) override;

  /** Returns whether this optional field TaskIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasTaskID() const noexcept override;

  /** Enables the optional field such that getTaskID will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::TaskID_Type& enableTaskID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::DMPI_StatusMDT& clearTaskID() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<DMPI_StatusMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::DMPI_StatusMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::DMPI_StatusMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<DMPI_ID_Type> dMPI_ID_Accessor;
  std::unique_ptr<DMPI_StateEnum> dMPI_State_Accessor;
  std::unique_ptr<StrikeStateEnum> dMPI_StrikeState_Accessor;
  std::unique_ptr<SystemID_Type> systemID_Accessor;
  std::unique_ptr<RoutePlanReferencesType> associatedRoutePlan_Accessor;
  std::unique_ptr<ActivityPlanReferenceType> associatedActivityPlan_Accessor;
  std::unique_ptr<StoreStatus> storeStatus_Accessor;
  std::unique_ptr<TaskID_Type> taskID_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_DMPI_STATUSMDT_H
