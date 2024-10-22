/** @file SpectralBandType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:08 PM
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

#ifndef UCI_TYPE_SPECTRALBANDTYPE_H
#define UCI_TYPE_SPECTRALBANDTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ActivityID_Type.h"
#include "FrequencyRangeType.h"
#include "MilliwattPowerRatioType.h"
#include "../../xs/type/binaryXmlSchemaPrimitives.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

class AbstractServiceBusConnection;

} // namespace base
} // namespace uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** See annotations in child elements and messages/elements that use this type for details. */
class SpectralBandType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new SpectralBandType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SpectralBandType.
    */
  static UCI_EXPORT SpectralBandType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SpectralBandType initializing the data accessed by the new SpectralBandType using the
    * data accessed by the specified SpectralBandType (cloning).
    *
    * @param accessor The SpectralBandType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created SpectralBandType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SpectralBandType.
    */
  static UCI_EXPORT SpectralBandType& create(const SpectralBandType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SpectralBandType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The SpectralBandType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SpectralBandType& accessor);

  /** Returns this accessor's type constant, i.e. spectralBandType.
    *
    * @return This accessor's type constant, i.e. spectralBandType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::spectralBandType;
  }

  /** Returns the version that was initialized from the uci:version attribute of SpectralBandType.
    *
    * @return The version that was initialized from the uci:version attribute of SpectralBandType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SpectralBandType& accessor) = 0;

  /** Indicates the energy spectral density within the sibling Frequency band. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::MilliwattPowerRatioType, uci::type::accessorType::milliwattPowerRatioType> SpectralDensity;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ActivityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ActivityID.
    */
  virtual const uci::type::ActivityID_Type& getActivityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ActivityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ActivityID.
    */
  virtual uci::type::ActivityID_Type& getActivityID() = 0;

  /** Sets the complex content identified by ActivityID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ActivityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SpectralBandType& setActivityID(const uci::type::ActivityID_Type& value) = 0;

  /** Returns whether the Element identified by ActivityID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ActivityID is enabled or not.
    */
  virtual bool hasActivityID() const = 0;

  /** Enables the Element identified by ActivityID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ActivityID.
    */
  virtual uci::type::ActivityID_Type& enableActivityID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ActivityID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SpectralBandType& clearActivityID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Frequency.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Frequency.
    */
  virtual const uci::type::FrequencyRangeType& getFrequency() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Frequency.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Frequency.
    */
  virtual uci::type::FrequencyRangeType& getFrequency() = 0;

  /** Sets the complex content identified by Frequency to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Frequency.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SpectralBandType& setFrequency(const uci::type::FrequencyRangeType& value) = 0;

  /** Returns a const reference to the bounded list identified by SpectralDensity.
    *
    * @return A const reference to the bounded list identified by SpectralDensity.
    */
  virtual const uci::type::SpectralBandType::SpectralDensity& getSpectralDensity() const = 0;

  /** Returns a reference to the bounded list identified by SpectralDensity.
    *
    * @return A reference to the bounded list identified by SpectralDensity.
    */
  virtual uci::type::SpectralBandType::SpectralDensity& getSpectralDensity() = 0;

  /** Sets the bounded list identified by SpectralDensity.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SpectralBandType& setSpectralDensity(const uci::type::SpectralBandType::SpectralDensity& value) = 0;

  /** Returns the accessor to the SpectralImage field contained in this message fragment.
    *
    * @return The reference to the accessor to the SpectralImage field.
    */
  virtual const xs::HexBinary& getSpectralImage() const = 0;

  /** Returns the accessor to the SpectralImage field contained in this message fragment.
    *
    * @return The reference to the accessor to the SpectralImage field.
    */
  virtual xs::HexBinary& getSpectralImage() = 0;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents.
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SpectralBandType& setSpectralImage(const xs::HexBinary& value) = 0;

  /** Returns whether this optionalfield SpectralImageis available.
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  virtual bool hasSpectralImage() const = 0;

  /** Enables the optional field such that getSpectralImage will return the optional field and not throw an exception when
    * invoked.
    *
    * @return The reference to the accessor to the SpectralImage field.
    */
  virtual xs::HexBinary& enableSpectralImage() = 0;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SpectralBandType& clearSpectralImage() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SpectralBandType() {
  }

  /** The destructor [only available to derived classes]. */
  ~SpectralBandType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SpectralBandType to copy from.
    */
  SpectralBandType(const SpectralBandType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SpectralBandType to the contents of the SpectralBandType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The SpectralBandType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this SpectralBandType.
    * @return A reference to this SpectralBandType.
    */
  SpectralBandType& operator=(const SpectralBandType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SPECTRALBANDTYPE_H

