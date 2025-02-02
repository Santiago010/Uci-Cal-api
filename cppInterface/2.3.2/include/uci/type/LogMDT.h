/** @file LogMDT.h
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

#ifndef UCI_TYPE_LOGMDT_H
#define UCI_TYPE_LOGMDT_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/DurationAccessor.h"
#include "../base/export.h"
#include "CapabilityID_Type.h"
#include "ComponentID_Type.h"
#include "DateTimeType.h"
#include "LogSeverityEnum.h"
#include "ServiceID_Type.h"
#include "SubsystemID_Type.h"
#include "VisibleString1024Type.h"
#include "VisibleString256Type.h"
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

/** This contains the Log message data. */
class LogMDT : public virtual uci::base::Accessor {
public:

  /** This method constructs a new LogMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed LogMDT.
    */
  static UCI_EXPORT LogMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new LogMDT initializing the data accessed by the new LogMDT using the data accessed by the
    * specified LogMDT (cloning).
    *
    * @param accessor The LogMDT that provides access to the data that is to be used to initialize the data accessed by the
    *      new created LogMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed LogMDT.
    */
  static UCI_EXPORT LogMDT& create(const LogMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified LogMDT. Use of the specified accessor after it has been destroyed will result in
    * undefined behavior.
    *
    * @param accessor The LogMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(LogMDT& accessor);

  /** Returns this accessor's type constant, i.e. logMDT.
    *
    * @return This accessor's type constant, i.e. logMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::logMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of LogMDT.
    *
    * @return The version that was initialized from the uci:version attribute of LogMDT.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const LogMDT& accessor) = 0;

  /** Indicates the unique ID of the Component whose log message is in the message. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ComponentID_Type, uci::type::accessorType::componentID_Type> ComponentID;

  /** Indicates the unique ID of the Capability whose log message is in the message. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::CapabilityID_Type, uci::type::accessorType::capabilityID_Type> CapabilityID;

  /** Returns the value of the SimplePrimitive data type identified by Timestamp.
    *
    * @return The value of the simple primitive data type identified by Timestamp.
    */
  virtual uci::type::DateTimeTypeValue getTimestamp() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Timestamp.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setTimestamp(uci::type::DateTimeTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by ServiceUpTime.
    *
    * @return The value of the simple primitive data type identified by ServiceUpTime.
    */
  virtual xs::Duration getServiceUpTime() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ServiceUpTime.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setServiceUpTime(xs::Duration value) = 0;

  /** Returns whether the Element identified by ServiceUpTime exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ServiceUpTime is enabled or not.
    */
  virtual bool hasServiceUpTime() const = 0;

  /** Clears (disabled) the Element identified by ServiceUpTime.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& clearServiceUpTime() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ServiceID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ServiceID.
    */
  virtual const uci::type::ServiceID_Type& getServiceID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ServiceID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ServiceID.
    */
  virtual uci::type::ServiceID_Type& getServiceID() = 0;

  /** Sets the complex content identified by ServiceID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ServiceID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setServiceID(const uci::type::ServiceID_Type& value) = 0;

  /** Returns whether the Element identified by ServiceID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ServiceID is enabled or not.
    */
  virtual bool hasServiceID() const = 0;

  /** Enables the Element identified by ServiceID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ServiceID.
    */
  virtual uci::type::ServiceID_Type& enableServiceID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ServiceID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& clearServiceID() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SubsystemID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SubsystemID.
    */
  virtual const uci::type::SubsystemID_Type& getSubsystemID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SubsystemID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SubsystemID.
    */
  virtual uci::type::SubsystemID_Type& getSubsystemID() = 0;

  /** Sets the complex content identified by SubsystemID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SubsystemID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setSubsystemID(const uci::type::SubsystemID_Type& value) = 0;

  /** Returns whether the Element identified by SubsystemID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SubsystemID is enabled or not.
    */
  virtual bool hasSubsystemID() const = 0;

  /** Enables the Element identified by SubsystemID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by SubsystemID.
    */
  virtual uci::type::SubsystemID_Type& enableSubsystemID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SubsystemID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& clearSubsystemID() = 0;

  /** Returns a const reference to the bounded list identified by ComponentID.
    *
    * @return A const reference to the bounded list identified by ComponentID.
    */
  virtual const uci::type::LogMDT::ComponentID& getComponentID() const = 0;

  /** Returns a reference to the bounded list identified by ComponentID.
    *
    * @return A reference to the bounded list identified by ComponentID.
    */
  virtual uci::type::LogMDT::ComponentID& getComponentID() = 0;

  /** Sets the bounded list identified by ComponentID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setComponentID(const uci::type::LogMDT::ComponentID& value) = 0;

  /** Returns a const reference to the bounded list identified by CapabilityID.
    *
    * @return A const reference to the bounded list identified by CapabilityID.
    */
  virtual const uci::type::LogMDT::CapabilityID& getCapabilityID() const = 0;

  /** Returns a reference to the bounded list identified by CapabilityID.
    *
    * @return A reference to the bounded list identified by CapabilityID.
    */
  virtual uci::type::LogMDT::CapabilityID& getCapabilityID() = 0;

  /** Sets the bounded list identified by CapabilityID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setCapabilityID(const uci::type::LogMDT::CapabilityID& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by Severity.
    *
    * @return A const reference to the value of the enumeration identified by Severity.
    */
  virtual const uci::type::LogSeverityEnum& getSeverity() const = 0;

  /** Returns a reference to the value of the enumeration identified by Severity.
    *
    * @return A reference to the value of the enumeration identified by Severity.
    */
  virtual uci::type::LogSeverityEnum& getSeverity() = 0;

  /** Sets the value of the enumeration identified by Severity.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setSeverity(const uci::type::LogSeverityEnum& value) = 0;

  /** Sets the value of the enumeration identified by Severity.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setSeverity(uci::type::LogSeverityEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by Label.
    *
    * @return A const reference to the accessor that provides access to the string identified by Label.
    */
  virtual const asb_uci::type::VisibleString256Type& getLabel() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by Label.
    *
    * @return A reference to the accessor that provides access to the string identified by Label.
    */
  virtual asb_uci::type::VisibleString256Type& getLabel() = 0;

  /** Sets the string identified by Label to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by Label.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setLabel(const asb_uci::type::VisibleString256Type& value) = 0;

  /** Sets the string identified by Label to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setLabel(const std::string& value) = 0;

  /** Sets the string identified by Label to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setLabel(const char* value) = 0;

  /** Returns a const reference to the accessor that provides access to the string identified by Details.
    *
    * @return A const reference to the accessor that provides access to the string identified by Details.
    */
  virtual const uci::type::VisibleString1024Type& getDetails() const = 0;

  /** Returns a reference to the accessor that provides access to the string identified by Details.
    *
    * @return A reference to the accessor that provides access to the string identified by Details.
    */
  virtual uci::type::VisibleString1024Type& getDetails() = 0;

  /** Sets the string identified by Details to the contents of the string accessed by the specified accessor.
    *
    * @param value The accessor that provides access to the string whose contents are to be used to set the contents of the
    *      string identified by Details.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setDetails(const uci::type::VisibleString1024Type& value) = 0;

  /** Sets the string identified by Details to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setDetails(const std::string& value) = 0;

  /** Sets the string identified by Details to the contents of the string that is accessed by the specified accessor.
    *
    * @param value The string used to set the string data type.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setDetails(const char* value) = 0;

  /** Returns the accessor to the Data field contained in this message fragment.
    *
    * @return The reference to the accessor to the Data field.
    */
  virtual const xs::HexBinary& getData() const = 0;

  /** Returns the accessor to the Data field contained in this message fragment.
    *
    * @return The reference to the accessor to the Data field.
    */
  virtual xs::HexBinary& getData() = 0;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents.
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& setData(const xs::HexBinary& value) = 0;

  /** Returns whether this optionalfield Datais available.
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  virtual bool hasData() const = 0;

  /** Enables the optional field such that getData will return the optional field and not throw an exception when invoked.
    *
    * @return The reference to the accessor to the Data field.
    */
  virtual xs::HexBinary& enableData() = 0;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LogMDT& clearData() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  LogMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~LogMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The LogMDT to copy from.
    */
  LogMDT(const LogMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this LogMDT to the contents of the LogMDT on the right hand side (rhs)
    * of the assignment operator [only available to derived classes].
    *
    * @param rhs The LogMDT on the right hand side (rhs) of the assignment operator whose contents are used to set the
    *      contents of this LogMDT.
    * @return A reference to this LogMDT.
    */
  LogMDT& operator=(const LogMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_LOGMDT_H
