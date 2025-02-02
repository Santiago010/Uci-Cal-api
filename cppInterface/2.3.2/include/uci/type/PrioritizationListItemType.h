/** @file PrioritizationListItemType.h
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

#ifndef UCI_TYPE_PRIORITIZATIONLISTITEMTYPE_H
#define UCI_TYPE_PRIORITIZATIONLISTITEMTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "IdentityKindInstanceType.h"
#include "ObjectCorrelationType.h"
#include "PrioritizationType.h"

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

/** Provides the container to specify how the object is prioritized. */
class PrioritizationListItemType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PrioritizationListItemType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PrioritizationListItemType.
    */
  static UCI_EXPORT PrioritizationListItemType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PrioritizationListItemType initializing the data accessed by the new
    * PrioritizationListItemType using the data accessed by the specified PrioritizationListItemType (cloning).
    *
    * @param accessor The PrioritizationListItemType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created PrioritizationListItemType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PrioritizationListItemType.
    */
  static UCI_EXPORT PrioritizationListItemType& create(const PrioritizationListItemType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PrioritizationListItemType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The PrioritizationListItemType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PrioritizationListItemType& accessor);

  /** Returns this accessor's type constant, i.e. prioritizationListItemType.
    *
    * @return This accessor's type constant, i.e. prioritizationListItemType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::prioritizationListItemType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PrioritizationListItemType.
    *
    * @return The version that was initialized from the uci:version attribute of PrioritizationListItemType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PrioritizationListItemType& accessor) = 0;

  /** Indicates the priority of the item. If priority for any child PriorityType is given, then omitted PriorityTypes for
    * the sibling Subject have no/zero priority. No duplicates allowed; at most one instance of each of the child
    * PriorityTypes is allowed. If the child PriorityType is not used, only one instance is allowed. [Occurrences: Minimum:
    * 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::PrioritizationType, uci::type::accessorType::prioritizationType> Priority;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Subject.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Subject.
    */
  virtual const uci::type::IdentityKindInstanceType& getSubject() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Subject.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Subject.
    */
  virtual uci::type::IdentityKindInstanceType& getSubject() = 0;

  /** Sets the complex content identified by Subject to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Subject.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PrioritizationListItemType& setSubject(const uci::type::IdentityKindInstanceType& value) = 0;

  /** Returns a const reference to the bounded list identified by Priority.
    *
    * @return A const reference to the bounded list identified by Priority.
    */
  virtual const uci::type::PrioritizationListItemType::Priority& getPriority() const = 0;

  /** Returns a reference to the bounded list identified by Priority.
    *
    * @return A reference to the bounded list identified by Priority.
    */
  virtual uci::type::PrioritizationListItemType::Priority& getPriority() = 0;

  /** Sets the bounded list identified by Priority.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PrioritizationListItemType& setPriority(const uci::type::PrioritizationListItemType::Priority& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ObjectCorrelation.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ObjectCorrelation.
    */
  virtual const uci::type::ObjectCorrelationType& getObjectCorrelation() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ObjectCorrelation.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ObjectCorrelation.
    */
  virtual uci::type::ObjectCorrelationType& getObjectCorrelation() = 0;

  /** Sets the complex content identified by ObjectCorrelation to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ObjectCorrelation.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PrioritizationListItemType& setObjectCorrelation(const uci::type::ObjectCorrelationType& value) = 0;

  /** Returns whether the Element identified by ObjectCorrelation exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ObjectCorrelation is enabled or not.
    */
  virtual bool hasObjectCorrelation() const = 0;

  /** Enables the Element identified by ObjectCorrelation.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ObjectCorrelation.
    */
  virtual uci::type::ObjectCorrelationType& enableObjectCorrelation(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ObjectCorrelation.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PrioritizationListItemType& clearObjectCorrelation() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PrioritizationListItemType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PrioritizationListItemType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PrioritizationListItemType to copy from.
    */
  PrioritizationListItemType(const PrioritizationListItemType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PrioritizationListItemType to the contents of the
    * PrioritizationListItemType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The PrioritizationListItemType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this PrioritizationListItemType.
    * @return A reference to this PrioritizationListItemType.
    */
  PrioritizationListItemType& operator=(const PrioritizationListItemType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PRIORITIZATIONLISTITEMTYPE_H

