/** @file SubsystemActiveBIT_Type.h
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

#ifndef ASB_UCI_TYPE_SUBSYSTEMACTIVEBIT_TYPE_H
#define ASB_UCI_TYPE_SUBSYSTEMACTIVEBIT_TYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/PercentType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemActiveBIT_Type.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class BIT_ID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class SubsystemActiveBIT_Type : public virtual uci::type::SubsystemActiveBIT_Type {
public:
  /** The constructor */
  SubsystemActiveBIT_Type();

  /** The copy constructor
    *
    * @param rhs The SubsystemActiveBIT_Type to copy from
    */
  SubsystemActiveBIT_Type(const SubsystemActiveBIT_Type& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SubsystemActiveBIT_Type to move from
    */
  SubsystemActiveBIT_Type(SubsystemActiveBIT_Type&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SubsystemActiveBIT_Type to copy from
    * @return The SubsystemActiveBIT_Type that was assigned
    */
  SubsystemActiveBIT_Type& operator=(const SubsystemActiveBIT_Type& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SubsystemActiveBIT_Type to move from
    * @return The SubsystemActiveBIT_Type that was assigned
    */
  SubsystemActiveBIT_Type& operator=(SubsystemActiveBIT_Type&& rhs) = delete;

  /** The destructor */
  virtual ~SubsystemActiveBIT_Type();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SubsystemActiveBIT_Type whose contents are to be used to set this
    *      uci::type::SubsystemActiveBIT_Type's contents.
    */
  void copy(const uci::type::SubsystemActiveBIT_Type& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SubsystemActiveBIT_Type whose contents are to be used to set this
    *      uci::type::SubsystemActiveBIT_Type's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SubsystemActiveBIT_Type& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the BIT_ID field contained in this message fragment
    *
    * @return The const reference to the accessor to the BIT_ID field.
    */
  const uci::type::BIT_ID_Type& getBIT_ID() const override;

  /** Returns the accessor to the BIT_ID field contained in this message fragment
    *
    * @return The reference to the accessor to the BIT_ID field.
    */
  uci::type::BIT_ID_Type& getBIT_ID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemActiveBIT_Type& setBIT_ID(const uci::type::BIT_ID_Type& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DateTimeTypeValue getEstimatedCompletionTime() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemActiveBIT_Type& setEstimatedCompletionTime(uci::type::DateTimeTypeValue value) override;

  /** Returns whether this optional field EstimatedCompletionTimeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEstimatedCompletionTime() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemActiveBIT_Type& clearEstimatedCompletionTime() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::PercentTypeValue getEstimatedPercentComplete() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemActiveBIT_Type& setEstimatedPercentComplete(uci::type::PercentTypeValue value) override;

  /** Returns whether this optional field EstimatedPercentCompleteis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEstimatedPercentComplete() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemActiveBIT_Type& clearEstimatedPercentComplete() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SubsystemActiveBIT_Type> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SubsystemActiveBIT_Type& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SubsystemActiveBIT_Type& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<BIT_ID_Type> bIT_ID_Accessor;
  boost::optional<DateTimeTypeValue> estimatedCompletionTime_Accessor;
  boost::optional<PercentTypeValue> estimatedPercentComplete_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SUBSYSTEMACTIVEBIT_TYPE_H
