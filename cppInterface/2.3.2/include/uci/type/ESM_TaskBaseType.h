/** @file ESM_TaskBaseType.h
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

#ifndef UCI_TYPE_ESM_TASKBASETYPE_H
#define UCI_TYPE_ESM_TASKBASETYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ESM_SubCapabilityEnum.h"
#include "ProductOutputCommandBasicType.h"

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
class ESM_TaskBaseType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ESM_TaskBaseType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ESM_TaskBaseType.
    */
  static UCI_EXPORT ESM_TaskBaseType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ESM_TaskBaseType initializing the data accessed by the new ESM_TaskBaseType using the
    * data accessed by the specified ESM_TaskBaseType (cloning).
    *
    * @param accessor The ESM_TaskBaseType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created ESM_TaskBaseType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ESM_TaskBaseType.
    */
  static UCI_EXPORT ESM_TaskBaseType& create(const ESM_TaskBaseType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ESM_TaskBaseType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The ESM_TaskBaseType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ESM_TaskBaseType& accessor);

  /** Returns this accessor's type constant, i.e. eSM_TaskBaseType.
    *
    * @return This accessor's type constant, i.e. eSM_TaskBaseType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::eSM_TaskBaseType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ESM_TaskBaseType.
    *
    * @return The version that was initialized from the uci:version attribute of ESM_TaskBaseType.
    */
  static std::string getUCITypeVersion() {
    return "000.001.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ESM_TaskBaseType& accessor) = 0;

  /** Indicates a specific ESM SubCapability being requested by the Task. List size for this element is based on "Select
    * All That Apply" condition. [Occurrences: Minimum: 1; Maximum: 12]
    */
  typedef uci::base::BoundedList<uci::type::ESM_SubCapabilityEnum, uci::type::accessorType::eSM_SubCapabilityEnum> SubCapabilityType;

  /** Indicates a required output Product of the Task. See ProductTypeEnum for further details. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ProductOutputCommandBasicType, uci::type::accessorType::productOutputCommandBasicType> Output;

  /** Returns a const reference to the bounded list identified by SubCapabilityType.
    *
    * @return A const reference to the bounded list identified by SubCapabilityType.
    */
  virtual const uci::type::ESM_TaskBaseType::SubCapabilityType& getSubCapabilityType() const = 0;

  /** Returns a reference to the bounded list identified by SubCapabilityType.
    *
    * @return A reference to the bounded list identified by SubCapabilityType.
    */
  virtual uci::type::ESM_TaskBaseType::SubCapabilityType& getSubCapabilityType() = 0;

  /** Sets the bounded list identified by SubCapabilityType.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_TaskBaseType& setSubCapabilityType(const uci::type::ESM_TaskBaseType::SubCapabilityType& value) = 0;

  /** Returns a const reference to the bounded list identified by Output.
    *
    * @return A const reference to the bounded list identified by Output.
    */
  virtual const uci::type::ESM_TaskBaseType::Output& getOutput() const = 0;

  /** Returns a reference to the bounded list identified by Output.
    *
    * @return A reference to the bounded list identified by Output.
    */
  virtual uci::type::ESM_TaskBaseType::Output& getOutput() = 0;

  /** Sets the bounded list identified by Output.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ESM_TaskBaseType& setOutput(const uci::type::ESM_TaskBaseType::Output& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ESM_TaskBaseType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ESM_TaskBaseType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ESM_TaskBaseType to copy from.
    */
  ESM_TaskBaseType(const ESM_TaskBaseType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ESM_TaskBaseType to the contents of the ESM_TaskBaseType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The ESM_TaskBaseType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this ESM_TaskBaseType.
    * @return A reference to this ESM_TaskBaseType.
    */
  ESM_TaskBaseType& operator=(const ESM_TaskBaseType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ESM_TASKBASETYPE_H

