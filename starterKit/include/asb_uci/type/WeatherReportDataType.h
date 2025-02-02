/** @file WeatherReportDataType.h
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

#ifndef ASB_UCI_TYPE_WEATHERREPORTDATATYPE_H
#define ASB_UCI_TYPE_WEATHERREPORTDATATYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/WeatherReportTypeEnum.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeatherReportDataType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class DateTimeRangeType;
class WeatherReportType;
class ZoneType;

/** See annotations in child elements and messages/elements that use this type for details. */
class WeatherReportDataType : public virtual uci::type::WeatherReportDataType {
public:
  /** Indicates the time interval over which the report applies. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  using Schedule = asb_uci::base::BoundedList<uci::type::DateTimeRangeType, uci::type::accessorType::dateTimeRangeType, asb_uci::type::DateTimeRangeType>;

  /** The constructor */
  WeatherReportDataType();

  /** The copy constructor
    *
    * @param rhs The WeatherReportDataType to copy from
    */
  WeatherReportDataType(const WeatherReportDataType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The WeatherReportDataType to move from
    */
  WeatherReportDataType(WeatherReportDataType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The WeatherReportDataType to copy from
    * @return The WeatherReportDataType that was assigned
    */
  WeatherReportDataType& operator=(const WeatherReportDataType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The WeatherReportDataType to move from
    * @return The WeatherReportDataType that was assigned
    */
  WeatherReportDataType& operator=(WeatherReportDataType&& rhs) = delete;

  /** The destructor */
  virtual ~WeatherReportDataType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::WeatherReportDataType whose contents are to be used to set this
    *      uci::type::WeatherReportDataType's contents.
    */
  void copy(const uci::type::WeatherReportDataType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::WeatherReportDataType whose contents are to be used to set this
    *      uci::type::WeatherReportDataType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::WeatherReportDataType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's WeatherReportType field
    *
    * @return The contents of the WeatherReportType field
    */
  const uci::type::WeatherReportTypeEnum& getWeatherReportType() const override;

  /** Returns the contents of the message's WeatherReportType field
    *
    * @return The contents of the WeatherReportType field
    */
  uci::type::WeatherReportTypeEnum& getWeatherReportType() override;

  /** Sets the contents of the message's WeatherReportType field
    *
    * @param accessor The accessor to use to set the WeatherReportType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeatherReportDataType& setWeatherReportType(const uci::type::WeatherReportTypeEnum& accessor) override;

  /** Sets the contents of the message's WeatherReportType field
    *
    * @param value The new value to set the WeatherReportType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeatherReportDataType& setWeatherReportType(uci::type::WeatherReportTypeEnum::EnumerationItem value) override;

  /** Returns the contents of the message's Created field
    *
    * @return The contents of the Created field
    */
  uci::type::DateTimeTypeValue getCreated() const override;

  /** Sets the contents of the message's Created field
    *
    * @param value The new value to set the Created field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeatherReportDataType& setCreated(uci::type::DateTimeTypeValue value) override;

  /** Returns the accessor to the Schedule field contained in this message fragment
    *
    * @return The const reference to the accessor to the Schedule field.
    */
  const uci::type::WeatherReportDataType::Schedule& getSchedule() const override;

  /** Returns the accessor to the Schedule field contained in this message fragment
    *
    * @return The reference to the accessor to the Schedule field.
    */
  uci::type::WeatherReportDataType::Schedule& getSchedule() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeatherReportDataType& setSchedule(const uci::type::WeatherReportDataType::Schedule& accessor) override;

  /** Returns the accessor to the WeatherArea field contained in this message fragment
    *
    * @return The const reference to the accessor to the WeatherArea field.
    */
  const uci::type::ZoneType& getWeatherArea() const override;

  /** Returns the accessor to the WeatherArea field contained in this message fragment
    *
    * @return The reference to the accessor to the WeatherArea field.
    */
  uci::type::ZoneType& getWeatherArea() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeatherReportDataType& setWeatherArea(const uci::type::ZoneType& accessor) override;

  /** Enables the optional field such that getWeatherArea will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available for the element. The use of
    *      this parameter provides support for inheritable types. This parameter defaults to uci::base::accessorType::null
    *      that is used to indicate that the access methods associated with the element shall provide access to data of the
    *      type that was specified for that element in the OMS schema, i.e. the element's base type. If specified, this
    *      field must either be a type ID associated with the element's base type or a type ID associated with a type that
    *      is derived from the element's base type.
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ZoneType& enableWeatherArea(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Float getQNH() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeatherReportDataType& setQNH(xs::Float value) override;

  /** Returns whether this optional field QNHis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasQNH() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeatherReportDataType& clearQNH() noexcept override;

  /** Returns the accessor to the WeatherData field contained in this message fragment
    *
    * @return The const reference to the accessor to the WeatherData field.
    */
  const uci::type::WeatherReportType& getWeatherData() const override;

  /** Returns the accessor to the WeatherData field contained in this message fragment
    *
    * @return The reference to the accessor to the WeatherData field.
    */
  uci::type::WeatherReportType& getWeatherData() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeatherReportDataType& setWeatherData(const uci::type::WeatherReportType& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<WeatherReportDataType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::WeatherReportDataType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::WeatherReportDataType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<WeatherReportTypeEnum> weatherReportType_Accessor;
  DateTimeTypeValue created_Accessor{0};
  std::unique_ptr<Schedule> schedule_Accessor;
  std::unique_ptr<ZoneType> weatherArea_Accessor;
  boost::optional<asb_xs::Float> qNH_Accessor;
  std::unique_ptr<WeatherReportType> weatherData_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_WEATHERREPORTDATATYPE_H
