/** @file CommTerminalPlanTriggerType.h
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

#ifndef ASB_UCI_TYPE_COMMTERMINALPLANTRIGGERTYPE_H
#define ASB_UCI_TYPE_COMMTERMINALPLANTRIGGERTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CommTerminalPlanTriggerType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class DateTimeRangeType;
class MissionID_Type;
class OpVolumeID_Type;
class OpZoneID_Type;
class PlansReferenceType;

/** See annotations in child elements and messages/elements that use this type for details. */
class CommTerminalPlanTriggerType : public virtual uci::type::CommTerminalPlanTriggerType {
public:
  /** Indicates a unique ID assigned to a triggering Mission. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using MissionID = asb_uci::base::BoundedList<uci::type::MissionID_Type, uci::type::accessorType::missionID_Type, asb_uci::type::MissionID_Type>;

  /** Indicates time windows for which this communication plan should be active. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using EffectiveTimeSpans = asb_uci::base::BoundedList<uci::type::DateTimeRangeType, uci::type::accessorType::dateTimeRangeType, asb_uci::type::DateTimeRangeType>;

  /** This element represents a unique identifier of a zone for which this CommTerminalPlan should be active. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  using OpZoneID = asb_uci::base::BoundedList<uci::type::OpZoneID_Type, uci::type::accessorType::opZoneID_Type, asb_uci::type::OpZoneID_Type>;

  /** This element represents a unique identifier of a volume for which this CommTerminalPlan should be active.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using OpVolumeID = asb_uci::base::BoundedList<uci::type::OpVolumeID_Type, uci::type::accessorType::opVolumeID_Type, asb_uci::type::OpVolumeID_Type>;

  /** The constructor */
  CommTerminalPlanTriggerType();

  /** The copy constructor
    *
    * @param rhs The CommTerminalPlanTriggerType to copy from
    */
  CommTerminalPlanTriggerType(const CommTerminalPlanTriggerType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CommTerminalPlanTriggerType to move from
    */
  CommTerminalPlanTriggerType(CommTerminalPlanTriggerType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The CommTerminalPlanTriggerType to copy from
    * @return The CommTerminalPlanTriggerType that was assigned
    */
  CommTerminalPlanTriggerType& operator=(const CommTerminalPlanTriggerType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CommTerminalPlanTriggerType to move from
    * @return The CommTerminalPlanTriggerType that was assigned
    */
  CommTerminalPlanTriggerType& operator=(CommTerminalPlanTriggerType&& rhs) = delete;

  /** The destructor */
  virtual ~CommTerminalPlanTriggerType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommTerminalPlanTriggerType whose contents are to be used to set this
    *      uci::type::CommTerminalPlanTriggerType's contents.
    */
  void copy(const uci::type::CommTerminalPlanTriggerType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CommTerminalPlanTriggerType whose contents are to be used to set this
    *      uci::type::CommTerminalPlanTriggerType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CommTerminalPlanTriggerType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the MissionID field contained in this message fragment
    *
    * @return The const reference to the accessor to the MissionID field.
    */
  const uci::type::CommTerminalPlanTriggerType::MissionID& getMissionID() const override;

  /** Returns the accessor to the MissionID field contained in this message fragment
    *
    * @return The reference to the accessor to the MissionID field.
    */
  uci::type::CommTerminalPlanTriggerType::MissionID& getMissionID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommTerminalPlanTriggerType& setMissionID(const uci::type::CommTerminalPlanTriggerType::MissionID& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlansReferenceType& getPlanIdentifier_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PlansReferenceType& getPlanIdentifier() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlansReferenceType& getPlanIdentifier() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommTerminalPlanTriggerType& setPlanIdentifier(const uci::type::PlansReferenceType& accessor) override;

  /** Returns whether this optional field PlanIdentifieris available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPlanIdentifier() const noexcept override;

  /** Enables the optional field such that getPlanIdentifier will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlansReferenceType& enablePlanIdentifier(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommTerminalPlanTriggerType& clearPlanIdentifier() noexcept override;

  /** Returns the accessor to the EffectiveTimeSpans field contained in this message fragment
    *
    * @return The const reference to the accessor to the EffectiveTimeSpans field.
    */
  const uci::type::CommTerminalPlanTriggerType::EffectiveTimeSpans& getEffectiveTimeSpans() const override;

  /** Returns the accessor to the EffectiveTimeSpans field contained in this message fragment
    *
    * @return The reference to the accessor to the EffectiveTimeSpans field.
    */
  uci::type::CommTerminalPlanTriggerType::EffectiveTimeSpans& getEffectiveTimeSpans() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommTerminalPlanTriggerType& setEffectiveTimeSpans(const uci::type::CommTerminalPlanTriggerType::EffectiveTimeSpans& accessor) override;

  /** Returns the accessor to the OpZoneID field contained in this message fragment
    *
    * @return The const reference to the accessor to the OpZoneID field.
    */
  const uci::type::CommTerminalPlanTriggerType::OpZoneID& getOpZoneID() const override;

  /** Returns the accessor to the OpZoneID field contained in this message fragment
    *
    * @return The reference to the accessor to the OpZoneID field.
    */
  uci::type::CommTerminalPlanTriggerType::OpZoneID& getOpZoneID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommTerminalPlanTriggerType& setOpZoneID(const uci::type::CommTerminalPlanTriggerType::OpZoneID& accessor) override;

  /** Returns the accessor to the OpVolumeID field contained in this message fragment
    *
    * @return The const reference to the accessor to the OpVolumeID field.
    */
  const uci::type::CommTerminalPlanTriggerType::OpVolumeID& getOpVolumeID() const override;

  /** Returns the accessor to the OpVolumeID field contained in this message fragment
    *
    * @return The reference to the accessor to the OpVolumeID field.
    */
  uci::type::CommTerminalPlanTriggerType::OpVolumeID& getOpVolumeID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CommTerminalPlanTriggerType& setOpVolumeID(const uci::type::CommTerminalPlanTriggerType::OpVolumeID& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CommTerminalPlanTriggerType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CommTerminalPlanTriggerType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::CommTerminalPlanTriggerType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<MissionID> missionID_Accessor;
  std::unique_ptr<PlansReferenceType> planIdentifier_Accessor;
  std::unique_ptr<EffectiveTimeSpans> effectiveTimeSpans_Accessor;
  std::unique_ptr<OpZoneID> opZoneID_Accessor;
  std::unique_ptr<OpVolumeID> opVolumeID_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COMMTERMINALPLANTRIGGERTYPE_H
