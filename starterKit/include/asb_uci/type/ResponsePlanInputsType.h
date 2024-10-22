/** @file ResponsePlanInputsType.h
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

#ifndef ASB_UCI_TYPE_RESPONSEPLANINPUTSTYPE_H
#define ASB_UCI_TYPE_RESPONSEPLANINPUTSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/PlanInputsCoreType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ResponsePlanInputsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class RequirementAssociationConstraintType;
class RequirementPlanningCandidateType;
class ResponseAllocationType;
class ResponsePlanConstraintType;
class ResponsePlanPartsType;

/** See annotations in child elements and messages/elements that use this type for details. */
class ResponsePlanInputsType : public virtual uci::type::ResponsePlanInputsType, public virtual PlanInputsCoreType {
public:
  /** Indicates specific Systems to consider and plan for along with System-specific planning constraints. If omitted, all
    * Tiers and all Systems at and below those that the planning process is applicable to shall be planned. A System is a
    * planning "candidate" because its plan may or may not change as a result of the command; zero to one Plans per *Plan
    * type will potentially be created for each candidate. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using PlanningCandidate = asb_uci::base::BoundedList<uci::type::RequirementPlanningCandidateType, uci::type::accessorType::requirementPlanningCandidateType, asb_uci::type::RequirementPlanningCandidateType>;

  /** Indicates a proposed Response for the planning process. A Response given here is added to any Responses provided in
    * the sibling ProposedResponsePlan to create the full set of Responses to be considered by the planning process. A
    * Response given here overrides the same Response in the sibling ProposedResponsePlan. An empty list here, combined
    * with no sibling ProposedResponsePlan is considered a command to deallocate previously allocated Tasks. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  using ProposedResponse = asb_uci::base::BoundedList<uci::type::ResponseAllocationType, uci::type::accessorType::responseAllocationType, asb_uci::type::ResponseAllocationType>;

  /** Indicates an association between Requirements that is a constraint on how the Responses are allocated and planned.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using AssociationConstraint = asb_uci::base::BoundedList<uci::type::RequirementAssociationConstraintType, uci::type::accessorType::requirementAssociationConstraintType, asb_uci::type::RequirementAssociationConstraintType>;

  /** The constructor */
  ResponsePlanInputsType();

  /** The copy constructor
    *
    * @param rhs The ResponsePlanInputsType to copy from
    */
  ResponsePlanInputsType(const ResponsePlanInputsType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ResponsePlanInputsType to move from
    */
  ResponsePlanInputsType(ResponsePlanInputsType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ResponsePlanInputsType to copy from
    * @return The ResponsePlanInputsType that was assigned
    */
  ResponsePlanInputsType& operator=(const ResponsePlanInputsType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ResponsePlanInputsType to move from
    * @return The ResponsePlanInputsType that was assigned
    */
  ResponsePlanInputsType& operator=(ResponsePlanInputsType&& rhs) = delete;

  /** The destructor */
  ~ResponsePlanInputsType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ResponsePlanInputsType whose contents are to be used to set this
    *      uci::type::ResponsePlanInputsType's contents.
    */
  void copy(const uci::type::ResponsePlanInputsType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ResponsePlanInputsType whose contents are to be used to set this
    *      uci::type::ResponsePlanInputsType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ResponsePlanInputsType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the PlanningCandidate field contained in this message fragment
    *
    * @return The const reference to the accessor to the PlanningCandidate field.
    */
  const uci::type::ResponsePlanInputsType::PlanningCandidate& getPlanningCandidate() const override;

  /** Returns the accessor to the PlanningCandidate field contained in this message fragment
    *
    * @return The reference to the accessor to the PlanningCandidate field.
    */
  uci::type::ResponsePlanInputsType::PlanningCandidate& getPlanningCandidate() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResponsePlanInputsType& setPlanningCandidate(const uci::type::ResponsePlanInputsType::PlanningCandidate& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ResponsePlanConstraintType& getProposedResponsePlan_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ResponsePlanConstraintType& getProposedResponsePlan() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ResponsePlanConstraintType& getProposedResponsePlan() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResponsePlanInputsType& setProposedResponsePlan(const uci::type::ResponsePlanConstraintType& accessor) override;

  /** Returns whether this optional field ProposedResponsePlanis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasProposedResponsePlan() const noexcept override;

  /** Enables the optional field such that getProposedResponsePlan will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ResponsePlanConstraintType& enableProposedResponsePlan(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResponsePlanInputsType& clearProposedResponsePlan() noexcept override;

  /** Returns the accessor to the ProposedResponse field contained in this message fragment
    *
    * @return The const reference to the accessor to the ProposedResponse field.
    */
  const uci::type::ResponsePlanInputsType::ProposedResponse& getProposedResponse() const override;

  /** Returns the accessor to the ProposedResponse field contained in this message fragment
    *
    * @return The reference to the accessor to the ProposedResponse field.
    */
  uci::type::ResponsePlanInputsType::ProposedResponse& getProposedResponse() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResponsePlanInputsType& setProposedResponse(const uci::type::ResponsePlanInputsType::ProposedResponse& accessor) override;

  /** Returns the accessor to the AssociationConstraint field contained in this message fragment
    *
    * @return The const reference to the accessor to the AssociationConstraint field.
    */
  const uci::type::ResponsePlanInputsType::AssociationConstraint& getAssociationConstraint() const override;

  /** Returns the accessor to the AssociationConstraint field contained in this message fragment
    *
    * @return The reference to the accessor to the AssociationConstraint field.
    */
  uci::type::ResponsePlanInputsType::AssociationConstraint& getAssociationConstraint() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResponsePlanInputsType& setAssociationConstraint(const uci::type::ResponsePlanInputsType::AssociationConstraint& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ResponsePlanPartsType& getOutputPlanParts_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ResponsePlanPartsType& getOutputPlanParts() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ResponsePlanPartsType& getOutputPlanParts() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResponsePlanInputsType& setOutputPlanParts(const uci::type::ResponsePlanPartsType& accessor) override;

  /** Returns whether this optional field OutputPlanPartsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasOutputPlanParts() const noexcept override;

  /** Enables the optional field such that getOutputPlanParts will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ResponsePlanPartsType& enableOutputPlanParts(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::ResponsePlanInputsType& clearOutputPlanParts() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ResponsePlanInputsType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ResponsePlanInputsType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ResponsePlanInputsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PlanningCandidate> planningCandidate_Accessor;
  std::unique_ptr<ResponsePlanConstraintType> proposedResponsePlan_Accessor;
  std::unique_ptr<ProposedResponse> proposedResponse_Accessor;
  std::unique_ptr<AssociationConstraint> associationConstraint_Accessor;
  std::unique_ptr<ResponsePlanPartsType> outputPlanParts_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_RESPONSEPLANINPUTSTYPE_H
