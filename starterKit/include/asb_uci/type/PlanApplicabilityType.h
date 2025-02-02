/** @file PlanApplicabilityType.h
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

#ifndef ASB_UCI_TYPE_PLANAPPLICABILITYTYPE_H
#define ASB_UCI_TYPE_PLANAPPLICABILITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../../cppInterface/2.3.2/include/uci/type/PlanApplicabilityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class SystemID_Type;

/** Indicates the System or Systems which have a direct relationship with the developed plan. Complex, dispersed, and/or
  * hierarchical C2 systems require planning and plans at multiple levels with varying purpose and detail. Therefore,
  * plan messages must give an indication of their level, purpose and detail. For instance, planning services at the
  * operational level of warfare may have different details and control authorities compared to planning services at the
  * tactical level of warfare. The PlanApplicabilityType helps clarify which systems have which roles and
  * responsibilities with respect to the plan. See child elements for further details.
  */
class PlanApplicabilityType : public virtual uci::type::PlanApplicabilityType {
public:
  /** The constructor */
  PlanApplicabilityType();

  /** The copy constructor
    *
    * @param rhs The PlanApplicabilityType to copy from
    */
  PlanApplicabilityType(const PlanApplicabilityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The PlanApplicabilityType to move from
    */
  PlanApplicabilityType(PlanApplicabilityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The PlanApplicabilityType to copy from
    * @return The PlanApplicabilityType that was assigned
    */
  PlanApplicabilityType& operator=(const PlanApplicabilityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The PlanApplicabilityType to move from
    * @return The PlanApplicabilityType that was assigned
    */
  PlanApplicabilityType& operator=(PlanApplicabilityType&& rhs) = delete;

  /** The destructor */
  virtual ~PlanApplicabilityType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PlanApplicabilityType whose contents are to be used to set this
    *      uci::type::PlanApplicabilityType's contents.
    */
  void copy(const uci::type::PlanApplicabilityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PlanApplicabilityType whose contents are to be used to set this
    *      uci::type::PlanApplicabilityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::PlanApplicabilityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SystemID_Type& getPlannedForID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SystemID_Type& getPlannedForID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SystemID_Type& getPlannedForID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanApplicabilityType& setPlannedForID(const uci::type::SystemID_Type& accessor) override;

  /** Returns whether this optional field PlannedForIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPlannedForID() const noexcept override;

  /** Enables the optional field such that getPlannedForID will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SystemID_Type& enablePlannedForID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanApplicabilityType& clearPlannedForID() noexcept override;

  /** Returns the accessor to the ApplicableToID field contained in this message fragment
    *
    * @return The const reference to the accessor to the ApplicableToID field.
    */
  const uci::type::SystemID_Type& getApplicableToID() const override;

  /** Returns the accessor to the ApplicableToID field contained in this message fragment
    *
    * @return The reference to the accessor to the ApplicableToID field.
    */
  uci::type::SystemID_Type& getApplicableToID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanApplicabilityType& setApplicableToID(const uci::type::SystemID_Type& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<PlanApplicabilityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::PlanApplicabilityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::PlanApplicabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SystemID_Type> plannedForID_Accessor;
  std::unique_ptr<SystemID_Type> applicableToID_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PLANAPPLICABILITYTYPE_H
