/** @file COMINT_CapabilityType.h
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

#ifndef ASB_UCI_TYPE_COMINT_CAPABILITYTYPE_H
#define ASB_UCI_TYPE_COMINT_CAPABILITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/COMINT_SubCapabilityEnum.h"
#include "../../../include/asb_uci/type/CapabilityInitiationEnum.h"
#include "../../../include/asb_uci/type/CommandableCapabilityDeclarationType.h"
#include "../../../include/asb_uci/type/ESM_MessageOutputsEnum.h"
#include "../../../include/asb_uci/type/SignalGeolocationMethodEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COMINT_CapabilityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class COMINT_CapabilityOptionsType;
class ESM_DwellCoverageType;
class ForeignKeyType;

/** See annotations in child elements and messages/elements that use this type for details. */
class COMINT_CapabilityType : public virtual uci::type::COMINT_CapabilityType, public virtual CommandableCapabilityDeclarationType {
public:
  /** Indicates a SubCapability of the Capability, the second tier in the taxonomy. The second tier is an indication of the
    * specific collection technique. See enumeration annotations for further details. List size for this element is based
    * on "Select All That Apply" condition. [Occurrences: Minimum: 1; Maximum: 16]
    */
  using SubCapabilityType = asb_uci::base::BoundedList<uci::type::COMINT_SubCapabilityEnum, uci::type::accessorType::cOMINT_SubCapabilityEnum, asb_uci::type::COMINT_SubCapabilityEnum>;

  /** Indicates a geolocation type/technique supported by the Capability. This element is only expected when the sibling
    * SubCapabilityType indicates geolocation. List size for this element is based on "Select All That Apply" condition.
    * [Occurrences: Minimum: 0; Maximum: 8]
    */
  using GeolocationType = asb_uci::base::BoundedList<uci::type::SignalGeolocationMethodEnum, uci::type::accessorType::signalGeolocationMethodEnum, asb_uci::type::SignalGeolocationMethodEnum>;

  /** Indicates a summary of the expected coverage of a dwell or dwells associated with the Capability. This element does
    * not indicate an actual instantiated, scheduled dwell of the Capability. This element is an abstraction of the MDF
    * representation and/or design implementation of a Dwell. Actual, instantiated, scheduled Dwells are reported via the
    * Activity message. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using DwellCoverage = asb_uci::base::BoundedList<uci::type::ESM_DwellCoverageType, uci::type::accessorType::eSM_DwellCoverageType, asb_uci::type::ESM_DwellCoverageType>;

  /** Indicates a message that is an output of the Capability. See enumerated type annotations for details. List size for
    * this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 6]
    */
  using MessageOutput = asb_uci::base::BoundedList<uci::type::ESM_MessageOutputsEnum, uci::type::accessorType::eSM_MessageOutputsEnum, asb_uci::type::ESM_MessageOutputsEnum>;

  /** The constructor */
  COMINT_CapabilityType();

  /** The copy constructor
    *
    * @param rhs The COMINT_CapabilityType to copy from
    */
  COMINT_CapabilityType(const COMINT_CapabilityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The COMINT_CapabilityType to move from
    */
  COMINT_CapabilityType(COMINT_CapabilityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The COMINT_CapabilityType to copy from
    * @return The COMINT_CapabilityType that was assigned
    */
  COMINT_CapabilityType& operator=(const COMINT_CapabilityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The COMINT_CapabilityType to move from
    * @return The COMINT_CapabilityType that was assigned
    */
  COMINT_CapabilityType& operator=(COMINT_CapabilityType&& rhs) = delete;

  /** The destructor */
  ~COMINT_CapabilityType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::COMINT_CapabilityType whose contents are to be used to set this
    *      uci::type::COMINT_CapabilityType's contents.
    */
  void copy(const uci::type::COMINT_CapabilityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::COMINT_CapabilityType whose contents are to be used to set this
    *      uci::type::COMINT_CapabilityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::COMINT_CapabilityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's CapabilityType field
    *
    * @return The contents of the CapabilityType field
    */
  const uci::type::CapabilityInitiationEnum& getCapabilityType() const override;

  /** Returns the contents of the message's CapabilityType field
    *
    * @return The contents of the CapabilityType field
    */
  uci::type::CapabilityInitiationEnum& getCapabilityType() override;

  /** Sets the contents of the message's CapabilityType field
    *
    * @param accessor The accessor to use to set the CapabilityType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityType& setCapabilityType(const uci::type::CapabilityInitiationEnum& accessor) override;

  /** Sets the contents of the message's CapabilityType field
    *
    * @param value The new value to set the CapabilityType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityType& setCapabilityType(uci::type::CapabilityInitiationEnum::EnumerationItem value) override;

  /** Returns the accessor to the SubCapabilityType field contained in this message fragment
    *
    * @return The const reference to the accessor to the SubCapabilityType field.
    */
  const uci::type::COMINT_CapabilityType::SubCapabilityType& getSubCapabilityType() const override;

  /** Returns the accessor to the SubCapabilityType field contained in this message fragment
    *
    * @return The reference to the accessor to the SubCapabilityType field.
    */
  uci::type::COMINT_CapabilityType::SubCapabilityType& getSubCapabilityType() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityType& setSubCapabilityType(const uci::type::COMINT_CapabilityType::SubCapabilityType& accessor) override;

  /** Returns the accessor to the GeolocationType field contained in this message fragment
    *
    * @return The const reference to the accessor to the GeolocationType field.
    */
  const uci::type::COMINT_CapabilityType::GeolocationType& getGeolocationType() const override;

  /** Returns the accessor to the GeolocationType field contained in this message fragment
    *
    * @return The reference to the accessor to the GeolocationType field.
    */
  uci::type::COMINT_CapabilityType::GeolocationType& getGeolocationType() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityType& setGeolocationType(const uci::type::COMINT_CapabilityType::GeolocationType& accessor) override;

  /** Returns the accessor to the CapabilityOptions field contained in this message fragment
    *
    * @return The const reference to the accessor to the CapabilityOptions field.
    */
  const uci::type::COMINT_CapabilityOptionsType& getCapabilityOptions() const override;

  /** Returns the accessor to the CapabilityOptions field contained in this message fragment
    *
    * @return The reference to the accessor to the CapabilityOptions field.
    */
  uci::type::COMINT_CapabilityOptionsType& getCapabilityOptions() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityType& setCapabilityOptions(const uci::type::COMINT_CapabilityOptionsType& accessor) override;

  /** Returns the accessor to the DwellCoverage field contained in this message fragment
    *
    * @return The const reference to the accessor to the DwellCoverage field.
    */
  const uci::type::COMINT_CapabilityType::DwellCoverage& getDwellCoverage() const override;

  /** Returns the accessor to the DwellCoverage field contained in this message fragment
    *
    * @return The reference to the accessor to the DwellCoverage field.
    */
  uci::type::COMINT_CapabilityType::DwellCoverage& getDwellCoverage() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityType& setDwellCoverage(const uci::type::COMINT_CapabilityType::DwellCoverage& accessor) override;

  /** Returns the accessor to the MessageOutput field contained in this message fragment
    *
    * @return The const reference to the accessor to the MessageOutput field.
    */
  const uci::type::COMINT_CapabilityType::MessageOutput& getMessageOutput() const override;

  /** Returns the accessor to the MessageOutput field contained in this message fragment
    *
    * @return The reference to the accessor to the MessageOutput field.
    */
  uci::type::COMINT_CapabilityType::MessageOutput& getMessageOutput() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityType& setMessageOutput(const uci::type::COMINT_CapabilityType::MessageOutput& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& getApplicationKey_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ForeignKeyType& getApplicationKey() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& getApplicationKey() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityType& setApplicationKey(const uci::type::ForeignKeyType& accessor) override;

  /** Returns whether this optional field ApplicationKeyis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasApplicationKey() const noexcept override;

  /** Enables the optional field such that getApplicationKey will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& enableApplicationKey(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityType& clearApplicationKey() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<COMINT_CapabilityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::COMINT_CapabilityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::COMINT_CapabilityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CapabilityInitiationEnum> capabilityType_Accessor;
  std::unique_ptr<SubCapabilityType> subCapabilityType_Accessor;
  std::unique_ptr<GeolocationType> geolocationType_Accessor;
  std::unique_ptr<COMINT_CapabilityOptionsType> capabilityOptions_Accessor;
  std::unique_ptr<DwellCoverage> dwellCoverage_Accessor;
  std::unique_ptr<MessageOutput> messageOutput_Accessor;
  std::unique_ptr<ForeignKeyType> applicationKey_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COMINT_CAPABILITYTYPE_H
