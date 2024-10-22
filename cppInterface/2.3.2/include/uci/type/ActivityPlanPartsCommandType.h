/** @file ActivityPlanPartsCommandType.h
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

#ifndef UCI_TYPE_ACTIVITYPLANPARTSCOMMANDTYPE_H
#define UCI_TYPE_ACTIVITYPLANPARTSCOMMANDTYPE_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ActivityPlanPartsEnum.h"
#include "ActivityPlanPartsType.h"

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
class ActivityPlanPartsCommandType : public virtual ActivityPlanPartsType {
public:

  /** This method constructs a new ActivityPlanPartsCommandType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ActivityPlanPartsCommandType.
    */
  static UCI_EXPORT ActivityPlanPartsCommandType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ActivityPlanPartsCommandType initializing the data accessed by the new
    * ActivityPlanPartsCommandType using the data accessed by the specified ActivityPlanPartsCommandType (cloning).
    *
    * @param accessor The ActivityPlanPartsCommandType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created ActivityPlanPartsCommandType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ActivityPlanPartsCommandType.
    */
  static UCI_EXPORT ActivityPlanPartsCommandType& create(const ActivityPlanPartsCommandType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ActivityPlanPartsCommandType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The ActivityPlanPartsCommandType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ActivityPlanPartsCommandType& accessor);

  /** Returns this accessor's type constant, i.e. activityPlanPartsCommandType.
    *
    * @return This accessor's type constant, i.e. activityPlanPartsCommandType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::activityPlanPartsCommandType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ActivityPlanPartsCommandType.
    *
    * @return The version that was initialized from the uci:version attribute of ActivityPlanPartsCommandType.
    */
  static std::string getUCITypeVersion() {
    return "001.001.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ActivityPlanPartsCommandType& accessor) = 0;

  /** Indicates which Parts to include in the *ActivityPlan. A given *ActivityPlan planning process has a set of Parts
    * included. Those Parts are in the categories given in this element. Whole categories of the process can be
    * included/excluded with this element. Parts within the categories can be more granularly included/excluded using the
    * sibling elements. If a sibling element is given, an instance of this element with the corresponding category is
    * required. List size for this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 1;
    * Maximum: 9]
    */
  typedef uci::base::BoundedList<uci::type::ActivityPlanPartsEnum, uci::type::accessorType::activityPlanPartsEnum> OutputParts;

  /** Returns a const reference to the bounded list identified by OutputParts.
    *
    * @return A const reference to the bounded list identified by OutputParts.
    */
  virtual const uci::type::ActivityPlanPartsCommandType::OutputParts& getOutputParts() const = 0;

  /** Returns a reference to the bounded list identified by OutputParts.
    *
    * @return A reference to the bounded list identified by OutputParts.
    */
  virtual uci::type::ActivityPlanPartsCommandType::OutputParts& getOutputParts() = 0;

  /** Sets the bounded list identified by OutputParts.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ActivityPlanPartsCommandType& setOutputParts(const uci::type::ActivityPlanPartsCommandType::OutputParts& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ActivityPlanPartsCommandType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ActivityPlanPartsCommandType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ActivityPlanPartsCommandType to copy from.
    */
  ActivityPlanPartsCommandType(const ActivityPlanPartsCommandType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ActivityPlanPartsCommandType to the contents of the
    * ActivityPlanPartsCommandType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ActivityPlanPartsCommandType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this ActivityPlanPartsCommandType.
    * @return A reference to this ActivityPlanPartsCommandType.
    */
  ActivityPlanPartsCommandType& operator=(const ActivityPlanPartsCommandType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ACTIVITYPLANPARTSCOMMANDTYPE_H

