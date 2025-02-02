/** @file GeomagneticStormKpType.h
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

#ifndef UCI_TYPE_GEOMAGNETICSTORMKPTYPE_H
#define UCI_TYPE_GEOMAGNETICSTORMKPTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "GeomagneticKpRecordType.h"
#include "GeomagneticRecordKpEnum.h"

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

/** Indicates geomagnetic storm Kp index space weather data type. */
class GeomagneticStormKpType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new GeomagneticStormKpType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed GeomagneticStormKpType.
    */
  static UCI_EXPORT GeomagneticStormKpType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new GeomagneticStormKpType initializing the data accessed by the new GeomagneticStormKpType
    * using the data accessed by the specified GeomagneticStormKpType (cloning).
    *
    * @param accessor The GeomagneticStormKpType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created GeomagneticStormKpType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed GeomagneticStormKpType.
    */
  static UCI_EXPORT GeomagneticStormKpType& create(const GeomagneticStormKpType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified GeomagneticStormKpType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The GeomagneticStormKpType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(GeomagneticStormKpType& accessor);

  /** Returns this accessor's type constant, i.e. geomagneticStormKpType.
    *
    * @return This accessor's type constant, i.e. geomagneticStormKpType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::geomagneticStormKpType;
  }

  /** Returns the version that was initialized from the uci:version attribute of GeomagneticStormKpType.
    *
    * @return The version that was initialized from the uci:version attribute of GeomagneticStormKpType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const GeomagneticStormKpType& accessor) = 0;

  /** This element indicates a record of geomagnetic storm space weather data. [Occurrences: Minimum: 1; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::GeomagneticKpRecordType, uci::type::accessorType::geomagneticKpRecordType> GeomagneticKpRecord;

  /** Returns a const reference to the value of the enumeration identified by GeomagneticRecordKpType.
    *
    * @return A const reference to the value of the enumeration identified by GeomagneticRecordKpType.
    */
  virtual const uci::type::GeomagneticRecordKpEnum& getGeomagneticRecordKpType() const = 0;

  /** Returns a reference to the value of the enumeration identified by GeomagneticRecordKpType.
    *
    * @return A reference to the value of the enumeration identified by GeomagneticRecordKpType.
    */
  virtual uci::type::GeomagneticRecordKpEnum& getGeomagneticRecordKpType() = 0;

  /** Sets the value of the enumeration identified by GeomagneticRecordKpType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GeomagneticStormKpType& setGeomagneticRecordKpType(const uci::type::GeomagneticRecordKpEnum& value) = 0;

  /** Sets the value of the enumeration identified by GeomagneticRecordKpType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GeomagneticStormKpType& setGeomagneticRecordKpType(uci::type::GeomagneticRecordKpEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the bounded list identified by GeomagneticKpRecord.
    *
    * @return A const reference to the bounded list identified by GeomagneticKpRecord.
    */
  virtual const uci::type::GeomagneticStormKpType::GeomagneticKpRecord& getGeomagneticKpRecord() const = 0;

  /** Returns a reference to the bounded list identified by GeomagneticKpRecord.
    *
    * @return A reference to the bounded list identified by GeomagneticKpRecord.
    */
  virtual uci::type::GeomagneticStormKpType::GeomagneticKpRecord& getGeomagneticKpRecord() = 0;

  /** Sets the bounded list identified by GeomagneticKpRecord.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::GeomagneticStormKpType& setGeomagneticKpRecord(const uci::type::GeomagneticStormKpType::GeomagneticKpRecord& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  GeomagneticStormKpType() {
  }

  /** The destructor [only available to derived classes]. */
  ~GeomagneticStormKpType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The GeomagneticStormKpType to copy from.
    */
  GeomagneticStormKpType(const GeomagneticStormKpType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this GeomagneticStormKpType to the contents of the
    * GeomagneticStormKpType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The GeomagneticStormKpType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this GeomagneticStormKpType.
    * @return A reference to this GeomagneticStormKpType.
    */
  GeomagneticStormKpType& operator=(const GeomagneticStormKpType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_GEOMAGNETICSTORMKPTYPE_H

