/** @file EA_TargetType.h
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

#ifndef UCI_TYPE_EA_TARGETTYPE_H
#define UCI_TYPE_EA_TARGETTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "DateTimeType.h"
#include "EA_EmitterDataType.h"
#include "EA_PowerType.h"
#include "EA_TargetPointingType.h"

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
class EA_TargetType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EA_TargetType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EA_TargetType.
    */
  static UCI_EXPORT EA_TargetType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EA_TargetType initializing the data accessed by the new EA_TargetType using the data
    * accessed by the specified EA_TargetType (cloning).
    *
    * @param accessor The EA_TargetType that provides access to the data that is to be used to initialize the data accessed
    *      by the new created EA_TargetType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EA_TargetType.
    */
  static UCI_EXPORT EA_TargetType& create(const EA_TargetType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EA_TargetType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The EA_TargetType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EA_TargetType& accessor);

  /** Returns this accessor's type constant, i.e. eA_TargetType.
    *
    * @return This accessor's type constant, i.e. eA_TargetType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::eA_TargetType;
  }

  /** Returns the version that was initialized from the uci:version attribute of EA_TargetType.
    *
    * @return The version that was initialized from the uci:version attribute of EA_TargetType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EA_TargetType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by EmitterData.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by EmitterData.
    */
  virtual const uci::type::EA_EmitterDataType& getEmitterData() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by EmitterData.
    *
    * @return A reference to the accessor that provides access to the complex content identified by EmitterData.
    */
  virtual uci::type::EA_EmitterDataType& getEmitterData() = 0;

  /** Sets the complex content identified by EmitterData to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by EmitterData.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_TargetType& setEmitterData(const uci::type::EA_EmitterDataType& value) = 0;

  /** Returns whether the Element identified by EmitterData exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EmitterData is enabled or not.
    */
  virtual bool hasEmitterData() const = 0;

  /** Enables the Element identified by EmitterData.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by EmitterData.
    */
  virtual uci::type::EA_EmitterDataType& enableEmitterData(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by EmitterData.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_TargetType& clearEmitterData() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Pointing.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Pointing.
    */
  virtual const uci::type::EA_TargetPointingType& getPointing() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Pointing.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Pointing.
    */
  virtual uci::type::EA_TargetPointingType& getPointing() = 0;

  /** Sets the complex content identified by Pointing to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Pointing.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_TargetType& setPointing(const uci::type::EA_TargetPointingType& value) = 0;

  /** Returns whether the Element identified by Pointing exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Pointing is enabled or not.
    */
  virtual bool hasPointing() const = 0;

  /** Enables the Element identified by Pointing.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Pointing.
    */
  virtual uci::type::EA_TargetPointingType& enablePointing(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Pointing.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_TargetType& clearPointing() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Power.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Power.
    */
  virtual const uci::type::EA_PowerType& getPower() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Power.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Power.
    */
  virtual uci::type::EA_PowerType& getPower() = 0;

  /** Sets the complex content identified by Power to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Power.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_TargetType& setPower(const uci::type::EA_PowerType& value) = 0;

  /** Returns whether the Element identified by Power exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Power is enabled or not.
    */
  virtual bool hasPower() const = 0;

  /** Enables the Element identified by Power.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Power.
    */
  virtual uci::type::EA_PowerType& enablePower(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Power.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_TargetType& clearPower() = 0;

  /** Returns the value of the SimplePrimitive data type identified by LastSignalTimestamp.
    *
    * @return The value of the simple primitive data type identified by LastSignalTimestamp.
    */
  virtual uci::type::DateTimeTypeValue getLastSignalTimestamp() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by LastSignalTimestamp.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_TargetType& setLastSignalTimestamp(uci::type::DateTimeTypeValue value) = 0;

  /** Returns whether the Element identified by LastSignalTimestamp exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by LastSignalTimestamp is enabled or not.
    */
  virtual bool hasLastSignalTimestamp() const = 0;

  /** Clears (disabled) the Element identified by LastSignalTimestamp.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_TargetType& clearLastSignalTimestamp() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EA_TargetType() {
  }

  /** The destructor [only available to derived classes]. */
  ~EA_TargetType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EA_TargetType to copy from.
    */
  EA_TargetType(const EA_TargetType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EA_TargetType to the contents of the EA_TargetType on the right
    * hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The EA_TargetType on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this EA_TargetType.
    * @return A reference to this EA_TargetType.
    */
  EA_TargetType& operator=(const EA_TargetType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_EA_TARGETTYPE_H

