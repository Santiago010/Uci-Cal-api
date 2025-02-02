/** @file SharedRF_ApertureActivityBaseType.h
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

#ifndef UCI_TYPE_SHAREDRF_APERTUREACTIVITYBASETYPE_H
#define UCI_TYPE_SHAREDRF_APERTUREACTIVITYBASETYPE_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ActivityBaseType.h"
#include "DependentActivityType.h"
#include "PerformanceMetricSetType.h"
#include "ResourceStatusSelectedType.h"

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
class SharedRF_ApertureActivityBaseType : public virtual ActivityBaseType {
public:

  /** This method constructs a new SharedRF_ApertureActivityBaseType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SharedRF_ApertureActivityBaseType.
    */
  static UCI_EXPORT SharedRF_ApertureActivityBaseType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SharedRF_ApertureActivityBaseType initializing the data accessed by the new
    * SharedRF_ApertureActivityBaseType using the data accessed by the specified SharedRF_ApertureActivityBaseType
    * (cloning).
    *
    * @param accessor The SharedRF_ApertureActivityBaseType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created SharedRF_ApertureActivityBaseType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SharedRF_ApertureActivityBaseType.
    */
  static UCI_EXPORT SharedRF_ApertureActivityBaseType& create(const SharedRF_ApertureActivityBaseType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SharedRF_ApertureActivityBaseType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The SharedRF_ApertureActivityBaseType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SharedRF_ApertureActivityBaseType& accessor);

  /** Returns this accessor's type constant, i.e. sharedRF_ApertureActivityBaseType.
    *
    * @return This accessor's type constant, i.e. sharedRF_ApertureActivityBaseType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::sharedRF_ApertureActivityBaseType;
  }

  /** Returns the version that was initialized from the uci:version attribute of SharedRF_ApertureActivityBaseType.
    *
    * @return The version that was initialized from the uci:version attribute of SharedRF_ApertureActivityBaseType.
    */
  static std::string getUCITypeVersion() {
    return "003.001.003.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SharedRF_ApertureActivityBaseType& accessor) = 0;

  /** This indicates activities that this Activity is dependent on. If the dependent Activity's Resource Allocation is
    * removed or never allocated, this Activity's Resource Allocation will be removed or not fulfilled. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::DependentActivityType, uci::type::accessorType::dependentActivityType> DependentActivity;

  /** Provides feedback on the percent access of the aperture resources being used by this activity. Required for
    * subsystems once resources are allocated. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ResourceStatusSelectedType, uci::type::accessorType::resourceStatusSelectedType> SharedApertureResourceStatus;

  /** Indicates performance metrics that provide the system insight regarding the progress of an activity, description of
    * the results of an activity and related stats. This is a list to provide reporting for all revisits between activity
    * messages. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::PerformanceMetricSetType, uci::type::accessorType::performanceMetricSetType> ActivityPerformanceFeedback;

  /** Returns a const reference to the bounded list identified by DependentActivity.
    *
    * @return A const reference to the bounded list identified by DependentActivity.
    */
  virtual const uci::type::SharedRF_ApertureActivityBaseType::DependentActivity& getDependentActivity() const = 0;

  /** Returns a reference to the bounded list identified by DependentActivity.
    *
    * @return A reference to the bounded list identified by DependentActivity.
    */
  virtual uci::type::SharedRF_ApertureActivityBaseType::DependentActivity& getDependentActivity() = 0;

  /** Sets the bounded list identified by DependentActivity.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SharedRF_ApertureActivityBaseType& setDependentActivity(const uci::type::SharedRF_ApertureActivityBaseType::DependentActivity& value) = 0;

  /** Returns a const reference to the bounded list identified by SharedApertureResourceStatus.
    *
    * @return A const reference to the bounded list identified by SharedApertureResourceStatus.
    */
  virtual const uci::type::SharedRF_ApertureActivityBaseType::SharedApertureResourceStatus& getSharedApertureResourceStatus() const = 0;

  /** Returns a reference to the bounded list identified by SharedApertureResourceStatus.
    *
    * @return A reference to the bounded list identified by SharedApertureResourceStatus.
    */
  virtual uci::type::SharedRF_ApertureActivityBaseType::SharedApertureResourceStatus& getSharedApertureResourceStatus() = 0;

  /** Sets the bounded list identified by SharedApertureResourceStatus.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SharedRF_ApertureActivityBaseType& setSharedApertureResourceStatus(const uci::type::SharedRF_ApertureActivityBaseType::SharedApertureResourceStatus& value) = 0;

  /** Returns a const reference to the bounded list identified by ActivityPerformanceFeedback.
    *
    * @return A const reference to the bounded list identified by ActivityPerformanceFeedback.
    */
  virtual const uci::type::SharedRF_ApertureActivityBaseType::ActivityPerformanceFeedback& getActivityPerformanceFeedback() const = 0;

  /** Returns a reference to the bounded list identified by ActivityPerformanceFeedback.
    *
    * @return A reference to the bounded list identified by ActivityPerformanceFeedback.
    */
  virtual uci::type::SharedRF_ApertureActivityBaseType::ActivityPerformanceFeedback& getActivityPerformanceFeedback() = 0;

  /** Sets the bounded list identified by ActivityPerformanceFeedback.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SharedRF_ApertureActivityBaseType& setActivityPerformanceFeedback(const uci::type::SharedRF_ApertureActivityBaseType::ActivityPerformanceFeedback& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SharedRF_ApertureActivityBaseType() {
  }

  /** The destructor [only available to derived classes]. */
  ~SharedRF_ApertureActivityBaseType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SharedRF_ApertureActivityBaseType to copy from.
    */
  SharedRF_ApertureActivityBaseType(const SharedRF_ApertureActivityBaseType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SharedRF_ApertureActivityBaseType to the contents of the
    * SharedRF_ApertureActivityBaseType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The SharedRF_ApertureActivityBaseType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this SharedRF_ApertureActivityBaseType.
    * @return A reference to this SharedRF_ApertureActivityBaseType.
    */
  SharedRF_ApertureActivityBaseType& operator=(const SharedRF_ApertureActivityBaseType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SHAREDRF_APERTUREACTIVITYBASETYPE_H

