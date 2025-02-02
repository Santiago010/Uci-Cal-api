/** @file RoutePlanValidationInputsType.h
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

#ifndef ASB_UCI_TYPE_ROUTEPLANVALIDATIONINPUTSTYPE_H
#define ASB_UCI_TYPE_ROUTEPLANVALIDATIONINPUTSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/PathTypeEnum.h"
#include "../../../include/asb_uci/type/PlanValidationInputsBaseType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RoutePlanValidationInputsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class AnalysisRouteID_Type;
class PlanningPointType;
class RoutePlanReferencesType;

/** See annotations in child elements and messages/elements that use this type for details. */
class RoutePlanValidationInputsType : public virtual uci::type::RoutePlanValidationInputsType, public virtual PlanValidationInputsBaseType {
public:
  /** Indicates which part or parts of the Plan (path type) to include in the RoutePlan validation. If omitted, all Parts
    * should be validated. List size for this element is based on "Select All That Apply" condition. [Occurrences: Minimum:
    * 0; Maximum: 12]
    */
  using PlanPart = asb_uci::base::BoundedList<uci::type::PathTypeEnum, uci::type::accessorType::pathTypeEnum, asb_uci::type::PathTypeEnum>;

  /** The constructor */
  RoutePlanValidationInputsType();

  /** The copy constructor
    *
    * @param rhs The RoutePlanValidationInputsType to copy from
    */
  RoutePlanValidationInputsType(const RoutePlanValidationInputsType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The RoutePlanValidationInputsType to move from
    */
  RoutePlanValidationInputsType(RoutePlanValidationInputsType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The RoutePlanValidationInputsType to copy from
    * @return The RoutePlanValidationInputsType that was assigned
    */
  RoutePlanValidationInputsType& operator=(const RoutePlanValidationInputsType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The RoutePlanValidationInputsType to move from
    * @return The RoutePlanValidationInputsType that was assigned
    */
  RoutePlanValidationInputsType& operator=(RoutePlanValidationInputsType&& rhs) = delete;

  /** The destructor */
  ~RoutePlanValidationInputsType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RoutePlanValidationInputsType whose contents are to be used to set this
    *      uci::type::RoutePlanValidationInputsType's contents.
    */
  void copy(const uci::type::RoutePlanValidationInputsType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RoutePlanValidationInputsType whose contents are to be used to set this
    *      uci::type::RoutePlanValidationInputsType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::RoutePlanValidationInputsType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the RoutePlanDetails field contained in this message fragment
    *
    * @return The const reference to the accessor to the RoutePlanDetails field.
    */
  const uci::type::RoutePlanReferencesType& getRoutePlanDetails() const override;

  /** Returns the accessor to the RoutePlanDetails field contained in this message fragment
    *
    * @return The reference to the accessor to the RoutePlanDetails field.
    */
  uci::type::RoutePlanReferencesType& getRoutePlanDetails() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RoutePlanValidationInputsType& setRoutePlanDetails(const uci::type::RoutePlanReferencesType& accessor) override;

  /** Returns the accessor to the PlanPart field contained in this message fragment
    *
    * @return The const reference to the accessor to the PlanPart field.
    */
  const uci::type::RoutePlanValidationInputsType::PlanPart& getPlanPart() const override;

  /** Returns the accessor to the PlanPart field contained in this message fragment
    *
    * @return The reference to the accessor to the PlanPart field.
    */
  uci::type::RoutePlanValidationInputsType::PlanPart& getPlanPart() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RoutePlanValidationInputsType& setPlanPart(const uci::type::RoutePlanValidationInputsType::PlanPart& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlanningPointType& getOrigin_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::PlanningPointType& getOrigin() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlanningPointType& getOrigin() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RoutePlanValidationInputsType& setOrigin(const uci::type::PlanningPointType& accessor) override;

  /** Returns whether this optional field Originis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasOrigin() const noexcept override;

  /** Enables the optional field such that getOrigin will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::PlanningPointType& enableOrigin(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RoutePlanValidationInputsType& clearOrigin() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::AnalysisRouteID_Type& getAnalysisRouteID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::AnalysisRouteID_Type& getAnalysisRouteID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::AnalysisRouteID_Type& getAnalysisRouteID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RoutePlanValidationInputsType& setAnalysisRouteID(const uci::type::AnalysisRouteID_Type& accessor) override;

  /** Returns whether this optional field AnalysisRouteIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAnalysisRouteID() const noexcept override;

  /** Enables the optional field such that getAnalysisRouteID will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::AnalysisRouteID_Type& enableAnalysisRouteID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RoutePlanValidationInputsType& clearAnalysisRouteID() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<RoutePlanValidationInputsType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::RoutePlanValidationInputsType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::RoutePlanValidationInputsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<RoutePlanReferencesType> routePlanDetails_Accessor;
  std::unique_ptr<PlanPart> planPart_Accessor;
  std::unique_ptr<PlanningPointType> origin_Accessor;
  std::unique_ptr<AnalysisRouteID_Type> analysisRouteID_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ROUTEPLANVALIDATIONINPUTSTYPE_H
