/** @file ControlSourcesCapabilityControlType.h
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

#ifndef ASB_UCI_TYPE_CONTROLSOURCESCAPABILITYCONTROLTYPE_H
#define ASB_UCI_TYPE_CONTROLSOURCESCAPABILITYCONTROLTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ControlSourcesCapabilityControlType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CapabilityID_Type;
class PrimaryControllerType;
class SecondaryControllerType;

/** See annotations in child elements and messages/elements that use this type for details. */
class ControlSourcesCapabilityControlType : public virtual uci::type::ControlSourcesCapabilityControlType {
public:
  /** Indicates a secondary controller of the Capability. See ControlStatus message annotations for further details.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using SecondaryController = asb_uci::base::BoundedList<uci::type::SecondaryControllerType, uci::type::accessorType::secondaryControllerType, asb_uci::type::SecondaryControllerType>;

  /** The constructor */
  ControlSourcesCapabilityControlType();

  /** The copy constructor
    *
    * @param rhs The ControlSourcesCapabilityControlType to copy from
    */
  ControlSourcesCapabilityControlType(const ControlSourcesCapabilityControlType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ControlSourcesCapabilityControlType to move from
    */
  ControlSourcesCapabilityControlType(ControlSourcesCapabilityControlType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ControlSourcesCapabilityControlType to copy from
    * @return The ControlSourcesCapabilityControlType that was assigned
    */
  ControlSourcesCapabilityControlType& operator=(const ControlSourcesCapabilityControlType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ControlSourcesCapabilityControlType to move from
    * @return The ControlSourcesCapabilityControlType that was assigned
    */
  ControlSourcesCapabilityControlType& operator=(ControlSourcesCapabilityControlType&& rhs) = delete;

  /** The destructor */
  virtual ~ControlSourcesCapabilityControlType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ControlSourcesCapabilityControlType whose contents are to be used to set this
    *      uci::type::ControlSourcesCapabilityControlType's contents.
    */
  void copy(const uci::type::ControlSourcesCapabilityControlType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ControlSourcesCapabilityControlType whose contents are to be used to set this
    *      uci::type::ControlSourcesCapabilityControlType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ControlSourcesCapabilityControlType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the ControlleeCapabilityID field contained in this message fragment
    *
    * @return The const reference to the accessor to the ControlleeCapabilityID field.
    */
  const uci::type::CapabilityID_Type& getControlleeCapabilityID() const override;

  /** Returns the accessor to the ControlleeCapabilityID field contained in this message fragment
    *
    * @return The reference to the accessor to the ControlleeCapabilityID field.
    */
  uci::type::CapabilityID_Type& getControlleeCapabilityID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ControlSourcesCapabilityControlType& setControlleeCapabilityID(const uci::type::CapabilityID_Type& accessor) override;

  /** Returns the accessor to the PrimaryController field contained in this message fragment
    *
    * @return The const reference to the accessor to the PrimaryController field.
    */
  const uci::type::PrimaryControllerType& getPrimaryController() const override;

  /** Returns the accessor to the PrimaryController field contained in this message fragment
    *
    * @return The reference to the accessor to the PrimaryController field.
    */
  uci::type::PrimaryControllerType& getPrimaryController() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ControlSourcesCapabilityControlType& setPrimaryController(const uci::type::PrimaryControllerType& accessor) override;

  /** Returns the accessor to the SecondaryController field contained in this message fragment
    *
    * @return The const reference to the accessor to the SecondaryController field.
    */
  const uci::type::ControlSourcesCapabilityControlType::SecondaryController& getSecondaryController() const override;

  /** Returns the accessor to the SecondaryController field contained in this message fragment
    *
    * @return The reference to the accessor to the SecondaryController field.
    */
  uci::type::ControlSourcesCapabilityControlType::SecondaryController& getSecondaryController() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::ControlSourcesCapabilityControlType& setSecondaryController(const uci::type::ControlSourcesCapabilityControlType::SecondaryController& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ControlSourcesCapabilityControlType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ControlSourcesCapabilityControlType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ControlSourcesCapabilityControlType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CapabilityID_Type> controlleeCapabilityID_Accessor;
  std::unique_ptr<PrimaryControllerType> primaryController_Accessor;
  std::unique_ptr<SecondaryController> secondaryController_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_CONTROLSOURCESCAPABILITYCONTROLTYPE_H
