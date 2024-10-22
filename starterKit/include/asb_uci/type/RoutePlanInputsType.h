/** @file RoutePlanInputsType.h
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

#ifndef ASB_UCI_TYPE_ROUTEPLANINPUTSTYPE_H
#define ASB_UCI_TYPE_ROUTEPLANINPUTSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/PlanInputsCoreType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanInputsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class RoutePlanPartsType;
class RoutePlanningCandidateType;

/** See annotations in child elements and messages/elements that use this type for details. */
class RoutePlanInputsType : public virtual uci::type::RoutePlanInputsType, public virtual PlanInputsCoreType {
public:
  /** Indicates specific Systems to consider and plan for along with System-specific planning constraints. If omitted, all
    * Tiers and all Systems at and below those that the planning process is applicable to shall be planned. A System is a
    * planning "candidate" because its plan may or may not change as a result of the command; zero or more *Plans will
    * potentially be created for each candidate. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using PlanningCandidate = asb_uci::base::BoundedList<uci::type::RoutePlanningCandidateType, uci::type::accessorType::routePlanningCandidateType, asb_uci::type::RoutePlanningCandidateType>;

  /** The constructor */
  RoutePlanInputsType();

  /** The copy constructor
    *
    * @param rhs The RoutePlanInputsType to copy from
    */
  RoutePlanInputsType(const RoutePlanInputsType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The RoutePlanInputsType to move from
    */
  RoutePlanInputsType(RoutePlanInputsType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The RoutePlanInputsType to copy from
    * @return The RoutePlanInputsType that was assigned
    */
  RoutePlanInputsType& operator=(const RoutePlanInputsType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The RoutePlanInputsType to move from
    * @return The RoutePlanInputsType that was assigned
    */
  RoutePlanInputsType& operator=(RoutePlanInputsType&& rhs) = delete;

  /** The destructor */
  ~RoutePlanInputsType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RoutePlanInputsType whose contents are to be used to set this
    *      uci::type::RoutePlanInputsType's contents.
    */
  void copy(const uci::type::RoutePlanInputsType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RoutePlanInputsType whose contents are to be used to set this
    *      uci::type::RoutePlanInputsType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::RoutePlanInputsType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the PlanningCandidate field contained in this message fragment
    *
    * @return The const reference to the accessor to the PlanningCandidate field.
    */
  const uci::type::RoutePlanInputsType::PlanningCandidate& getPlanningCandidate() const override;

  /** Returns the accessor to the PlanningCandidate field contained in this message fragment
    *
    * @return The reference to the accessor to the PlanningCandidate field.
    */
  uci::type::RoutePlanInputsType::PlanningCandidate& getPlanningCandidate() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RoutePlanInputsType& setPlanningCandidate(const uci::type::RoutePlanInputsType::PlanningCandidate& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RoutePlanPartsType& getOutputPlanParts_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::RoutePlanPartsType& getOutputPlanParts() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::RoutePlanPartsType& getOutputPlanParts() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RoutePlanInputsType& setOutputPlanParts(const uci::type::RoutePlanPartsType& accessor) override;

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
  uci::type::RoutePlanPartsType& enableOutputPlanParts(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RoutePlanInputsType& clearOutputPlanParts() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<RoutePlanInputsType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::RoutePlanInputsType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::RoutePlanInputsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PlanningCandidate> planningCandidate_Accessor;
  std::unique_ptr<RoutePlanPartsType> outputPlanParts_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ROUTEPLANINPUTSTYPE_H
