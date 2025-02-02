/** @file SMTI_CommandResponseType.h
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

#ifndef UCI_TYPE_SMTI_COMMANDRESPONSETYPE_H
#define UCI_TYPE_SMTI_COMMANDRESPONSETYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ProductOutputCommandSMTI_Type.h"
#include "SMTI_CapabilityEnum.h"
#include "SMTI_CollectionConstraintsType.h"
#include "SMTI_SubCapabilityEnum.h"

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
class SMTI_CommandResponseType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new SMTI_CommandResponseType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SMTI_CommandResponseType.
    */
  static UCI_EXPORT SMTI_CommandResponseType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SMTI_CommandResponseType initializing the data accessed by the new
    * SMTI_CommandResponseType using the data accessed by the specified SMTI_CommandResponseType (cloning).
    *
    * @param accessor The SMTI_CommandResponseType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created SMTI_CommandResponseType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SMTI_CommandResponseType.
    */
  static UCI_EXPORT SMTI_CommandResponseType& create(const SMTI_CommandResponseType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SMTI_CommandResponseType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The SMTI_CommandResponseType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SMTI_CommandResponseType& accessor);

  /** Returns this accessor's type constant, i.e. sMTI_CommandResponseType.
    *
    * @return This accessor's type constant, i.e. sMTI_CommandResponseType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::sMTI_CommandResponseType;
  }

  /** Returns the version that was initialized from the uci:version attribute of SMTI_CommandResponseType.
    *
    * @return The version that was initialized from the uci:version attribute of SMTI_CommandResponseType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SMTI_CommandResponseType& accessor) = 0;

  /** Indicates a required output Product of the Command. Only Products consistent with SMTI and supported by the commanded
    * SMTI Capability should be requested. If omitted, no output Product should be produced. See ProductTypeEnum for
    * further details. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ProductOutputCommandSMTI_Type, uci::type::accessorType::productOutputCommandSMTI_Type> ProductOutput;

  /** Returns a const reference to the value of the enumeration identified by Capability.
    *
    * @return A const reference to the value of the enumeration identified by Capability.
    */
  virtual const uci::type::SMTI_CapabilityEnum& getCapability() const = 0;

  /** Returns a reference to the value of the enumeration identified by Capability.
    *
    * @return A reference to the value of the enumeration identified by Capability.
    */
  virtual uci::type::SMTI_CapabilityEnum& getCapability() = 0;

  /** Sets the value of the enumeration identified by Capability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SMTI_CommandResponseType& setCapability(const uci::type::SMTI_CapabilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by Capability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SMTI_CommandResponseType& setCapability(uci::type::SMTI_CapabilityEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the value of the enumeration identified by SubCapability.
    *
    * @return A const reference to the value of the enumeration identified by SubCapability.
    */
  virtual const uci::type::SMTI_SubCapabilityEnum& getSubCapability() const = 0;

  /** Returns a reference to the value of the enumeration identified by SubCapability.
    *
    * @return A reference to the value of the enumeration identified by SubCapability.
    */
  virtual uci::type::SMTI_SubCapabilityEnum& getSubCapability() = 0;

  /** Sets the value of the enumeration identified by SubCapability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SMTI_CommandResponseType& setSubCapability(const uci::type::SMTI_SubCapabilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by SubCapability.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SMTI_CommandResponseType& setSubCapability(uci::type::SMTI_SubCapabilityEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by SubCapability exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SubCapability is enabled or not.
    */
  virtual bool hasSubCapability() const = 0;

  /** Enables the Element identified by SubCapability.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by SubCapability.
    */
  virtual uci::type::SMTI_SubCapabilityEnum& enableSubCapability(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SubCapability.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SMTI_CommandResponseType& clearSubCapability() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * CollectionConstraints.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      CollectionConstraints.
    */
  virtual const uci::type::SMTI_CollectionConstraintsType& getCollectionConstraints() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CollectionConstraints.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CollectionConstraints.
    */
  virtual uci::type::SMTI_CollectionConstraintsType& getCollectionConstraints() = 0;

  /** Sets the complex content identified by CollectionConstraints to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CollectionConstraints.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SMTI_CommandResponseType& setCollectionConstraints(const uci::type::SMTI_CollectionConstraintsType& value) = 0;

  /** Returns whether the Element identified by CollectionConstraints exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CollectionConstraints is enabled or not.
    */
  virtual bool hasCollectionConstraints() const = 0;

  /** Enables the Element identified by CollectionConstraints.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by CollectionConstraints.
    */
  virtual uci::type::SMTI_CollectionConstraintsType& enableCollectionConstraints(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by CollectionConstraints.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SMTI_CommandResponseType& clearCollectionConstraints() = 0;

  /** Returns a const reference to the bounded list identified by ProductOutput.
    *
    * @return A const reference to the bounded list identified by ProductOutput.
    */
  virtual const uci::type::SMTI_CommandResponseType::ProductOutput& getProductOutput() const = 0;

  /** Returns a reference to the bounded list identified by ProductOutput.
    *
    * @return A reference to the bounded list identified by ProductOutput.
    */
  virtual uci::type::SMTI_CommandResponseType::ProductOutput& getProductOutput() = 0;

  /** Sets the bounded list identified by ProductOutput.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SMTI_CommandResponseType& setProductOutput(const uci::type::SMTI_CommandResponseType::ProductOutput& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SMTI_CommandResponseType() {
  }

  /** The destructor [only available to derived classes]. */
  ~SMTI_CommandResponseType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SMTI_CommandResponseType to copy from.
    */
  SMTI_CommandResponseType(const SMTI_CommandResponseType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SMTI_CommandResponseType to the contents of the
    * SMTI_CommandResponseType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The SMTI_CommandResponseType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this SMTI_CommandResponseType.
    * @return A reference to this SMTI_CommandResponseType.
    */
  SMTI_CommandResponseType& operator=(const SMTI_CommandResponseType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SMTI_COMMANDRESPONSETYPE_H

