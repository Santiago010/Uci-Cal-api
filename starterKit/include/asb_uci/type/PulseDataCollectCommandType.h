/** @file PulseDataCollectCommandType.h
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

#ifndef ASB_UCI_TYPE_PULSEDATACOLLECTCOMMANDTYPE_H
#define ASB_UCI_TYPE_PULSEDATACOLLECTCOMMANDTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/DurationType.h"
#include "../../../include/asb_uci/type/ModulationEnum.h"
#include "../../../include/asb_uci/type/SignalTypeEnum.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/PulseDataCollectCommandType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CollectionFrequencyType;
class FrequencyRangeType;

/** See annotations in child elements and messages/elements that use this type for details. */
class PulseDataCollectCommandType : public virtual uci::type::PulseDataCollectCommandType {
public:
  /** The constructor */
  PulseDataCollectCommandType();

  /** The copy constructor
    *
    * @param rhs The PulseDataCollectCommandType to copy from
    */
  PulseDataCollectCommandType(const PulseDataCollectCommandType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The PulseDataCollectCommandType to move from
    */
  PulseDataCollectCommandType(PulseDataCollectCommandType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The PulseDataCollectCommandType to copy from
    * @return The PulseDataCollectCommandType that was assigned
    */
  PulseDataCollectCommandType& operator=(const PulseDataCollectCommandType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The PulseDataCollectCommandType to move from
    * @return The PulseDataCollectCommandType that was assigned
    */
  PulseDataCollectCommandType& operator=(PulseDataCollectCommandType&& rhs) = delete;

  /** The destructor */
  virtual ~PulseDataCollectCommandType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PulseDataCollectCommandType whose contents are to be used to set this
    *      uci::type::PulseDataCollectCommandType's contents.
    */
  void copy(const uci::type::PulseDataCollectCommandType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::PulseDataCollectCommandType whose contents are to be used to set this
    *      uci::type::PulseDataCollectCommandType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::PulseDataCollectCommandType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the CollectionFrequency field contained in this message fragment
    *
    * @return The const reference to the accessor to the CollectionFrequency field.
    */
  const uci::type::CollectionFrequencyType& getCollectionFrequency() const override;

  /** Returns the accessor to the CollectionFrequency field contained in this message fragment
    *
    * @return The reference to the accessor to the CollectionFrequency field.
    */
  uci::type::CollectionFrequencyType& getCollectionFrequency() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setCollectionFrequency(const uci::type::CollectionFrequencyType& accessor) override;

  /** Returns the contents of the message's StartTime field
    *
    * @return The contents of the StartTime field
    */
  uci::type::DateTimeTypeValue getStartTime() const override;

  /** Sets the contents of the message's StartTime field
    *
    * @param value The new value to set the StartTime field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setStartTime(uci::type::DateTimeTypeValue value) override;

  /** Returns the contents of the message's DwellDuration field
    *
    * @return The contents of the DwellDuration field
    */
  uci::type::DurationTypeValue getDwellDuration() const override;

  /** Sets the contents of the message's DwellDuration field
    *
    * @param value The new value to set the DwellDuration field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setDwellDuration(uci::type::DurationTypeValue value) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::UnsignedInt getDwells() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setDwells(xs::UnsignedInt value) override;

  /** Returns whether this optional field Dwellsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDwells() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& clearDwells() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DurationTypeValue getRepetitionInterval() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setRepetitionInterval(uci::type::DurationTypeValue value) override;

  /** Returns whether this optional field RepetitionIntervalis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasRepetitionInterval() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& clearRepetitionInterval() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DurationTypeValue getPulseWidth() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setPulseWidth(uci::type::DurationTypeValue value) override;

  /** Returns whether this optional field PulseWidthis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPulseWidth() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& clearPulseWidth() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DurationTypeValue getPRI() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setPRI(uci::type::DurationTypeValue value) override;

  /** Returns whether this optional field PRIis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPRI() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& clearPRI() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyRangeType& getSignalBandwidth_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::FrequencyRangeType& getSignalBandwidth() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyRangeType& getSignalBandwidth() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setSignalBandwidth(const uci::type::FrequencyRangeType& accessor) override;

  /** Returns whether this optional field SignalBandwidthis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSignalBandwidth() const noexcept override;

  /** Enables the optional field such that getSignalBandwidth will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::FrequencyRangeType& enableSignalBandwidth(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& clearSignalBandwidth() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ModulationEnum& getModulation_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ModulationEnum& getModulation() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ModulationEnum& getModulation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setModulation(const uci::type::ModulationEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setModulation(uci::type::ModulationEnum::EnumerationItem value) override;

  /** Returns whether this optional field Modulationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasModulation() const noexcept override;

  /** Enables the optional field such that getModulation will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ModulationEnum& enableModulation(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& clearModulation() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SignalTypeEnum& getDataCollectType_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SignalTypeEnum& getDataCollectType() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SignalTypeEnum& getDataCollectType() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setDataCollectType(const uci::type::SignalTypeEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setDataCollectType(uci::type::SignalTypeEnum::EnumerationItem value) override;

  /** Returns whether this optional field DataCollectTypeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDataCollectType() const noexcept override;

  /** Enables the optional field such that getDataCollectType will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SignalTypeEnum& enableDataCollectType(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& clearDataCollectType() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Float getSampleRate() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setSampleRate(xs::Float value) override;

  /** Returns whether this optional field SampleRateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSampleRate() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& clearSampleRate() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Int getFFT_PointsPerSample() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& setFFT_PointsPerSample(xs::Int value) override;

  /** Returns whether this optional field FFT_PointsPerSampleis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasFFT_PointsPerSample() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::PulseDataCollectCommandType& clearFFT_PointsPerSample() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<PulseDataCollectCommandType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::PulseDataCollectCommandType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::PulseDataCollectCommandType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CollectionFrequencyType> collectionFrequency_Accessor;
  DateTimeTypeValue startTime_Accessor{0};
  DurationTypeValue dwellDuration_Accessor{0};
  boost::optional<asb_xs::UnsignedInt> dwells_Accessor;
  boost::optional<DurationTypeValue> repetitionInterval_Accessor;
  boost::optional<DurationTypeValue> pulseWidth_Accessor;
  boost::optional<DurationTypeValue> pRI_Accessor;
  std::unique_ptr<FrequencyRangeType> signalBandwidth_Accessor;
  std::unique_ptr<ModulationEnum> modulation_Accessor;
  std::unique_ptr<SignalTypeEnum> dataCollectType_Accessor;
  boost::optional<asb_xs::Float> sampleRate_Accessor;
  boost::optional<asb_xs::Int> fFT_PointsPerSample_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_PULSEDATACOLLECTCOMMANDTYPE_H
