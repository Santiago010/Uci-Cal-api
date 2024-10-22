/** @file WeatherDataType.h
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

#ifndef UCI_TYPE_WEATHERDATATYPE_H
#define UCI_TYPE_WEATHERDATATYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "ProductMetadataID_Type.h"
#include "WeatherReportDataType.h"
#include "WeatherWarningDataType.h"

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
class WeatherDataType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new WeatherDataType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed WeatherDataType.
    */
  static UCI_EXPORT WeatherDataType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new WeatherDataType initializing the data accessed by the new WeatherDataType using the data
    * accessed by the specified WeatherDataType (cloning).
    *
    * @param accessor The WeatherDataType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created WeatherDataType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed WeatherDataType.
    */
  static UCI_EXPORT WeatherDataType& create(const WeatherDataType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified WeatherDataType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The WeatherDataType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(WeatherDataType& accessor);

  /** Returns this accessor's type constant, i.e. weatherDataType.
    *
    * @return This accessor's type constant, i.e. weatherDataType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::weatherDataType;
  }

  /** Returns the version that was initialized from the uci:version attribute of WeatherDataType.
    *
    * @return The version that was initialized from the uci:version attribute of WeatherDataType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const WeatherDataType& accessor) = 0;

  /** The following enumeration is used to identify which element of this Choice has been chosen. */
  enum WeatherDataTypeChoice {
    WEATHERDATATYPE_CHOICE_NONE,
    WEATHERDATATYPE_CHOICE_WEATHERREPORT,
    WEATHERDATATYPE_CHOICE_WEATHERWARNING,
    WEATHERDATATYPE_CHOICE_WEATHERPRODUCTID
  };

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value.
    */
  virtual WeatherDataTypeChoice getWeatherDataTypeChoiceOrdinal() const = 0;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getWeatherDataTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In addition, the access
    * methods associated with the chosen element will be enabled and will provide access to the chosen element.
    *
    * @param chosenElementOrdinal The ordinal to set this choice's selected ordinal to.
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherDataType& setWeatherDataTypeChoiceOrdinal(WeatherDataTypeChoice chosenElementOrdinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by WeatherReport.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by WeatherReport.
    */
  virtual const uci::type::WeatherReportDataType& getWeatherReport() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by WeatherReport.
    *
    * @return A reference to the accessor that provides access to the complex content identified by WeatherReport.
    */
  virtual uci::type::WeatherReportDataType& getWeatherReport() = 0;

  /** Sets the complex content identified by WeatherReport to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by WeatherReport.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherDataType& setWeatherReport(const uci::type::WeatherReportDataType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by WeatherReport.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by WeatherReport, false otherwise.
    */
  virtual bool isWeatherReport() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by WeatherReport.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by WeatherReport.
    */
  virtual uci::type::WeatherReportDataType& chooseWeatherReport(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by WeatherWarning.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by WeatherWarning.
    */
  virtual const uci::type::WeatherWarningDataType& getWeatherWarning() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by WeatherWarning.
    *
    * @return A reference to the accessor that provides access to the complex content identified by WeatherWarning.
    */
  virtual uci::type::WeatherWarningDataType& getWeatherWarning() = 0;

  /** Sets the complex content identified by WeatherWarning to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by WeatherWarning.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherDataType& setWeatherWarning(const uci::type::WeatherWarningDataType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by WeatherWarning.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by WeatherWarning, false otherwise.
    */
  virtual bool isWeatherWarning() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by WeatherWarning.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by WeatherWarning.
    */
  virtual uci::type::WeatherWarningDataType& chooseWeatherWarning(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by WeatherProductID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by WeatherProductID.
    */
  virtual const uci::type::ProductMetadataID_Type& getWeatherProductID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by WeatherProductID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by WeatherProductID.
    */
  virtual uci::type::ProductMetadataID_Type& getWeatherProductID() = 0;

  /** Sets the complex content identified by WeatherProductID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by WeatherProductID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::WeatherDataType& setWeatherProductID(const uci::type::ProductMetadataID_Type& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by WeatherProductID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by WeatherProductID, false
    *      otherwise.
    */
  virtual bool isWeatherProductID() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by WeatherProductID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by WeatherProductID.
    */
  virtual uci::type::ProductMetadataID_Type& chooseWeatherProductID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  WeatherDataType() {
  }

  /** The destructor [only available to derived classes]. */
  ~WeatherDataType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The WeatherDataType to copy from.
    */
  WeatherDataType(const WeatherDataType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this WeatherDataType to the contents of the WeatherDataType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The WeatherDataType on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this WeatherDataType.
    * @return A reference to this WeatherDataType.
    */
  WeatherDataType& operator=(const WeatherDataType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_WEATHERDATATYPE_H

