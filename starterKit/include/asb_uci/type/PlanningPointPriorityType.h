/** @file PlanningPointPriorityType.h
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

#ifndef ASB_UCI_TYPE_PLANNINGPOINTPRIORITYTYPE_H
#define ASB_UCI_TYPE_PLANNINGPOINTPRIORITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PlanningPointPriorityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class PlanningPointType;

/** See annotations in child elements and messages/elements that use this type for details. */
class PlanningPointPriorityType : public virtual uci::type::PlanningPointPriorityType {
public:
  /** The constructor */
  PlanningPointPriorityType();

  /** The copy constructor
    *
    * @param rhs The PlanningPointPriorityType to copy from
    */
  PlanningPointPriorityType(const PlanningPointPriorityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The PlanningPointPriorityType to move from
    */
  PlanningPointPriorityType(PlanningPointPriorityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The PlanningPointPriorityType to copy from
    * @return The PlanningPointPriorityType that was assigned
    */
  PlanningPointPriorityType& operator=(const PlanningPointPriorityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The PlanningPointPriorityType to move from
    * @return The PlanningPointPriorityType that was assigned
    */
  PlanningPointPriorityType& operator=(PlanningPointPriorityType&& rhs) = delete;

  /** The destructor */
  virtual ~PlanningPointPriorityType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PlanningPointPriorityType whose contents are to be used to set this
    *      uci::type::PlanningPointPriorityType's contents.
    */
  void copy(const uci::type::PlanningPointPriorityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PlanningPointPriorityType whose contents are to be used to set this
    *      uci::type::PlanningPointPriorityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::PlanningPointPriorityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the Point field contained in this message fragment
    *
    * @return The const reference to the accessor to the Point field.
    */
  const uci::type::PlanningPointType& getPoint() const override;

  /** Returns the accessor to the Point field contained in this message fragment
    *
    * @return The reference to the accessor to the Point field.
    */
  uci::type::PlanningPointType& getPoint() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanningPointPriorityType& setPoint(const uci::type::PlanningPointType& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::UnsignedInt getPriority() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanningPointPriorityType& setPriority(xs::UnsignedInt value) override;

  /** Returns whether this optional field Priorityis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPriority() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PlanningPointPriorityType& clearPriority() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<PlanningPointPriorityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::PlanningPointPriorityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::PlanningPointPriorityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PlanningPointType> point_Accessor;
  boost::optional<asb_xs::UnsignedInt> priority_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PLANNINGPOINTPRIORITYTYPE_H
