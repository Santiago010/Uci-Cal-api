/** @file PO_ComponentStatusApertureSettingsType.h
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

#ifndef ASB_UCI_TYPE_PO_COMPONENTSTATUSAPERTURESETTINGSTYPE_H
#define ASB_UCI_TYPE_PO_COMPONENTSTATUSAPERTURESETTINGSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/EmptyType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PO_ComponentStatusApertureSettingsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ComponentControlsStatusType;
class PO_ApertureID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class PO_ComponentStatusApertureSettingsType : public virtual uci::type::PO_ComponentStatusApertureSettingsType {
public:
  /** The constructor */
  PO_ComponentStatusApertureSettingsType();

  /** The copy constructor
    *
    * @param rhs The PO_ComponentStatusApertureSettingsType to copy from
    */
  PO_ComponentStatusApertureSettingsType(const PO_ComponentStatusApertureSettingsType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The PO_ComponentStatusApertureSettingsType to move from
    */
  PO_ComponentStatusApertureSettingsType(PO_ComponentStatusApertureSettingsType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The PO_ComponentStatusApertureSettingsType to copy from
    * @return The PO_ComponentStatusApertureSettingsType that was assigned
    */
  PO_ComponentStatusApertureSettingsType& operator=(const PO_ComponentStatusApertureSettingsType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The PO_ComponentStatusApertureSettingsType to move from
    * @return The PO_ComponentStatusApertureSettingsType that was assigned
    */
  PO_ComponentStatusApertureSettingsType& operator=(PO_ComponentStatusApertureSettingsType&& rhs) = delete;

  /** The destructor */
  virtual ~PO_ComponentStatusApertureSettingsType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PO_ComponentStatusApertureSettingsType whose contents are to be used to set this
    *      uci::type::PO_ComponentStatusApertureSettingsType's contents.
    */
  void copy(const uci::type::PO_ComponentStatusApertureSettingsType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PO_ComponentStatusApertureSettingsType whose contents are to be used to set this
    *      uci::type::PO_ComponentStatusApertureSettingsType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::PO_ComponentStatusApertureSettingsType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the ApertureID field contained in this message fragment
    *
    * @return The const reference to the accessor to the ApertureID field.
    */
  const uci::type::PO_ApertureID_Type& getApertureID() const override;

  /** Returns the accessor to the ApertureID field contained in this message fragment
    *
    * @return The reference to the accessor to the ApertureID field.
    */
  uci::type::PO_ApertureID_Type& getApertureID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentStatusApertureSettingsType& setApertureID(const uci::type::PO_ApertureID_Type& accessor) override;

  /** Returns the accessor to the ApertureControlsStatus field contained in this message fragment
    *
    * @return The const reference to the accessor to the ApertureControlsStatus field.
    */
  const uci::type::ComponentControlsStatusType& getApertureControlsStatus() const override;

  /** Returns the accessor to the ApertureControlsStatus field contained in this message fragment
    *
    * @return The reference to the accessor to the ApertureControlsStatus field.
    */
  uci::type::ComponentControlsStatusType& getApertureControlsStatus() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentStatusApertureSettingsType& setApertureControlsStatus(const uci::type::ComponentControlsStatusType& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Float getF_StopSetting() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentStatusApertureSettingsType& setF_StopSetting(xs::Float value) override;

  /** Returns whether this optional field F_StopSettingis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasF_StopSetting() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentStatusApertureSettingsType& clearF_StopSetting() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::EmptyType& getReset_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::EmptyType& getReset() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::EmptyType& getReset() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentStatusApertureSettingsType& setReset(const uci::type::EmptyType& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentStatusApertureSettingsType& setReset(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentStatusApertureSettingsType& setReset(const char* value) override;

  /** Returns whether this optional field reset_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasReset() const noexcept override;

  /** Enables the optional field such that getReset will return the optional field and not throw an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::EmptyType& enableReset(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PO_ComponentStatusApertureSettingsType& clearReset() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<PO_ComponentStatusApertureSettingsType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::PO_ComponentStatusApertureSettingsType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::PO_ComponentStatusApertureSettingsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PO_ApertureID_Type> apertureID_Accessor;
  std::unique_ptr<ComponentControlsStatusType> apertureControlsStatus_Accessor;
  boost::optional<asb_xs::Float> f_StopSetting_Accessor;
  std::unique_ptr<EmptyType> reset_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PO_COMPONENTSTATUSAPERTURESETTINGSTYPE_H
