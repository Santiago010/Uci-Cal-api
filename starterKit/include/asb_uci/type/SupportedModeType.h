/** @file SupportedModeType.h
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

#ifndef ASB_UCI_TYPE_SUPPORTEDMODETYPE_H
#define ASB_UCI_TYPE_SUPPORTEDMODETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/AnglePositiveType.h"
#include "../../../include/asb_uci/type/CommCapabilityEnum.h"
#include "../../../include/asb_uci/type/DataRateType.h"
#include "../../../include/asb_uci/type/DecibelType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SupportedModeType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CommAntennaModeType;
class FrequencyRangeType;

/** See annotations in child elements and messages/elements that use this type for details. */
class SupportedModeType : public virtual uci::type::SupportedModeType {
public:
  /** The constructor */
  SupportedModeType();

  /** The copy constructor
    *
    * @param rhs The SupportedModeType to copy from
    */
  SupportedModeType(const SupportedModeType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SupportedModeType to move from
    */
  SupportedModeType(SupportedModeType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SupportedModeType to copy from
    * @return The SupportedModeType that was assigned
    */
  SupportedModeType& operator=(const SupportedModeType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SupportedModeType to move from
    * @return The SupportedModeType that was assigned
    */
  SupportedModeType& operator=(SupportedModeType&& rhs) = delete;

  /** The destructor */
  virtual ~SupportedModeType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SupportedModeType whose contents are to be used to set this
    *      uci::type::SupportedModeType's contents.
    */
  void copy(const uci::type::SupportedModeType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SupportedModeType whose contents are to be used to set this
    *      uci::type::SupportedModeType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SupportedModeType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the AntennaModeIdentifier field contained in this message fragment
    *
    * @return The const reference to the accessor to the AntennaModeIdentifier field.
    */
  const uci::type::CommAntennaModeType& getAntennaModeIdentifier() const override;

  /** Returns the accessor to the AntennaModeIdentifier field contained in this message fragment
    *
    * @return The reference to the accessor to the AntennaModeIdentifier field.
    */
  uci::type::CommAntennaModeType& getAntennaModeIdentifier() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SupportedModeType& setAntennaModeIdentifier(const uci::type::CommAntennaModeType& accessor) override;

  /** Returns the contents of the message's Waveform field
    *
    * @return The contents of the Waveform field
    */
  const uci::type::CommCapabilityEnum& getWaveform() const override;

  /** Returns the contents of the message's Waveform field
    *
    * @return The contents of the Waveform field
    */
  uci::type::CommCapabilityEnum& getWaveform() override;

  /** Sets the contents of the message's Waveform field
    *
    * @param accessor The accessor to use to set the Waveform field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SupportedModeType& setWaveform(const uci::type::CommCapabilityEnum& accessor) override;

  /** Sets the contents of the message's Waveform field
    *
    * @param value The new value to set the Waveform field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SupportedModeType& setWaveform(uci::type::CommCapabilityEnum::EnumerationItem value) override;

  /** Returns the contents of the message's UplinkDataRate field
    *
    * @return The contents of the UplinkDataRate field
    */
  uci::type::DataRateTypeValue getUplinkDataRate() const override;

  /** Sets the contents of the message's UplinkDataRate field
    *
    * @param value The new value to set the UplinkDataRate field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SupportedModeType& setUplinkDataRate(uci::type::DataRateTypeValue value) override;

  /** Returns the accessor to the UplinkFrequencyRange field contained in this message fragment
    *
    * @return The const reference to the accessor to the UplinkFrequencyRange field.
    */
  const uci::type::FrequencyRangeType& getUplinkFrequencyRange() const override;

  /** Returns the accessor to the UplinkFrequencyRange field contained in this message fragment
    *
    * @return The reference to the accessor to the UplinkFrequencyRange field.
    */
  uci::type::FrequencyRangeType& getUplinkFrequencyRange() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SupportedModeType& setUplinkFrequencyRange(const uci::type::FrequencyRangeType& accessor) override;

  /** Returns the contents of the message's DownlinkDataRate field
    *
    * @return The contents of the DownlinkDataRate field
    */
  uci::type::DataRateTypeValue getDownlinkDataRate() const override;

  /** Sets the contents of the message's DownlinkDataRate field
    *
    * @param value The new value to set the DownlinkDataRate field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SupportedModeType& setDownlinkDataRate(uci::type::DataRateTypeValue value) override;

  /** Returns the accessor to the DownlinkFrequencyRange field contained in this message fragment
    *
    * @return The const reference to the accessor to the DownlinkFrequencyRange field.
    */
  const uci::type::FrequencyRangeType& getDownlinkFrequencyRange() const override;

  /** Returns the accessor to the DownlinkFrequencyRange field contained in this message fragment
    *
    * @return The reference to the accessor to the DownlinkFrequencyRange field.
    */
  uci::type::FrequencyRangeType& getDownlinkFrequencyRange() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SupportedModeType& setDownlinkFrequencyRange(const uci::type::FrequencyRangeType& accessor) override;

  /** Returns the contents of the message's Gain field
    *
    * @return The contents of the Gain field
    */
  uci::type::DecibelTypeValue getGain() const override;

  /** Sets the contents of the message's Gain field
    *
    * @param value The new value to set the Gain field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SupportedModeType& setGain(uci::type::DecibelTypeValue value) override;

  /** Returns the contents of the message's Beamwidth field
    *
    * @return The contents of the Beamwidth field
    */
  uci::type::AnglePositiveTypeValue getBeamwidth() const override;

  /** Sets the contents of the message's Beamwidth field
    *
    * @param value The new value to set the Beamwidth field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SupportedModeType& setBeamwidth(uci::type::AnglePositiveTypeValue value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SupportedModeType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SupportedModeType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SupportedModeType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CommAntennaModeType> antennaModeIdentifier_Accessor;
  std::unique_ptr<CommCapabilityEnum> waveform_Accessor;
  DataRateTypeValue uplinkDataRate_Accessor{0};
  std::unique_ptr<FrequencyRangeType> uplinkFrequencyRange_Accessor;
  DataRateTypeValue downlinkDataRate_Accessor{0};
  std::unique_ptr<FrequencyRangeType> downlinkFrequencyRange_Accessor;
  DecibelTypeValue gain_Accessor{0.0};
  AnglePositiveTypeValue beamwidth_Accessor{0.0};

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SUPPORTEDMODETYPE_H
