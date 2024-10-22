/** @file SAR_CapabilityType.h
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

#ifndef UCI_TYPE_SAR_CAPABILITYTYPE_H
#define UCI_TYPE_SAR_CAPABILITYTYPE_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CommandableCapabilityDeclarationType.h"
#include "ComponentFieldOfRegardType.h"
#include "FrequencyRangeType.h"
#include "NIIRS_Type.h"
#include "SAR_CapabilityEnum.h"
#include "SAR_CapabilityOptionsType.h"
#include "SAR_MessageOutputsEnum.h"
#include "SAR_SubCapabilityEnum.h"

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
class SAR_CapabilityType : public virtual CommandableCapabilityDeclarationType {
public:

  /** This method constructs a new SAR_CapabilityType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SAR_CapabilityType.
    */
  static UCI_EXPORT SAR_CapabilityType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SAR_CapabilityType initializing the data accessed by the new SAR_CapabilityType using
    * the data accessed by the specified SAR_CapabilityType (cloning).
    *
    * @param accessor The SAR_CapabilityType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created SAR_CapabilityType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SAR_CapabilityType.
    */
  static UCI_EXPORT SAR_CapabilityType& create(const SAR_CapabilityType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SAR_CapabilityType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The SAR_CapabilityType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SAR_CapabilityType& accessor);

  /** Returns this accessor's type constant, i.e. sAR_CapabilityType.
    *
    * @return This accessor's type constant, i.e. sAR_CapabilityType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::sAR_CapabilityType;
  }

  /** Returns the version that was initialized from the uci:version attribute of SAR_CapabilityType.
    *
    * @return The version that was initialized from the uci:version attribute of SAR_CapabilityType.
    */
  static std::string getUCITypeVersion() {
    return "003.001.003.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SAR_CapabilityType& accessor) = 0;

  /** Indicates a frequency band/range used by the Capability. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::FrequencyRangeType, uci::type::accessorType::frequencyRangeType> Band;

  /** Indicates a NIIRS level supported by the Capability. See annotations of the underlying type for further details.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::NIIRS_Type, uci::type::accessorType::nIIRS_Type> NIIRS_Level;

  /** Indicates a message that is an output of the Capability. See enumerated type annotations for details. List size for
    * this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum: 4]
    */
  typedef uci::base::BoundedList<uci::type::SAR_MessageOutputsEnum, uci::type::accessorType::sAR_MessageOutputsEnum> MessageOutput;

  /** Fields of Regard for each component in the capability. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH] */
  typedef uci::base::BoundedList<uci::type::ComponentFieldOfRegardType, uci::type::accessorType::componentFieldOfRegardType> ComponentFieldOfRegard;

  /** Returns a const reference to the value of the enumeration identified by CapabilityType.
    *
    * @return A const reference to the value of the enumeration identified by CapabilityType.
    */
  virtual const uci::type::SAR_CapabilityEnum& getCapabilityType() const = 0;

  /** Returns a reference to the value of the enumeration identified by CapabilityType.
    *
    * @return A reference to the value of the enumeration identified by CapabilityType.
    */
  virtual uci::type::SAR_CapabilityEnum& getCapabilityType() = 0;

  /** Sets the value of the enumeration identified by CapabilityType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityType& setCapabilityType(const uci::type::SAR_CapabilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by CapabilityType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityType& setCapabilityType(uci::type::SAR_CapabilityEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the value of the enumeration identified by SubCapabilityType.
    *
    * @return A const reference to the value of the enumeration identified by SubCapabilityType.
    */
  virtual const uci::type::SAR_SubCapabilityEnum& getSubCapabilityType() const = 0;

  /** Returns a reference to the value of the enumeration identified by SubCapabilityType.
    *
    * @return A reference to the value of the enumeration identified by SubCapabilityType.
    */
  virtual uci::type::SAR_SubCapabilityEnum& getSubCapabilityType() = 0;

  /** Sets the value of the enumeration identified by SubCapabilityType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityType& setSubCapabilityType(const uci::type::SAR_SubCapabilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by SubCapabilityType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityType& setSubCapabilityType(uci::type::SAR_SubCapabilityEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * CapabilityOptions.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      CapabilityOptions.
    */
  virtual const uci::type::SAR_CapabilityOptionsType& getCapabilityOptions() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CapabilityOptions.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CapabilityOptions.
    */
  virtual uci::type::SAR_CapabilityOptionsType& getCapabilityOptions() = 0;

  /** Sets the complex content identified by CapabilityOptions to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CapabilityOptions.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityType& setCapabilityOptions(const uci::type::SAR_CapabilityOptionsType& value) = 0;

  /** Returns a const reference to the bounded list identified by Band.
    *
    * @return A const reference to the bounded list identified by Band.
    */
  virtual const uci::type::SAR_CapabilityType::Band& getBand() const = 0;

  /** Returns a reference to the bounded list identified by Band.
    *
    * @return A reference to the bounded list identified by Band.
    */
  virtual uci::type::SAR_CapabilityType::Band& getBand() = 0;

  /** Sets the bounded list identified by Band.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityType& setBand(const uci::type::SAR_CapabilityType::Band& value) = 0;

  /** Returns a const reference to the bounded list identified by NIIRS_Level.
    *
    * @return A const reference to the bounded list identified by NIIRS_Level.
    */
  virtual const uci::type::SAR_CapabilityType::NIIRS_Level& getNIIRS_Level() const = 0;

  /** Returns a reference to the bounded list identified by NIIRS_Level.
    *
    * @return A reference to the bounded list identified by NIIRS_Level.
    */
  virtual uci::type::SAR_CapabilityType::NIIRS_Level& getNIIRS_Level() = 0;

  /** Sets the bounded list identified by NIIRS_Level.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityType& setNIIRS_Level(const uci::type::SAR_CapabilityType::NIIRS_Level& value) = 0;

  /** Returns a const reference to the bounded list identified by MessageOutput.
    *
    * @return A const reference to the bounded list identified by MessageOutput.
    */
  virtual const uci::type::SAR_CapabilityType::MessageOutput& getMessageOutput() const = 0;

  /** Returns a reference to the bounded list identified by MessageOutput.
    *
    * @return A reference to the bounded list identified by MessageOutput.
    */
  virtual uci::type::SAR_CapabilityType::MessageOutput& getMessageOutput() = 0;

  /** Sets the bounded list identified by MessageOutput.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityType& setMessageOutput(const uci::type::SAR_CapabilityType::MessageOutput& value) = 0;

  /** Returns a const reference to the bounded list identified by ComponentFieldOfRegard.
    *
    * @return A const reference to the bounded list identified by ComponentFieldOfRegard.
    */
  virtual const uci::type::SAR_CapabilityType::ComponentFieldOfRegard& getComponentFieldOfRegard() const = 0;

  /** Returns a reference to the bounded list identified by ComponentFieldOfRegard.
    *
    * @return A reference to the bounded list identified by ComponentFieldOfRegard.
    */
  virtual uci::type::SAR_CapabilityType::ComponentFieldOfRegard& getComponentFieldOfRegard() = 0;

  /** Sets the bounded list identified by ComponentFieldOfRegard.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SAR_CapabilityType& setComponentFieldOfRegard(const uci::type::SAR_CapabilityType::ComponentFieldOfRegard& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SAR_CapabilityType() {
  }

  /** The destructor [only available to derived classes]. */
  ~SAR_CapabilityType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SAR_CapabilityType to copy from.
    */
  SAR_CapabilityType(const SAR_CapabilityType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SAR_CapabilityType to the contents of the SAR_CapabilityType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The SAR_CapabilityType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this SAR_CapabilityType.
    * @return A reference to this SAR_CapabilityType.
    */
  SAR_CapabilityType& operator=(const SAR_CapabilityType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SAR_CAPABILITYTYPE_H

