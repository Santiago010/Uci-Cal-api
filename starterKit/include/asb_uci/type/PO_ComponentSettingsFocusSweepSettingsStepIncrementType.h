/** @file PO_ComponentSettingsFocusSweepSettingsStepIncrementType.h
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

#ifndef ASB_UCI_TYPE_PO_COMPONENTSETTINGSFOCUSSWEEPSETTINGSSTEPINCREMENTTYPE_H
#define ASB_UCI_TYPE_PO_COMPONENTSETTINGSFOCUSSWEEPSETTINGSSTEPINCREMENTTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/PercentType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentSettingsFocusSweepSettingsStepIncrementType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** The increment used to move the focus lens between steps. */
class PO_ComponentSettingsFocusSweepSettingsStepIncrementType : public virtual uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType {
public:
  /** The constructor */
  PO_ComponentSettingsFocusSweepSettingsStepIncrementType();

  /** The copy constructor
    *
    * @param rhs The PO_ComponentSettingsFocusSweepSettingsStepIncrementType to copy from
    */
  PO_ComponentSettingsFocusSweepSettingsStepIncrementType(const PO_ComponentSettingsFocusSweepSettingsStepIncrementType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The PO_ComponentSettingsFocusSweepSettingsStepIncrementType to move from
    */
  PO_ComponentSettingsFocusSweepSettingsStepIncrementType(PO_ComponentSettingsFocusSweepSettingsStepIncrementType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The PO_ComponentSettingsFocusSweepSettingsStepIncrementType to copy from
    * @return The PO_ComponentSettingsFocusSweepSettingsStepIncrementType that was assigned
    */
  PO_ComponentSettingsFocusSweepSettingsStepIncrementType& operator=(const PO_ComponentSettingsFocusSweepSettingsStepIncrementType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The PO_ComponentSettingsFocusSweepSettingsStepIncrementType to move from
    * @return The PO_ComponentSettingsFocusSweepSettingsStepIncrementType that was assigned
    */
  PO_ComponentSettingsFocusSweepSettingsStepIncrementType& operator=(PO_ComponentSettingsFocusSweepSettingsStepIncrementType&& rhs) = delete;

  /** The destructor */
  virtual ~PO_ComponentSettingsFocusSweepSettingsStepIncrementType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType whose contents are to be used
    *      to set this uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType's contents.
    */
  void copy(const uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType whose contents are to be used
    *      to set this uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType::PO_ComponentSettingsFocusSweepSettingsStepIncrementTypeChoice getPO_ComponentSettingsFocusSweepSettingsStepIncrementTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getPO_ComponentSettingsFocusSweepSettingsStepIncrementTypeChoiceOrdinal() will be the ordinal specified when this
    * method was invoked. In addition, the access methods associated with the chosen element will be enabled and will
    * provide access to the chosen element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType& setPO_ComponentSettingsFocusSweepSettingsStepIncrementTypeChoiceOrdinal(uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType::PO_ComponentSettingsFocusSweepSettingsStepIncrementTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the contents of the message's Percentage item
    *
    * @return The contents of the Percentage field
    */
  uci::type::PercentTypeValue getPercentage() const override;

  /** Sets this choice's choice to be Percentage and initializes Percentage to be the specified value
    *
    * @param value The new value to set Percentage to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType& setPercentage(uci::type::PercentTypeValue value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by Percentage.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by Percentage, false otherwise.
    */
  bool isPercentage() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by Percentage. */
  void choosePercentage();

  /** Returns the contents of the message's NumberOfSteps item
    *
    * @return The contents of the NumberOfSteps field
    */
  xs::UnsignedInt getNumberOfSteps() const override;

  /** Sets this choice's choice to be NumberOfSteps and initializes NumberOfSteps to be the specified value
    *
    * @param value The new value to set NumberOfSteps to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType& setNumberOfSteps(xs::UnsignedInt value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by NumberOfSteps.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by NumberOfSteps, false otherwise.
    */
  bool isNumberOfSteps() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by NumberOfSteps. */
  void chooseNumberOfSteps();

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<PO_ComponentSettingsFocusSweepSettingsStepIncrementType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::PO_ComponentSettingsFocusSweepSettingsStepIncrementType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  boost::optional<asb_xs::Double> percentage_Accessor;
  boost::optional<asb_xs::UnsignedInt> numberOfSteps_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PO_COMPONENTSETTINGSFOCUSSWEEPSETTINGSSTEPINCREMENTTYPE_H
