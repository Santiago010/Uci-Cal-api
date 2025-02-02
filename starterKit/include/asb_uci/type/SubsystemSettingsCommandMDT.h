/** @file SubsystemSettingsCommandMDT.h
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

#ifndef ASB_UCI_TYPE_SUBSYSTEMSETTINGSCOMMANDMDT_H
#define ASB_UCI_TYPE_SUBSYSTEMSETTINGSCOMMANDMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/CapabilityCommandStateEnum.h"
#include "../../../include/asb_uci/type/CommandBaseType.h"
#include "../../../include/asb_uci/type/SubsystemSettingEnum.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SubsystemSettingsCommandMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class SubsystemID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class SubsystemSettingsCommandMDT : public virtual uci::type::SubsystemSettingsCommandMDT, public virtual CommandBaseType {
public:
  /** The constructor */
  SubsystemSettingsCommandMDT();

  /** The copy constructor
    *
    * @param rhs The SubsystemSettingsCommandMDT to copy from
    */
  SubsystemSettingsCommandMDT(const SubsystemSettingsCommandMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SubsystemSettingsCommandMDT to move from
    */
  SubsystemSettingsCommandMDT(SubsystemSettingsCommandMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SubsystemSettingsCommandMDT to copy from
    * @return The SubsystemSettingsCommandMDT that was assigned
    */
  SubsystemSettingsCommandMDT& operator=(const SubsystemSettingsCommandMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SubsystemSettingsCommandMDT to move from
    * @return The SubsystemSettingsCommandMDT that was assigned
    */
  SubsystemSettingsCommandMDT& operator=(SubsystemSettingsCommandMDT&& rhs) = delete;

  /** The destructor */
  ~SubsystemSettingsCommandMDT() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SubsystemSettingsCommandMDT whose contents are to be used to set this
    *      uci::type::SubsystemSettingsCommandMDT's contents.
    */
  void copy(const uci::type::SubsystemSettingsCommandMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SubsystemSettingsCommandMDT whose contents are to be used to set this
    *      uci::type::SubsystemSettingsCommandMDT's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SubsystemSettingsCommandMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the SubsystemID field contained in this message fragment
    *
    * @return The const reference to the accessor to the SubsystemID field.
    */
  const uci::type::SubsystemID_Type& getSubsystemID() const override;

  /** Returns the accessor to the SubsystemID field contained in this message fragment
    *
    * @return The reference to the accessor to the SubsystemID field.
    */
  uci::type::SubsystemID_Type& getSubsystemID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemSettingsCommandMDT& setSubsystemID(const uci::type::SubsystemID_Type& accessor) override;

  /** Returns the contents of the message's SubsystemSetting field
    *
    * @return The contents of the SubsystemSetting field
    */
  const uci::type::SubsystemSettingEnum& getSubsystemSetting() const override;

  /** Returns the contents of the message's SubsystemSetting field
    *
    * @return The contents of the SubsystemSetting field
    */
  uci::type::SubsystemSettingEnum& getSubsystemSetting() override;

  /** Sets the contents of the message's SubsystemSetting field
    *
    * @param accessor The accessor to use to set the SubsystemSetting field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemSettingsCommandMDT& setSubsystemSetting(const uci::type::SubsystemSettingEnum& accessor) override;

  /** Sets the contents of the message's SubsystemSetting field
    *
    * @param value The new value to set the SubsystemSetting field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemSettingsCommandMDT& setSubsystemSetting(uci::type::SubsystemSettingEnum::EnumerationItem value) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::UnsignedInt getParameterNumber() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemSettingsCommandMDT& setParameterNumber(xs::UnsignedInt value) override;

  /** Returns whether this optional field ParameterNumberis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasParameterNumber() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemSettingsCommandMDT& clearParameterNumber() noexcept override;

  /** Returns the contents of the message's CommandedState field
    *
    * @return The contents of the CommandedState field
    */
  const uci::type::CapabilityCommandStateEnum& getCommandedState() const override;

  /** Returns the contents of the message's CommandedState field
    *
    * @return The contents of the CommandedState field
    */
  uci::type::CapabilityCommandStateEnum& getCommandedState() override;

  /** Sets the contents of the message's CommandedState field
    *
    * @param accessor The accessor to use to set the CommandedState field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemSettingsCommandMDT& setCommandedState(const uci::type::CapabilityCommandStateEnum& accessor) override;

  /** Sets the contents of the message's CommandedState field
    *
    * @param value The new value to set the CommandedState field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SubsystemSettingsCommandMDT& setCommandedState(uci::type::CapabilityCommandStateEnum::EnumerationItem value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SubsystemSettingsCommandMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SubsystemSettingsCommandMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SubsystemSettingsCommandMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SubsystemID_Type> subsystemID_Accessor;
  std::unique_ptr<SubsystemSettingEnum> subsystemSetting_Accessor;
  boost::optional<asb_xs::UnsignedInt> parameterNumber_Accessor;
  std::unique_ptr<CapabilityCommandStateEnum> commandedState_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SUBSYSTEMSETTINGSCOMMANDMDT_H
