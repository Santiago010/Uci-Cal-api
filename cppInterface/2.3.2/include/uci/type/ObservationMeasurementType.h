/** @file ObservationMeasurementType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:07 PM
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

#ifndef UCI_TYPE_OBSERVATIONMEASUREMENTTYPE_H
#define UCI_TYPE_OBSERVATIONMEASUREMENTTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "DateTimeRangeType.h"
#include "MeasurementType.h"
#include "NameValuePairType.h"
#include "ObservationMeasurementID_Type.h"
#include "ObservationMeasurementSourceType.h"

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
class ObservationMeasurementType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ObservationMeasurementType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ObservationMeasurementType.
    */
  static UCI_EXPORT ObservationMeasurementType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ObservationMeasurementType initializing the data accessed by the new
    * ObservationMeasurementType using the data accessed by the specified ObservationMeasurementType (cloning).
    *
    * @param accessor The ObservationMeasurementType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created ObservationMeasurementType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ObservationMeasurementType.
    */
  static UCI_EXPORT ObservationMeasurementType& create(const ObservationMeasurementType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ObservationMeasurementType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The ObservationMeasurementType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ObservationMeasurementType& accessor);

  /** Returns this accessor's type constant, i.e. observationMeasurementType.
    *
    * @return This accessor's type constant, i.e. observationMeasurementType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::observationMeasurementType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ObservationMeasurementType.
    *
    * @return The version that was initialized from the uci:version attribute of ObservationMeasurementType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ObservationMeasurementType& accessor) = 0;

  /** Indicates the set of measurements which are included in the Measurement Observation. [Occurrences: Minimum: 1;
    * Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::MeasurementType, uci::type::accessorType::measurementType> Measurements;

  /** Indicates a custom characteristic of the observation that is not covered by other elements. These supplemental
    * characteristics are observation specific. Reference the data providers interface control document or service
    * specification to determine if this data will be provided. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::NameValuePairType, uci::type::accessorType::nameValuePairType> CustomCharacteristics;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ObservationMeasurementID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ObservationMeasurementID.
    */
  virtual const uci::type::ObservationMeasurementID_Type& getObservationMeasurementID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * ObservationMeasurementID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ObservationMeasurementID.
    */
  virtual uci::type::ObservationMeasurementID_Type& getObservationMeasurementID() = 0;

  /** Sets the complex content identified by ObservationMeasurementID to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ObservationMeasurementID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ObservationMeasurementType& setObservationMeasurementID(const uci::type::ObservationMeasurementID_Type& value) = 0;

  /** Returns whether the Element identified by ObservationMeasurementID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ObservationMeasurementID is enabled or not.
    */
  virtual bool hasObservationMeasurementID() const = 0;

  /** Enables the Element identified by ObservationMeasurementID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ObservationMeasurementID.
    */
  virtual uci::type::ObservationMeasurementID_Type& enableObservationMeasurementID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ObservationMeasurementID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ObservationMeasurementType& clearObservationMeasurementID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * MeasurementSource.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      MeasurementSource.
    */
  virtual const uci::type::ObservationMeasurementSourceType& getMeasurementSource() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by MeasurementSource.
    *
    * @return A reference to the accessor that provides access to the complex content identified by MeasurementSource.
    */
  virtual uci::type::ObservationMeasurementSourceType& getMeasurementSource() = 0;

  /** Sets the complex content identified by MeasurementSource to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MeasurementSource.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ObservationMeasurementType& setMeasurementSource(const uci::type::ObservationMeasurementSourceType& value) = 0;

  /** Returns whether the Element identified by MeasurementSource exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by MeasurementSource is enabled or not.
    */
  virtual bool hasMeasurementSource() const = 0;

  /** Enables the Element identified by MeasurementSource.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by MeasurementSource.
    */
  virtual uci::type::ObservationMeasurementSourceType& enableMeasurementSource(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by MeasurementSource.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ObservationMeasurementType& clearMeasurementSource() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by TimeSpan.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by TimeSpan.
    */
  virtual const uci::type::DateTimeRangeType& getTimeSpan() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by TimeSpan.
    *
    * @return A reference to the accessor that provides access to the complex content identified by TimeSpan.
    */
  virtual uci::type::DateTimeRangeType& getTimeSpan() = 0;

  /** Sets the complex content identified by TimeSpan to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by TimeSpan.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ObservationMeasurementType& setTimeSpan(const uci::type::DateTimeRangeType& value) = 0;

  /** Returns whether the Element identified by TimeSpan exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by TimeSpan is enabled or not.
    */
  virtual bool hasTimeSpan() const = 0;

  /** Enables the Element identified by TimeSpan.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by TimeSpan.
    */
  virtual uci::type::DateTimeRangeType& enableTimeSpan(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by TimeSpan.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ObservationMeasurementType& clearTimeSpan() = 0;

  /** Returns a const reference to the bounded list identified by Measurements.
    *
    * @return A const reference to the bounded list identified by Measurements.
    */
  virtual const uci::type::ObservationMeasurementType::Measurements& getMeasurements() const = 0;

  /** Returns a reference to the bounded list identified by Measurements.
    *
    * @return A reference to the bounded list identified by Measurements.
    */
  virtual uci::type::ObservationMeasurementType::Measurements& getMeasurements() = 0;

  /** Sets the bounded list identified by Measurements.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ObservationMeasurementType& setMeasurements(const uci::type::ObservationMeasurementType::Measurements& value) = 0;

  /** Returns a const reference to the bounded list identified by CustomCharacteristics.
    *
    * @return A const reference to the bounded list identified by CustomCharacteristics.
    */
  virtual const uci::type::ObservationMeasurementType::CustomCharacteristics& getCustomCharacteristics() const = 0;

  /** Returns a reference to the bounded list identified by CustomCharacteristics.
    *
    * @return A reference to the bounded list identified by CustomCharacteristics.
    */
  virtual uci::type::ObservationMeasurementType::CustomCharacteristics& getCustomCharacteristics() = 0;

  /** Sets the bounded list identified by CustomCharacteristics.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ObservationMeasurementType& setCustomCharacteristics(const uci::type::ObservationMeasurementType::CustomCharacteristics& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ObservationMeasurementType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ObservationMeasurementType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ObservationMeasurementType to copy from.
    */
  ObservationMeasurementType(const ObservationMeasurementType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ObservationMeasurementType to the contents of the
    * ObservationMeasurementType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ObservationMeasurementType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this ObservationMeasurementType.
    * @return A reference to this ObservationMeasurementType.
    */
  ObservationMeasurementType& operator=(const ObservationMeasurementType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_OBSERVATIONMEASUREMENTTYPE_H

