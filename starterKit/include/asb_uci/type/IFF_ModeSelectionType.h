/** @file IFF_ModeSelectionType.h
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

#ifndef ASB_UCI_TYPE_IFF_MODESELECTIONTYPE_H
#define ASB_UCI_TYPE_IFF_MODESELECTIONTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/IFF_Mode5_FormatType.h"
#include "../../../include/asb_uci/type/IFF_ModesEnum.h"
#include "../../../include/asb_uci/type/OctalValueType.h"
#include "../../../include/asb_xs/type/binaryXmlSchemaPrimitives.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/IFF_ModeSelectionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ModeS_OptionsType;

/** See annotations in child elements and messages/elements that use this type for details. */
class IFF_ModeSelectionType : public virtual uci::type::IFF_ModeSelectionType {
public:
  /** May be provided when Mode S and only Mode S is selected. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  using ModeS_AircraftAddress = asb_uci::base::BoundedList<uci::type::OctalValueType, uci::type::accessorType::octalValueType, asb_uci::type::OctalValueType>;

  /** The Registers to ask for in interrogation. Must be provided when Mode S is selected. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  using EHS_BDS_Registers = asb_uci::base::BoundedList<xs::HexBinary, xs::accessorType::hexBinary, asb_xs::HexBinary>;

  /** The constructor */
  IFF_ModeSelectionType();

  /** The copy constructor
    *
    * @param rhs The IFF_ModeSelectionType to copy from
    */
  IFF_ModeSelectionType(const IFF_ModeSelectionType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The IFF_ModeSelectionType to move from
    */
  IFF_ModeSelectionType(IFF_ModeSelectionType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The IFF_ModeSelectionType to copy from
    * @return The IFF_ModeSelectionType that was assigned
    */
  IFF_ModeSelectionType& operator=(const IFF_ModeSelectionType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The IFF_ModeSelectionType to move from
    * @return The IFF_ModeSelectionType that was assigned
    */
  IFF_ModeSelectionType& operator=(IFF_ModeSelectionType&& rhs) = delete;

  /** The destructor */
  virtual ~IFF_ModeSelectionType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IFF_ModeSelectionType whose contents are to be used to set this
    *      uci::type::IFF_ModeSelectionType's contents.
    */
  void copy(const uci::type::IFF_ModeSelectionType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::IFF_ModeSelectionType whose contents are to be used to set this
    *      uci::type::IFF_ModeSelectionType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::IFF_ModeSelectionType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's IFF_Mode field
    *
    * @return The contents of the IFF_Mode field
    */
  const uci::type::IFF_ModesEnum& getIFF_Mode() const override;

  /** Returns the contents of the message's IFF_Mode field
    *
    * @return The contents of the IFF_Mode field
    */
  uci::type::IFF_ModesEnum& getIFF_Mode() override;

  /** Sets the contents of the message's IFF_Mode field
    *
    * @param accessor The accessor to use to set the IFF_Mode field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeSelectionType& setIFF_Mode(const uci::type::IFF_ModesEnum& accessor) override;

  /** Sets the contents of the message's IFF_Mode field
    *
    * @param value The new value to set the IFF_Mode field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeSelectionType& setIFF_Mode(uci::type::IFF_ModesEnum::EnumerationItem value) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::IFF_Mode5_FormatTypeValue getMode5Format() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeSelectionType& setMode5Format(uci::type::IFF_Mode5_FormatTypeValue value) override;

  /** Returns whether this optional field Mode5Formatis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMode5Format() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeSelectionType& clearMode5Format() noexcept override;

  /** Returns the contents of the message's SuppressionPulse field
    *
    * @return The contents of the SuppressionPulse field
    */
  xs::Boolean getSuppressionPulse() const override;

  /** Sets the contents of the message's SuppressionPulse field
    *
    * @param value The new value to set the SuppressionPulse field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeSelectionType& setSuppressionPulse(xs::Boolean value) override;

  /** Returns the accessor to the ModeS_AircraftAddress field contained in this message fragment
    *
    * @return The const reference to the accessor to the ModeS_AircraftAddress field.
    */
  const uci::type::IFF_ModeSelectionType::ModeS_AircraftAddress& getModeS_AircraftAddress() const override;

  /** Returns the accessor to the ModeS_AircraftAddress field contained in this message fragment
    *
    * @return The reference to the accessor to the ModeS_AircraftAddress field.
    */
  uci::type::IFF_ModeSelectionType::ModeS_AircraftAddress& getModeS_AircraftAddress() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeSelectionType& setModeS_AircraftAddress(const uci::type::IFF_ModeSelectionType::ModeS_AircraftAddress& accessor) override;

  /** Returns the accessor to the EHS_BDS_Registers field contained in this message fragment
    *
    * @return The const reference to the accessor to the EHS_BDS_Registers field.
    */
  const uci::type::IFF_ModeSelectionType::EHS_BDS_Registers& getEHS_BDS_Registers() const override;

  /** Returns the accessor to the EHS_BDS_Registers field contained in this message fragment
    *
    * @return The reference to the accessor to the EHS_BDS_Registers field.
    */
  uci::type::IFF_ModeSelectionType::EHS_BDS_Registers& getEHS_BDS_Registers() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeSelectionType& setEHS_BDS_Registers(const uci::type::IFF_ModeSelectionType::EHS_BDS_Registers& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ModeS_OptionsType& getModeS_Options_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ModeS_OptionsType& getModeS_Options() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ModeS_OptionsType& getModeS_Options() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeSelectionType& setModeS_Options(const uci::type::ModeS_OptionsType& accessor) override;

  /** Returns whether this optional field ModeS_Optionsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasModeS_Options() const noexcept override;

  /** Enables the optional field such that getModeS_Options will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ModeS_OptionsType& enableModeS_Options(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::IFF_ModeSelectionType& clearModeS_Options() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<IFF_ModeSelectionType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::IFF_ModeSelectionType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::IFF_ModeSelectionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<IFF_ModesEnum> iFF_Mode_Accessor;
  boost::optional<IFF_Mode5_FormatTypeValue> mode5Format_Accessor;
  asb_xs::Boolean suppressionPulse_Accessor{false};
  std::unique_ptr<ModeS_AircraftAddress> modeS_AircraftAddress_Accessor;
  std::unique_ptr<EHS_BDS_Registers> eHS_BDS_Registers_Accessor;
  std::unique_ptr<ModeS_OptionsType> modeS_Options_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_IFF_MODESELECTIONTYPE_H
