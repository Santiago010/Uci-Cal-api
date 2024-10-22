/** @file RF_TransmissionType.h
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

#ifndef UCI_TYPE_RF_TRANSMISSIONTYPE_H
#define UCI_TYPE_RF_TRANSMISSIONTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "AntennaAndResourceInstanceType.h"
#include "BlankingLimitType.h"
#include "DecibelType.h"
#include "FrequencyRangeType.h"
#include "PercentType.h"
#include "PolarizationControlType.h"

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
class RF_TransmissionType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new RF_TransmissionType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RF_TransmissionType.
    */
  static UCI_EXPORT RF_TransmissionType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new RF_TransmissionType initializing the data accessed by the new RF_TransmissionType using
    * the data accessed by the specified RF_TransmissionType (cloning).
    *
    * @param accessor The RF_TransmissionType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created RF_TransmissionType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RF_TransmissionType.
    */
  static UCI_EXPORT RF_TransmissionType& create(const RF_TransmissionType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified RF_TransmissionType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The RF_TransmissionType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(RF_TransmissionType& accessor);

  /** Returns this accessor's type constant, i.e. rF_TransmissionType.
    *
    * @return This accessor's type constant, i.e. rF_TransmissionType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::rF_TransmissionType;
  }

  /** Returns the version that was initialized from the uci:version attribute of RF_TransmissionType.
    *
    * @return The version that was initialized from the uci:version attribute of RF_TransmissionType.
    */
  static std::string getUCITypeVersion() {
    return "002.001.001.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const RF_TransmissionType& accessor) = 0;

  /** This grouping of RF_ThreadInstanceIndexs must be of equivalent ResourceAccessPriority. This set of RF_ThreadInstances
    * cannot represent multiple resource allocations. ResourceAllocator generates the index in a an incrementing fashion 1,
    * 2, 3... at resource allocation time, assuring that identifiers are unique across resource allocations.
    * RF_ThreadInstanceIndices may be re-used after an allocation has been de-allocated. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::base::UnsignedIntAccessor, uci::base::accessorType::unsignedIntAccessor> RF_ThreadInstanceIndex;

  /** A set of antenna resource that will be used for RF transmit. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::AntennaAndResourceInstanceType, uci::type::accessorType::antennaAndResourceInstanceType> AntennaResource;

  /** Indicates finer granularity of frequency chunks that this CIR Index is associated with. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::FrequencyRangeType, uci::type::accessorType::frequencyRangeType> Frequency;

  /** Polarization of the transmission. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::PolarizationControlType, uci::type::accessorType::polarizationControlType> Polarization;

  /** Transmit function report of acceptable amount of blanking. Subsystems that blank are expected not to exceed the
    * TxPercentBlankLimit allocated to their subsystem. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::BlankingLimitType, uci::type::accessorType::blankingLimitType> BlankingLimit;

  /** Returns a const reference to the bounded list identified by RF_ThreadInstanceIndex.
    *
    * @return A const reference to the bounded list identified by RF_ThreadInstanceIndex.
    */
  virtual const uci::type::RF_TransmissionType::RF_ThreadInstanceIndex& getRF_ThreadInstanceIndex() const = 0;

  /** Returns a reference to the bounded list identified by RF_ThreadInstanceIndex.
    *
    * @return A reference to the bounded list identified by RF_ThreadInstanceIndex.
    */
  virtual uci::type::RF_TransmissionType::RF_ThreadInstanceIndex& getRF_ThreadInstanceIndex() = 0;

  /** Sets the bounded list identified by RF_ThreadInstanceIndex.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_TransmissionType& setRF_ThreadInstanceIndex(const uci::type::RF_TransmissionType::RF_ThreadInstanceIndex& value) = 0;

  /** Returns a const reference to the bounded list identified by AntennaResource.
    *
    * @return A const reference to the bounded list identified by AntennaResource.
    */
  virtual const uci::type::RF_TransmissionType::AntennaResource& getAntennaResource() const = 0;

  /** Returns a reference to the bounded list identified by AntennaResource.
    *
    * @return A reference to the bounded list identified by AntennaResource.
    */
  virtual uci::type::RF_TransmissionType::AntennaResource& getAntennaResource() = 0;

  /** Sets the bounded list identified by AntennaResource.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_TransmissionType& setAntennaResource(const uci::type::RF_TransmissionType::AntennaResource& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by ResourceAccessPriority.
    *
    * @return The value of the simple primitive data type identified by ResourceAccessPriority.
    */
  virtual xs::UnsignedInt getResourceAccessPriority() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ResourceAccessPriority.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_TransmissionType& setResourceAccessPriority(xs::UnsignedInt value) = 0;

  /** Returns a const reference to the bounded list identified by Frequency.
    *
    * @return A const reference to the bounded list identified by Frequency.
    */
  virtual const uci::type::RF_TransmissionType::Frequency& getFrequency() const = 0;

  /** Returns a reference to the bounded list identified by Frequency.
    *
    * @return A reference to the bounded list identified by Frequency.
    */
  virtual uci::type::RF_TransmissionType::Frequency& getFrequency() = 0;

  /** Sets the bounded list identified by Frequency.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_TransmissionType& setFrequency(const uci::type::RF_TransmissionType::Frequency& value) = 0;

  /** Returns a const reference to the bounded list identified by Polarization.
    *
    * @return A const reference to the bounded list identified by Polarization.
    */
  virtual const uci::type::RF_TransmissionType::Polarization& getPolarization() const = 0;

  /** Returns a reference to the bounded list identified by Polarization.
    *
    * @return A reference to the bounded list identified by Polarization.
    */
  virtual uci::type::RF_TransmissionType::Polarization& getPolarization() = 0;

  /** Sets the bounded list identified by Polarization.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_TransmissionType& setPolarization(const uci::type::RF_TransmissionType::Polarization& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by MaximumTransmitERP.
    *
    * @return The value of the simple primitive data type identified by MaximumTransmitERP.
    */
  virtual uci::type::DecibelTypeValue getMaximumTransmitERP() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by MaximumTransmitERP.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_TransmissionType& setMaximumTransmitERP(uci::type::DecibelTypeValue value) = 0;

  /** Returns a const reference to the bounded list identified by BlankingLimit.
    *
    * @return A const reference to the bounded list identified by BlankingLimit.
    */
  virtual const uci::type::RF_TransmissionType::BlankingLimit& getBlankingLimit() const = 0;

  /** Returns a reference to the bounded list identified by BlankingLimit.
    *
    * @return A reference to the bounded list identified by BlankingLimit.
    */
  virtual uci::type::RF_TransmissionType::BlankingLimit& getBlankingLimit() = 0;

  /** Sets the bounded list identified by BlankingLimit.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_TransmissionType& setBlankingLimit(const uci::type::RF_TransmissionType::BlankingLimit& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by MinimumReceiveSensitivity.
    *
    * @return The value of the simple primitive data type identified by MinimumReceiveSensitivity.
    */
  virtual uci::type::DecibelTypeValue getMinimumReceiveSensitivity() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by MinimumReceiveSensitivity.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_TransmissionType& setMinimumReceiveSensitivity(uci::type::DecibelTypeValue value) = 0;

  /** Returns whether the Element identified by MinimumReceiveSensitivity exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by MinimumReceiveSensitivity is enabled or not.
    */
  virtual bool hasMinimumReceiveSensitivity() const = 0;

  /** Clears (disabled) the Element identified by MinimumReceiveSensitivity.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_TransmissionType& clearMinimumReceiveSensitivity() = 0;

  /** Returns the value of the SimplePrimitive data type identified by PercentInterruptable.
    *
    * @return The value of the simple primitive data type identified by PercentInterruptable.
    */
  virtual uci::type::PercentTypeValue getPercentInterruptable() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PercentInterruptable.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_TransmissionType& setPercentInterruptable(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by PercentInterruptable exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PercentInterruptable is enabled or not.
    */
  virtual bool hasPercentInterruptable() const = 0;

  /** Clears (disabled) the Element identified by PercentInterruptable.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RF_TransmissionType& clearPercentInterruptable() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  RF_TransmissionType() {
  }

  /** The destructor [only available to derived classes]. */
  ~RF_TransmissionType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The RF_TransmissionType to copy from.
    */
  RF_TransmissionType(const RF_TransmissionType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this RF_TransmissionType to the contents of the RF_TransmissionType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The RF_TransmissionType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this RF_TransmissionType.
    * @return A reference to this RF_TransmissionType.
    */
  RF_TransmissionType& operator=(const RF_TransmissionType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_RF_TRANSMISSIONTYPE_H

