/** @file NotificationBaseType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#ifndef ASB_UCI_TYPE_NOTIFICATIONBASETYPE_H
#define ASB_UCI_TYPE_NOTIFICATIONBASETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/NotificationSeverityEnum.h"
#include "../../../include/asb_uci/type/NotificationStateEnum.h"
#include "../../../include/asb_uci/type/VisibleString1024Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/NotificationBaseType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class NotificationID_Type;
class NotificationSourceType;
class SubjectType;

/** Indicates parameters for both Entity and System notification messages. This includes the notification's ID, the
  * notification's current state, the timestamp, the source of the notification, the severity of the notification, the
  * asset that the notification applies to (if applicable), and a notification narrative for a human operator.
  */
class NotificationBaseType : public virtual uci::type::NotificationBaseType {
public:
  /** Indicates an Asset that the Notification applies to and/or is affected by. Optional when the Notification
    * characterizes the Subject without regard for Assets it might affect. Omission of this element doesn't necessarily
    * mean the Notification isn't applicable to an Asset. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using AppliesTo = asb_uci::base::BoundedList<uci::type::SubjectType, uci::type::accessorType::subjectType, asb_uci::type::SubjectType>;

  /** The constructor */
  NotificationBaseType();

  /** The copy constructor
    *
    * @param rhs The NotificationBaseType to copy from
    */
  NotificationBaseType(const NotificationBaseType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The NotificationBaseType to move from
    */
  NotificationBaseType(NotificationBaseType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The NotificationBaseType to copy from
    * @return The NotificationBaseType that was assigned
    */
  NotificationBaseType& operator=(const NotificationBaseType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The NotificationBaseType to move from
    * @return The NotificationBaseType that was assigned
    */
  NotificationBaseType& operator=(NotificationBaseType&& rhs) = delete;

  /** The destructor */
  virtual ~NotificationBaseType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::NotificationBaseType whose contents are to be used to set this
    *      uci::type::NotificationBaseType's contents.
    */
  void copy(const uci::type::NotificationBaseType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::NotificationBaseType whose contents are to be used to set this
    *      uci::type::NotificationBaseType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::NotificationBaseType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the NotificationID field contained in this message fragment
    *
    * @return The const reference to the accessor to the NotificationID field.
    */
  const uci::type::NotificationID_Type& getNotificationID() const override;

  /** Returns the accessor to the NotificationID field contained in this message fragment
    *
    * @return The reference to the accessor to the NotificationID field.
    */
  uci::type::NotificationID_Type& getNotificationID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::NotificationBaseType& setNotificationID(const uci::type::NotificationID_Type& accessor) override;

  /** Returns the contents of the message's NotificationState field
    *
    * @return The contents of the NotificationState field
    */
  const uci::type::NotificationStateEnum& getNotificationState() const override;

  /** Returns the contents of the message's NotificationState field
    *
    * @return The contents of the NotificationState field
    */
  uci::type::NotificationStateEnum& getNotificationState() override;

  /** Sets the contents of the message's NotificationState field
    *
    * @param accessor The accessor to use to set the NotificationState field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NotificationBaseType& setNotificationState(const uci::type::NotificationStateEnum& accessor) override;

  /** Sets the contents of the message's NotificationState field
    *
    * @param value The new value to set the NotificationState field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NotificationBaseType& setNotificationState(uci::type::NotificationStateEnum::EnumerationItem value) override;

  /** Returns the contents of the message's Timestamp field
    *
    * @return The contents of the Timestamp field
    */
  uci::type::DateTimeTypeValue getTimestamp() const override;

  /** Sets the contents of the message's Timestamp field
    *
    * @param value The new value to set the Timestamp field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NotificationBaseType& setTimestamp(uci::type::DateTimeTypeValue value) override;

  /** Returns the accessor to the Source field contained in this message fragment
    *
    * @return The const reference to the accessor to the Source field.
    */
  const uci::type::NotificationSourceType& getSource() const override;

  /** Returns the accessor to the Source field contained in this message fragment
    *
    * @return The reference to the accessor to the Source field.
    */
  uci::type::NotificationSourceType& getSource() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::NotificationBaseType& setSource(const uci::type::NotificationSourceType& accessor) override;

  /** Returns the contents of the message's Severity field
    *
    * @return The contents of the Severity field
    */
  const uci::type::NotificationSeverityEnum& getSeverity() const override;

  /** Returns the contents of the message's Severity field
    *
    * @return The contents of the Severity field
    */
  uci::type::NotificationSeverityEnum& getSeverity() override;

  /** Sets the contents of the message's Severity field
    *
    * @param accessor The accessor to use to set the Severity field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NotificationBaseType& setSeverity(const uci::type::NotificationSeverityEnum& accessor) override;

  /** Sets the contents of the message's Severity field
    *
    * @param value The new value to set the Severity field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NotificationBaseType& setSeverity(uci::type::NotificationSeverityEnum::EnumerationItem value) override;

  /** Returns the accessor to the AppliesTo field contained in this message fragment
    *
    * @return The const reference to the accessor to the AppliesTo field.
    */
  const uci::type::NotificationBaseType::AppliesTo& getAppliesTo() const override;

  /** Returns the accessor to the AppliesTo field contained in this message fragment
    *
    * @return The reference to the accessor to the AppliesTo field.
    */
  uci::type::NotificationBaseType::AppliesTo& getAppliesTo() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::NotificationBaseType& setAppliesTo(const uci::type::NotificationBaseType::AppliesTo& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::VisibleString1024Type& getNotificationNarrative_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::VisibleString1024Type& getNotificationNarrative() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::VisibleString1024Type& getNotificationNarrative() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NotificationBaseType& setNotificationNarrative(const uci::type::VisibleString1024Type& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NotificationBaseType& setNotificationNarrative(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::NotificationBaseType& setNotificationNarrative(const char* value) override;

  /** Returns whether this optional field notificationNarrative_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasNotificationNarrative() const noexcept override;

  /** Enables the optional field such that getNotificationNarrative will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::VisibleString1024Type& enableNotificationNarrative(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::NotificationBaseType& clearNotificationNarrative() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<NotificationBaseType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::NotificationBaseType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::NotificationBaseType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<NotificationID_Type> notificationID_Accessor;
  std::unique_ptr<NotificationStateEnum> notificationState_Accessor;
  DateTimeTypeValue timestamp_Accessor{0};
  std::unique_ptr<NotificationSourceType> source_Accessor;
  std::unique_ptr<NotificationSeverityEnum> severity_Accessor;
  std::unique_ptr<AppliesTo> appliesTo_Accessor;
  std::unique_ptr<VisibleString1024Type> notificationNarrative_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_NOTIFICATIONBASETYPE_H
