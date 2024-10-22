/** @file TimingConstraintsType.h
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

#ifndef UCI_TYPE_TIMINGCONSTRAINTSTYPE_H
#define UCI_TYPE_TIMINGCONSTRAINTSTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "EmptyType.h"
#include "RepetitionConstraintsType.h"
#include "TimeWindowType.h"
#include "WeekdayIntervalType.h"

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

/** Provides a choice of timing constraints including repetitive timing and event based repetition. */
class TimingConstraintsType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new TimingConstraintsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed TimingConstraintsType.
    */
  static UCI_EXPORT TimingConstraintsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new TimingConstraintsType initializing the data accessed by the new TimingConstraintsType
    * using the data accessed by the specified TimingConstraintsType (cloning).
    *
    * @param accessor The TimingConstraintsType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created TimingConstraintsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed TimingConstraintsType.
    */
  static UCI_EXPORT TimingConstraintsType& create(const TimingConstraintsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified TimingConstraintsType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The TimingConstraintsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(TimingConstraintsType& accessor);

  /** Returns this accessor's type constant, i.e. timingConstraintsType.
    *
    * @return This accessor's type constant, i.e. timingConstraintsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::timingConstraintsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of TimingConstraintsType.
    *
    * @return The version that was initialized from the uci:version attribute of TimingConstraintsType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const TimingConstraintsType& accessor) = 0;

  /** The following enumeration is used to identify which element of this Choice has been chosen. */
  enum TimingConstraintsTypeChoice {
    TIMINGCONSTRAINTSTYPE_CHOICE_NONE,
    TIMINGCONSTRAINTSTYPE_CHOICE_ASSOONASPOSSIBLE,
    TIMINGCONSTRAINTSTYPE_CHOICE_TIMEWINDOW,
    TIMINGCONSTRAINTSTYPE_CHOICE_WEEKDAYINTERVAL,
    TIMINGCONSTRAINTSTYPE_CHOICE_REPETITIVE
  };

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value.
    */
  virtual TimingConstraintsTypeChoice getTimingConstraintsTypeChoiceOrdinal() const = 0;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getTimingConstraintsTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In addition, the
    * access methods associated with the chosen element will be enabled and will provide access to the chosen element.
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
  virtual uci::type::TimingConstraintsType& setTimingConstraintsTypeChoiceOrdinal(TimingConstraintsTypeChoice chosenElementOrdinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by AsSoonAsPossible.
    *
    * @return A const reference to the accessor that provides access to the string identified by AsSoonAsPossible.
    */
  virtual const uci::type::EmptyType& getAsSoonAsPossible() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by AsSoonAsPossible.
    *
    * @return A reference to the accessor that provides access to the string identified by AsSoonAsPossible.
    */
  virtual uci::type::EmptyType& getAsSoonAsPossible() = 0;

  /** Sets the string identified by AsSoonAsPossible to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by AsSoonAsPossible.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TimingConstraintsType& setAsSoonAsPossible(const uci::type::EmptyType& value) = 0;

  /** Sets the string identified by AsSoonAsPossible to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TimingConstraintsType& setAsSoonAsPossible(const std::string& value) = 0;

  /** Sets the string identified by AsSoonAsPossible to the contents of the string that is accessed by the specified
    * accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TimingConstraintsType& setAsSoonAsPossible(const char* value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by AsSoonAsPossible.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by AsSoonAsPossible, false
    *      otherwise.
    */
  virtual bool isAsSoonAsPossible() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by AsSoonAsPossible.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the string identified by AsSoonAsPossible.
    */
  virtual uci::type::EmptyType& chooseAsSoonAsPossible(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by TimeWindow.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by TimeWindow.
    */
  virtual const uci::type::TimeWindowType& getTimeWindow() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by TimeWindow.
    *
    * @return A reference to the accessor that provides access to the complex content identified by TimeWindow.
    */
  virtual uci::type::TimeWindowType& getTimeWindow() = 0;

  /** Sets the complex content identified by TimeWindow to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by TimeWindow.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TimingConstraintsType& setTimeWindow(const uci::type::TimeWindowType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by TimeWindow.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by TimeWindow, false otherwise.
    */
  virtual bool isTimeWindow() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by TimeWindow.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by TimeWindow.
    */
  virtual uci::type::TimeWindowType& chooseTimeWindow(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by WeekdayInterval.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by WeekdayInterval.
    */
  virtual const uci::type::WeekdayIntervalType& getWeekdayInterval() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by WeekdayInterval.
    *
    * @return A reference to the accessor that provides access to the complex content identified by WeekdayInterval.
    */
  virtual uci::type::WeekdayIntervalType& getWeekdayInterval() = 0;

  /** Sets the complex content identified by WeekdayInterval to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by WeekdayInterval.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TimingConstraintsType& setWeekdayInterval(const uci::type::WeekdayIntervalType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by WeekdayInterval.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by WeekdayInterval, false
    *      otherwise.
    */
  virtual bool isWeekdayInterval() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by WeekdayInterval.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by WeekdayInterval.
    */
  virtual uci::type::WeekdayIntervalType& chooseWeekdayInterval(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Repetitive.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Repetitive.
    */
  virtual const uci::type::RepetitionConstraintsType& getRepetitive() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Repetitive.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Repetitive.
    */
  virtual uci::type::RepetitionConstraintsType& getRepetitive() = 0;

  /** Sets the complex content identified by Repetitive to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Repetitive.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::TimingConstraintsType& setRepetitive(const uci::type::RepetitionConstraintsType& value) = 0;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by Repetitive.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by Repetitive, false otherwise.
    */
  virtual bool isRepetitive() const = 0;

  /** Sets this choice's "selection ordinal" to the choice identified by Repetitive.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by Repetitive.
    */
  virtual uci::type::RepetitionConstraintsType& chooseRepetitive(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  TimingConstraintsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~TimingConstraintsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The TimingConstraintsType to copy from.
    */
  TimingConstraintsType(const TimingConstraintsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this TimingConstraintsType to the contents of the TimingConstraintsType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The TimingConstraintsType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this TimingConstraintsType.
    * @return A reference to this TimingConstraintsType.
    */
  TimingConstraintsType& operator=(const TimingConstraintsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_TIMINGCONSTRAINTSTYPE_H

