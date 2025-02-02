/** @file MissionPlanMDT.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#ifndef ASB_UCI_TYPE_MISSIONPLANMDT_H
#define ASB_UCI_TYPE_MISSIONPLANMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MissionPlanMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class DateTimeRangeType;
class ExecutionSequenceType;
class MissionPlanCommandID_ChoiceType;
class MissionPlanID_Type;
class MissionPlanInputsType;
class PlanApplicabilityType;
class PlansReferenceBaseType;
class RemarksType;

/** See annotations in child elements and messages/elements that use this type for details. */
class MissionPlanMDT : public virtual uci::type::MissionPlanMDT {
public:
  /** Indicates a MissionPlan that is the parent of this MissionPlan. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using ParentMissionPlanID = asb_uci::base::BoundedList<uci::type::MissionPlanID_Type, uci::type::accessorType::missionPlanID_Type, asb_uci::type::MissionPlanID_Type>;

  /** Indicates a MissionPlan that is subordinate to this MissionPlan. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using SubordinateMissionPlanID = asb_uci::base::BoundedList<uci::type::MissionPlanID_Type, uci::type::accessorType::missionPlanID_Type, asb_uci::type::MissionPlanID_Type>;

  /** The constructor */
  MissionPlanMDT();

  /** The copy constructor
    *
    * @param rhs The MissionPlanMDT to copy from
    */
  MissionPlanMDT(const MissionPlanMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The MissionPlanMDT to move from
    */
  MissionPlanMDT(MissionPlanMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The MissionPlanMDT to copy from
    * @return The MissionPlanMDT that was assigned
    */
  MissionPlanMDT& operator=(const MissionPlanMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The MissionPlanMDT to move from
    * @return The MissionPlanMDT that was assigned
    */
  MissionPlanMDT& operator=(MissionPlanMDT&& rhs) = delete;

  /** The destructor */
  virtual ~MissionPlanMDT();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MissionPlanMDT whose contents are to be used to set this uci::type::MissionPlanMDT's
    *      contents.
    */
  void copy(const uci::type::MissionPlanMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MissionPlanMDT whose contents are to be used to set this uci::type::MissionPlanMDT's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::MissionPlanMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the MissionPlanID field contained in this message fragment
    *
    * @return The const reference to the accessor to the MissionPlanID field.
    */
  const uci::type::MissionPlanID_Type& getMissionPlanID() const override;

  /** Returns the accessor to the MissionPlanID field contained in this message fragment
    *
    * @return The reference to the accessor to the MissionPlanID field.
    */
  uci::type::MissionPlanID_Type& getMissionPlanID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& setMissionPlanID(const uci::type::MissionPlanID_Type& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MissionPlanCommandID_ChoiceType& getMissionPlanCommandID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::MissionPlanCommandID_ChoiceType& getMissionPlanCommandID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MissionPlanCommandID_ChoiceType& getMissionPlanCommandID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& setMissionPlanCommandID(const uci::type::MissionPlanCommandID_ChoiceType& accessor) override;

  /** Returns whether this optional field MissionPlanCommandIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMissionPlanCommandID() const noexcept override;

  /** Enables the optional field such that getMissionPlanCommandID will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MissionPlanCommandID_ChoiceType& enableMissionPlanCommandID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& clearMissionPlanCommandID() noexcept override;

  /** Returns the accessor to the Applicability field contained in this message fragment
    *
    * @return The const reference to the accessor to the Applicability field.
    */
  const uci::type::PlanApplicabilityType& getApplicability() const override;

  /** Returns the accessor to the Applicability field contained in this message fragment
    *
    * @return The reference to the accessor to the Applicability field.
    */
  uci::type::PlanApplicabilityType& getApplicability() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& setApplicability(const uci::type::PlanApplicabilityType& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::DateTimeRangeType& getWindow_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::DateTimeRangeType& getWindow() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::DateTimeRangeType& getWindow() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& setWindow(const uci::type::DateTimeRangeType& accessor) override;

  /** Returns whether this optional field Windowis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasWindow() const noexcept override;

  /** Enables the optional field such that getWindow will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::DateTimeRangeType& enableWindow(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& clearWindow() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlansReferenceBaseType& getSubPlans_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PlansReferenceBaseType& getSubPlans() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlansReferenceBaseType& getSubPlans() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& setSubPlans(const uci::type::PlansReferenceBaseType& accessor) override;

  /** Returns whether this optional field SubPlansis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSubPlans() const noexcept override;

  /** Enables the optional field such that getSubPlans will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlansReferenceBaseType& enableSubPlans(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& clearSubPlans() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ExecutionSequenceType& getExecutionSequence_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ExecutionSequenceType& getExecutionSequence() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ExecutionSequenceType& getExecutionSequence() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& setExecutionSequence(const uci::type::ExecutionSequenceType& accessor) override;

  /** Returns whether this optional field ExecutionSequenceis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasExecutionSequence() const noexcept override;

  /** Enables the optional field such that getExecutionSequence will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ExecutionSequenceType& enableExecutionSequence(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& clearExecutionSequence() noexcept override;

  /** Returns the accessor to the ParentMissionPlanID field contained in this message fragment
    *
    * @return The const reference to the accessor to the ParentMissionPlanID field.
    */
  const uci::type::MissionPlanMDT::ParentMissionPlanID& getParentMissionPlanID() const override;

  /** Returns the accessor to the ParentMissionPlanID field contained in this message fragment
    *
    * @return The reference to the accessor to the ParentMissionPlanID field.
    */
  uci::type::MissionPlanMDT::ParentMissionPlanID& getParentMissionPlanID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& setParentMissionPlanID(const uci::type::MissionPlanMDT::ParentMissionPlanID& accessor) override;

  /** Returns the accessor to the SubordinateMissionPlanID field contained in this message fragment
    *
    * @return The const reference to the accessor to the SubordinateMissionPlanID field.
    */
  const uci::type::MissionPlanMDT::SubordinateMissionPlanID& getSubordinateMissionPlanID() const override;

  /** Returns the accessor to the SubordinateMissionPlanID field contained in this message fragment
    *
    * @return The reference to the accessor to the SubordinateMissionPlanID field.
    */
  uci::type::MissionPlanMDT::SubordinateMissionPlanID& getSubordinateMissionPlanID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& setSubordinateMissionPlanID(const uci::type::MissionPlanMDT::SubordinateMissionPlanID& accessor) override;

  /** Returns the contents of the message's ForPlanningUseOnly field
    *
    * @return The contents of the ForPlanningUseOnly field
    */
  xs::Boolean getForPlanningUseOnly() const override;

  /** Sets the contents of the message's ForPlanningUseOnly field
    *
    * @param value The new value to set the ForPlanningUseOnly field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& setForPlanningUseOnly(xs::Boolean value) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MissionPlanInputsType& getPlanInputs_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::MissionPlanInputsType& getPlanInputs() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MissionPlanInputsType& getPlanInputs() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& setPlanInputs(const uci::type::MissionPlanInputsType& accessor) override;

  /** Returns whether this optional field PlanInputsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPlanInputs() const noexcept override;

  /** Enables the optional field such that getPlanInputs will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MissionPlanInputsType& enablePlanInputs(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& clearPlanInputs() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RemarksType& getRemarks_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RemarksType& getRemarks() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RemarksType& getRemarks() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& setRemarks(const uci::type::RemarksType& accessor) override;

  /** Returns whether this optional field Remarksis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRemarks() const noexcept override;

  /** Enables the optional field such that getRemarks will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RemarksType& enableRemarks(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MissionPlanMDT& clearRemarks() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<MissionPlanMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::MissionPlanMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::MissionPlanMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<MissionPlanID_Type> missionPlanID_Accessor;
  std::unique_ptr<MissionPlanCommandID_ChoiceType> missionPlanCommandID_Accessor;
  std::unique_ptr<PlanApplicabilityType> applicability_Accessor;
  std::unique_ptr<DateTimeRangeType> window_Accessor;
  std::unique_ptr<PlansReferenceBaseType> subPlans_Accessor;
  std::unique_ptr<ExecutionSequenceType> executionSequence_Accessor;
  std::unique_ptr<ParentMissionPlanID> parentMissionPlanID_Accessor;
  std::unique_ptr<SubordinateMissionPlanID> subordinateMissionPlanID_Accessor;
  asb_xs::Boolean forPlanningUseOnly_Accessor{false};
  std::unique_ptr<MissionPlanInputsType> planInputs_Accessor;
  std::unique_ptr<RemarksType> remarks_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_MISSIONPLANMDT_H
