/** @file ActivityPlanValidationCommandStatusMDT.h
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

#ifndef UCI_TYPE_ACTIVITYPLANVALIDATIONCOMMANDSTATUSMDT_H
#define UCI_TYPE_ACTIVITYPLANVALIDATIONCOMMANDSTATUSMDT_H

#include "../base/export.h"
#include "ActivityPlanValidationID_Type.h"
#include "ValidationCommandStatusBaseType.h"

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
class ActivityPlanValidationCommandStatusMDT : public virtual ValidationCommandStatusBaseType {
public:

  /** This method constructs a new ActivityPlanValidationCommandStatusMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ActivityPlanValidationCommandStatusMDT.
    */
  static UCI_EXPORT ActivityPlanValidationCommandStatusMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ActivityPlanValidationCommandStatusMDT initializing the data accessed by the new
    * ActivityPlanValidationCommandStatusMDT using the data accessed by the specified
    * ActivityPlanValidationCommandStatusMDT (cloning).
    *
    * @param accessor The ActivityPlanValidationCommandStatusMDT that provides access to the data that is to be used to
    *      initialize the data accessed by the new created ActivityPlanValidationCommandStatusMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ActivityPlanValidationCommandStatusMDT.
    */
  static UCI_EXPORT ActivityPlanValidationCommandStatusMDT& create(const ActivityPlanValidationCommandStatusMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ActivityPlanValidationCommandStatusMDT. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The ActivityPlanValidationCommandStatusMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ActivityPlanValidationCommandStatusMDT& accessor);

  /** Returns this accessor's type constant, i.e. activityPlanValidationCommandStatusMDT.
    *
    * @return This accessor's type constant, i.e. activityPlanValidationCommandStatusMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::activityPlanValidationCommandStatusMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of ActivityPlanValidationCommandStatusMDT.
    *
    * @return The version that was initialized from the uci:version attribute of ActivityPlanValidationCommandStatusMDT.
    */
  static std::string getUCITypeVersion() {
    return "002.001.003.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ActivityPlanValidationCommandStatusMDT& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ActivityPlanValidationID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ActivityPlanValidationID.
    */
  virtual const uci::type::ActivityPlanValidationID_Type& getActivityPlanValidationID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * ActivityPlanValidationID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ActivityPlanValidationID.
    */
  virtual uci::type::ActivityPlanValidationID_Type& getActivityPlanValidationID() = 0;

  /** Sets the complex content identified by ActivityPlanValidationID to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ActivityPlanValidationID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityPlanValidationCommandStatusMDT& setActivityPlanValidationID(const uci::type::ActivityPlanValidationID_Type& value) = 0;

  /** Returns whether the Element identified by ActivityPlanValidationID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ActivityPlanValidationID is enabled or not.
    */
  virtual bool hasActivityPlanValidationID() const = 0;

  /** Enables the Element identified by ActivityPlanValidationID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ActivityPlanValidationID.
    */
  virtual uci::type::ActivityPlanValidationID_Type& enableActivityPlanValidationID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ActivityPlanValidationID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityPlanValidationCommandStatusMDT& clearActivityPlanValidationID() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ActivityPlanValidationCommandStatusMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~ActivityPlanValidationCommandStatusMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ActivityPlanValidationCommandStatusMDT to copy from.
    */
  ActivityPlanValidationCommandStatusMDT(const ActivityPlanValidationCommandStatusMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ActivityPlanValidationCommandStatusMDT to the contents of the
    * ActivityPlanValidationCommandStatusMDT on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The ActivityPlanValidationCommandStatusMDT on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this ActivityPlanValidationCommandStatusMDT.
    * @return A reference to this ActivityPlanValidationCommandStatusMDT.
    */
  ActivityPlanValidationCommandStatusMDT& operator=(const ActivityPlanValidationCommandStatusMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ACTIVITYPLANVALIDATIONCOMMANDSTATUSMDT_H

