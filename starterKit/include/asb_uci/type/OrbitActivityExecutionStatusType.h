/** @file OrbitActivityExecutionStatusType.h
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

#ifndef ASB_UCI_TYPE_ORBITACTIVITYEXECUTIONSTATUSTYPE_H
#define ASB_UCI_TYPE_ORBITACTIVITYEXECUTIONSTATUSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/ActivityExecutionStatusType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitActivityExecutionStatusType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class OrbitActivityPlanID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class OrbitActivityExecutionStatusType : public virtual uci::type::OrbitActivityExecutionStatusType, public virtual ActivityExecutionStatusType {
public:
  /** The constructor */
  OrbitActivityExecutionStatusType();

  /** The copy constructor
    *
    * @param rhs The OrbitActivityExecutionStatusType to copy from
    */
  OrbitActivityExecutionStatusType(const OrbitActivityExecutionStatusType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The OrbitActivityExecutionStatusType to move from
    */
  OrbitActivityExecutionStatusType(OrbitActivityExecutionStatusType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The OrbitActivityExecutionStatusType to copy from
    * @return The OrbitActivityExecutionStatusType that was assigned
    */
  OrbitActivityExecutionStatusType& operator=(const OrbitActivityExecutionStatusType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The OrbitActivityExecutionStatusType to move from
    * @return The OrbitActivityExecutionStatusType that was assigned
    */
  OrbitActivityExecutionStatusType& operator=(OrbitActivityExecutionStatusType&& rhs) = delete;

  /** The destructor */
  ~OrbitActivityExecutionStatusType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::OrbitActivityExecutionStatusType whose contents are to be used to set this
    *      uci::type::OrbitActivityExecutionStatusType's contents.
    */
  void copy(const uci::type::OrbitActivityExecutionStatusType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::OrbitActivityExecutionStatusType whose contents are to be used to set this
    *      uci::type::OrbitActivityExecutionStatusType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::OrbitActivityExecutionStatusType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the PlanID field contained in this message fragment
    *
    * @return The const reference to the accessor to the PlanID field.
    */
  const uci::type::OrbitActivityPlanID_Type& getPlanID() const override;

  /** Returns the accessor to the PlanID field contained in this message fragment
    *
    * @return The reference to the accessor to the PlanID field.
    */
  uci::type::OrbitActivityPlanID_Type& getPlanID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitActivityExecutionStatusType& setPlanID(const uci::type::OrbitActivityPlanID_Type& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<OrbitActivityExecutionStatusType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitActivityExecutionStatusType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::OrbitActivityExecutionStatusType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<OrbitActivityPlanID_Type> planID_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ORBITACTIVITYEXECUTIONSTATUSTYPE_H
