/** @file AO_ComponentType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:11 PM
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

#ifndef ASB_UCI_TYPE_AO_COMPONENTTYPE_H
#define ASB_UCI_TYPE_AO_COMPONENTTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/DistanceType.h"
#include "../../../include/asb_uci/type/PowerType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/AO_ComponentType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class AO_CodeType;
class ComponentID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class AO_ComponentType : public virtual uci::type::AO_ComponentType {
public:
  /** Indicates a PRF and/or PIM code supported by the AO component. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using SupportedCode = asb_uci::base::BoundedList<uci::type::AO_CodeType, uci::type::accessorType::aO_CodeType, asb_uci::type::AO_CodeType>;

  /** The constructor */
  AO_ComponentType();

  /** The copy constructor
    *
    * @param rhs The AO_ComponentType to copy from
    */
  AO_ComponentType(const AO_ComponentType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The AO_ComponentType to move from
    */
  AO_ComponentType(AO_ComponentType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The AO_ComponentType to copy from
    * @return The AO_ComponentType that was assigned
    */
  AO_ComponentType& operator=(const AO_ComponentType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The AO_ComponentType to move from
    * @return The AO_ComponentType that was assigned
    */
  AO_ComponentType& operator=(AO_ComponentType&& rhs) = delete;

  /** The destructor */
  virtual ~AO_ComponentType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::AO_ComponentType whose contents are to be used to set this
    *      uci::type::AO_ComponentType's contents.
    */
  void copy(const uci::type::AO_ComponentType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::AO_ComponentType whose contents are to be used to set this
    *      uci::type::AO_ComponentType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::AO_ComponentType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the ComponentID field contained in this message fragment
    *
    * @return The const reference to the accessor to the ComponentID field.
    */
  const uci::type::ComponentID_Type& getComponentID() const override;

  /** Returns the accessor to the ComponentID field contained in this message fragment
    *
    * @return The reference to the accessor to the ComponentID field.
    */
  uci::type::ComponentID_Type& getComponentID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::AO_ComponentType& setComponentID(const uci::type::ComponentID_Type& accessor) override;

  /** Returns the contents of the message's MinimumPower field
    *
    * @return The contents of the MinimumPower field
    */
  uci::type::PowerTypeValue getMinimumPower() const override;

  /** Sets the contents of the message's MinimumPower field
    *
    * @param value The new value to set the MinimumPower field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::AO_ComponentType& setMinimumPower(uci::type::PowerTypeValue value) override;

  /** Returns the contents of the message's MaximumPower field
    *
    * @return The contents of the MaximumPower field
    */
  uci::type::PowerTypeValue getMaximumPower() const override;

  /** Sets the contents of the message's MaximumPower field
    *
    * @param value The new value to set the MaximumPower field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::AO_ComponentType& setMaximumPower(uci::type::PowerTypeValue value) override;

  /** Returns the contents of the message's MinimumWavelength field
    *
    * @return The contents of the MinimumWavelength field
    */
  uci::type::DistanceTypeValue getMinimumWavelength() const override;

  /** Sets the contents of the message's MinimumWavelength field
    *
    * @param value The new value to set the MinimumWavelength field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::AO_ComponentType& setMinimumWavelength(uci::type::DistanceTypeValue value) override;

  /** Returns the contents of the message's MaximumWavelength field
    *
    * @return The contents of the MaximumWavelength field
    */
  uci::type::DistanceTypeValue getMaximumWavelength() const override;

  /** Sets the contents of the message's MaximumWavelength field
    *
    * @param value The new value to set the MaximumWavelength field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::AO_ComponentType& setMaximumWavelength(uci::type::DistanceTypeValue value) override;

  /** Returns the accessor to the SupportedCode field contained in this message fragment
    *
    * @return The const reference to the accessor to the SupportedCode field.
    */
  const uci::type::AO_ComponentType::SupportedCode& getSupportedCode() const override;

  /** Returns the accessor to the SupportedCode field contained in this message fragment
    *
    * @return The reference to the accessor to the SupportedCode field.
    */
  uci::type::AO_ComponentType::SupportedCode& getSupportedCode() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::AO_ComponentType& setSupportedCode(const uci::type::AO_ComponentType::SupportedCode& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<AO_ComponentType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::AO_ComponentType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::AO_ComponentType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<ComponentID_Type> componentID_Accessor;
  PowerTypeValue minimumPower_Accessor{0.0};
  PowerTypeValue maximumPower_Accessor{0.0};
  DistanceTypeValue minimumWavelength_Accessor{0.0};
  DistanceTypeValue maximumWavelength_Accessor{0.0};
  std::unique_ptr<SupportedCode> supportedCode_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_AO_COMPONENTTYPE_H
