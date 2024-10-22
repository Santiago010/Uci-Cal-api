/** @file WeekdayIntervalType.h
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

#ifndef ASB_UCI_TYPE_WEEKDAYINTERVALTYPE_H
#define ASB_UCI_TYPE_WEEKDAYINTERVALTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../base/BoundedList.h"
#include "DurationType.h"
#include "TimeType.h"
#include "WeekdayEnum.h"
#include "../../asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeekdayIntervalType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class DateTimeRangeType;

/** See annotations in child elements and messages/elements that use this type for details. */
class WeekdayIntervalType : public virtual uci::type::WeekdayIntervalType {
public:
  /** Indicates the days of the week in which the interval is valid. List size for this element is based on "Select All
    * That Apply" condition. [Occurrences: Minimum: 1; Maximum: 7]
    */
  using Weekday = asb_uci::base::BoundedList<uci::type::WeekdayEnum, uci::type::accessorType::weekdayEnum, asb_uci::type::WeekdayEnum>;

  /** The constructor */
  WeekdayIntervalType();

  /** The copy constructor
    *
    * @param rhs The WeekdayIntervalType to copy from
    */
  WeekdayIntervalType(const WeekdayIntervalType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The WeekdayIntervalType to move from
    */
  WeekdayIntervalType(WeekdayIntervalType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The WeekdayIntervalType to copy from
    * @return The WeekdayIntervalType that was assigned
    */
  WeekdayIntervalType& operator=(const WeekdayIntervalType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The WeekdayIntervalType to move from
    * @return The WeekdayIntervalType that was assigned
    */
  WeekdayIntervalType& operator=(WeekdayIntervalType&& rhs) = delete;

  /** The destructor */
  virtual ~WeekdayIntervalType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::WeekdayIntervalType whose contents are to be used to set this
    *      uci::type::WeekdayIntervalType's contents.
    */
  void copy(const uci::type::WeekdayIntervalType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::WeekdayIntervalType whose contents are to be used to set this
    *      uci::type::WeekdayIntervalType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::WeekdayIntervalType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the TimeSpan field contained in this message fragment
    *
    * @return The const reference to the accessor to the TimeSpan field.
    */
  const uci::type::DateTimeRangeType& getTimeSpan() const override;

  /** Returns the accessor to the TimeSpan field contained in this message fragment
    *
    * @return The reference to the accessor to the TimeSpan field.
    */
  uci::type::DateTimeRangeType& getTimeSpan() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeekdayIntervalType& setTimeSpan(const uci::type::DateTimeRangeType& accessor) override;

  /** Returns the accessor to the Weekday field contained in this message fragment
    *
    * @return The const reference to the accessor to the Weekday field.
    */
  const uci::type::WeekdayIntervalType::Weekday& getWeekday() const override;

  /** Returns the accessor to the Weekday field contained in this message fragment
    *
    * @return The reference to the accessor to the Weekday field.
    */
  uci::type::WeekdayIntervalType::Weekday& getWeekday() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeekdayIntervalType& setWeekday(const uci::type::WeekdayIntervalType::Weekday& accessor) override;

  /** Returns the contents of the message's WeeklyIntervalPeriod field
    *
    * @return The contents of the WeeklyIntervalPeriod field
    */
  xs::UnsignedInt getWeeklyIntervalPeriod() const override;

  /** Sets the contents of the message's WeeklyIntervalPeriod field
    *
    * @param value The new value to set the WeeklyIntervalPeriod field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeekdayIntervalType& setWeeklyIntervalPeriod(xs::UnsignedInt value) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::TimeTypeValue getStartTime() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeekdayIntervalType& setStartTime(uci::type::TimeTypeValue value) override;

  /** Returns whether this optional field StartTimeis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasStartTime() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeekdayIntervalType& clearStartTime() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DurationTypeValue getDuration() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeekdayIntervalType& setDuration(uci::type::DurationTypeValue value) override;

  /** Returns whether this optional field Durationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDuration() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeekdayIntervalType& clearDuration() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<WeekdayIntervalType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::WeekdayIntervalType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::WeekdayIntervalType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<DateTimeRangeType> timeSpan_Accessor;
  std::unique_ptr<Weekday> weekday_Accessor;
  asb_xs::UnsignedInt weeklyIntervalPeriod_Accessor{0};
  boost::optional<TimeTypeValue> startTime_Accessor;
  boost::optional<DurationTypeValue> duration_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_WEEKDAYINTERVALTYPE_H
