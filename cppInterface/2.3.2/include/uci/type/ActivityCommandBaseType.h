/** @file ActivityCommandBaseType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:06 PM
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

#ifndef UCI_TYPE_ACTIVITYCOMMANDBASETYPE_H
#define UCI_TYPE_ACTIVITYCOMMANDBASETYPE_H

#include "../base/BooleanAccessor.h"
#include "../base/export.h"
#include "ActivityID_Type.h"
#include "CapabilityCommandStateEnum.h"
#include "CommandBaseType.h"
#include "ComparableRankingType.h"

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
class ActivityCommandBaseType : public virtual CommandBaseType {
public:

  /** This method constructs a new ActivityCommandBaseType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ActivityCommandBaseType.
    */
  static UCI_EXPORT ActivityCommandBaseType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ActivityCommandBaseType initializing the data accessed by the new
    * ActivityCommandBaseType using the data accessed by the specified ActivityCommandBaseType (cloning).
    *
    * @param accessor The ActivityCommandBaseType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created ActivityCommandBaseType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ActivityCommandBaseType.
    */
  static UCI_EXPORT ActivityCommandBaseType& create(const ActivityCommandBaseType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ActivityCommandBaseType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The ActivityCommandBaseType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ActivityCommandBaseType& accessor);

  /** Returns this accessor's type constant, i.e. activityCommandBaseType.
    *
    * @return This accessor's type constant, i.e. activityCommandBaseType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::activityCommandBaseType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ActivityCommandBaseType.
    *
    * @return The version that was initialized from the uci:version attribute of ActivityCommandBaseType.
    */
  static std::string getUCITypeVersion() {
    return "001.001.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ActivityCommandBaseType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ActivityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ActivityID.
    */
  virtual const uci::type::ActivityID_Type& getActivityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ActivityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ActivityID.
    */
  virtual uci::type::ActivityID_Type& getActivityID() = 0;

  /** Sets the complex content identified by ActivityID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ActivityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityCommandBaseType& setActivityID(const uci::type::ActivityID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ChangeActivityRank.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ChangeActivityRank.
    */
  virtual const uci::type::ComparableRankingType& getChangeActivityRank() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ChangeActivityRank.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ChangeActivityRank.
    */
  virtual uci::type::ComparableRankingType& getChangeActivityRank() = 0;

  /** Sets the complex content identified by ChangeActivityRank to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ChangeActivityRank.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityCommandBaseType& setChangeActivityRank(const uci::type::ComparableRankingType& value) = 0;

  /** Returns whether the Element identified by ChangeActivityRank exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ChangeActivityRank is enabled or not.
    */
  virtual bool hasChangeActivityRank() const = 0;

  /** Enables the Element identified by ChangeActivityRank.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ChangeActivityRank.
    */
  virtual uci::type::ComparableRankingType& enableChangeActivityRank(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ChangeActivityRank.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityCommandBaseType& clearChangeActivityRank() = 0;

  /** Returns a const reference to the value of the enumeration identified by ChangeActivityState.
    *
    * @return A const reference to the value of the enumeration identified by ChangeActivityState.
    */
  virtual const uci::type::CapabilityCommandStateEnum& getChangeActivityState() const = 0;

  /** Returns a reference to the value of the enumeration identified by ChangeActivityState.
    *
    * @return A reference to the value of the enumeration identified by ChangeActivityState.
    */
  virtual uci::type::CapabilityCommandStateEnum& getChangeActivityState() = 0;

  /** Sets the value of the enumeration identified by ChangeActivityState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityCommandBaseType& setChangeActivityState(const uci::type::CapabilityCommandStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by ChangeActivityState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityCommandBaseType& setChangeActivityState(uci::type::CapabilityCommandStateEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by ChangeActivityState exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ChangeActivityState is enabled or not.
    */
  virtual bool hasChangeActivityState() const = 0;

  /** Enables the Element identified by ChangeActivityState.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by ChangeActivityState.
    */
  virtual uci::type::CapabilityCommandStateEnum& enableChangeActivityState(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ChangeActivityState.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityCommandBaseType& clearChangeActivityState() = 0;

  /** Returns the value of the SimplePrimitive data type identified by DeleteActivity.
    *
    * @return The value of the simple primitive data type identified by DeleteActivity.
    */
  virtual xs::Boolean getDeleteActivity() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by DeleteActivity.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityCommandBaseType& setDeleteActivity(xs::Boolean value) = 0;

  /** Returns whether the Element identified by DeleteActivity exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DeleteActivity is enabled or not.
    */
  virtual bool hasDeleteActivity() const = 0;

  /** Clears (disabled) the Element identified by DeleteActivity.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityCommandBaseType& clearDeleteActivity() = 0;

  /** Returns the value of the SimplePrimitive data type identified by UnassignActivity.
    *
    * @return The value of the simple primitive data type identified by UnassignActivity.
    */
  virtual xs::Boolean getUnassignActivity() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by UnassignActivity.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityCommandBaseType& setUnassignActivity(xs::Boolean value) = 0;

  /** Returns whether the Element identified by UnassignActivity exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by UnassignActivity is enabled or not.
    */
  virtual bool hasUnassignActivity() const = 0;

  /** Clears (disabled) the Element identified by UnassignActivity.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityCommandBaseType& clearUnassignActivity() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ActivityCommandBaseType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ActivityCommandBaseType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ActivityCommandBaseType to copy from.
    */
  ActivityCommandBaseType(const ActivityCommandBaseType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ActivityCommandBaseType to the contents of the
    * ActivityCommandBaseType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The ActivityCommandBaseType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this ActivityCommandBaseType.
    * @return A reference to this ActivityCommandBaseType.
    */
  ActivityCommandBaseType& operator=(const ActivityCommandBaseType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ACTIVITYCOMMANDBASETYPE_H

