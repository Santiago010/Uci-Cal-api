/** @file WeatherWarningDataType.h
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

#ifndef UCI_TYPE_WEATHERWARNINGDATATYPE_H
#define UCI_TYPE_WEATHERWARNINGDATATYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "DateTimeRangeType.h"
#include "VisibleString1024Type.h"
#include "WeatherWarningEnum.h"
#include "ZoneType.h"

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
class WeatherWarningDataType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new WeatherWarningDataType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed WeatherWarningDataType.
    */
  static UCI_EXPORT WeatherWarningDataType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new WeatherWarningDataType initializing the data accessed by the new WeatherWarningDataType
    * using the data accessed by the specified WeatherWarningDataType (cloning).
    *
    * @param accessor The WeatherWarningDataType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created WeatherWarningDataType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed WeatherWarningDataType.
    */
  static UCI_EXPORT WeatherWarningDataType& create(const WeatherWarningDataType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified WeatherWarningDataType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The WeatherWarningDataType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(WeatherWarningDataType& accessor);

  /** Returns this accessor's type constant, i.e. weatherWarningDataType.
    *
    * @return This accessor's type constant, i.e. weatherWarningDataType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::weatherWarningDataType;
  }

  /** Returns the version that was initialized from the uci:version attribute of WeatherWarningDataType.
    *
    * @return The version that was initialized from the uci:version attribute of WeatherWarningDataType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const WeatherWarningDataType& accessor) = 0;

  /** Indicates the time interval over which the warning applies. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::DateTimeRangeType, uci::type::accessorType::dateTimeRangeType> Schedule;

  /** Returns a const reference to the value of the enumeration identified by WeatherWarningType.
    *
    * @return A const reference to the value of the enumeration identified by WeatherWarningType.
    */
  virtual const uci::type::WeatherWarningEnum& getWeatherWarningType() const = 0;

  /** Returns a reference to the value of the enumeration identified by WeatherWarningType.
    *
    * @return A reference to the value of the enumeration identified by WeatherWarningType.
    */
  virtual uci::type::WeatherWarningEnum& getWeatherWarningType() = 0;

  /** Sets the value of the enumeration identified by WeatherWarningType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherWarningDataType& setWeatherWarningType(const uci::type::WeatherWarningEnum& value) = 0;

  /** Sets the value of the enumeration identified by WeatherWarningType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherWarningDataType& setWeatherWarningType(uci::type::WeatherWarningEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by WeatherArea.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by WeatherArea.
    */
  virtual const uci::type::ZoneType& getWeatherArea() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by WeatherArea.
    *
    * @return A reference to the accessor that provides access to the complex content identified by WeatherArea.
    */
  virtual uci::type::ZoneType& getWeatherArea() = 0;

  /** Sets the complex content identified by WeatherArea to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by WeatherArea.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherWarningDataType& setWeatherArea(const uci::type::ZoneType& value) = 0;

  /** Enables the Element identified by WeatherArea.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available for the element. The use of
    *      this parameter provides support for inheritable types. This parameter defaults to uci::base::accessorType::null
    *      that is used to indicate that the access methods associated with the element shall provide access to data of the
    *      type that was specified for that element in the OMS schema, i.e. the element's base type. If specified, this
    *      field must either be a type ID associated with the element's base type or a type ID associated with a type that
    *      is derived from the element's base type.
    * @return A reference to the accessor that provides access to the complex content identified by WeatherArea.
    */
  virtual uci::type::ZoneType& enableWeatherArea(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the bounded list identified by Schedule.
    *
    * @return A const reference to the bounded list identified by Schedule.
    */
  virtual const uci::type::WeatherWarningDataType::Schedule& getSchedule() const = 0;

  /** Returns a reference to the bounded list identified by Schedule.
    *
    * @return A reference to the bounded list identified by Schedule.
    */
  virtual uci::type::WeatherWarningDataType::Schedule& getSchedule() = 0;

  /** Sets the bounded list identified by Schedule.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherWarningDataType& setSchedule(const uci::type::WeatherWarningDataType::Schedule& value) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by Remarks.
    *
    * @return A const reference to the accessor that provides access to the string identified by Remarks.
    */
  virtual const uci::type::VisibleString1024Type& getRemarks() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by Remarks.
    *
    * @return A reference to the accessor that provides access to the string identified by Remarks.
    */
  virtual uci::type::VisibleString1024Type& getRemarks() = 0;

  /** Sets the string identified by Remarks to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by Remarks.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherWarningDataType& setRemarks(const uci::type::VisibleString1024Type& value) = 0;

  /** Sets the string identified by Remarks to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherWarningDataType& setRemarks(const std::string& value) = 0;

  /** Sets the string identified by Remarks to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherWarningDataType& setRemarks(const char* value) = 0;

  /** Returns whether the Element identified by Remarks exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Remarks is enabled or not.
    */
  virtual bool hasRemarks() const = 0;

  /** Enables the Element identified by Remarks.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the string identified by Remarks.
    */
  virtual uci::type::VisibleString1024Type& enableRemarks(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Remarks.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherWarningDataType& clearRemarks() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  WeatherWarningDataType() {
  }

  /** The destructor [only available to derived classes]. */
  ~WeatherWarningDataType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The WeatherWarningDataType to copy from.
    */
  WeatherWarningDataType(const WeatherWarningDataType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this WeatherWarningDataType to the contents of the
    * WeatherWarningDataType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The WeatherWarningDataType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this WeatherWarningDataType.
    * @return A reference to this WeatherWarningDataType.
    */
  WeatherWarningDataType& operator=(const WeatherWarningDataType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_WEATHERWARNINGDATATYPE_H

