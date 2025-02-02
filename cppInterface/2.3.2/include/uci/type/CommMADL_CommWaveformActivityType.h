/** @file CommMADL_CommWaveformActivityType.h
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

#ifndef UCI_TYPE_COMMMADL_COMMWAVEFORMACTIVITYTYPE_H
#define UCI_TYPE_COMMMADL_COMMWAVEFORMACTIVITYTYPE_H

#include "../base/BooleanAccessor.h"
#include "../base/UnsignedShortAccessor.h"
#include "../base/export.h"
#include "CommMADL_AircraftTypeEnum.h"
#include "CommMADL_ControlType.h"
#include "CommMADL_LinkStatusListType.h"
#include "CommMADL_NetChangeStatusEnum.h"
#include "CommWaveformActivityPET.h"
#include "DayOfYearType.h"

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

/** This is a polymorphic extension which allows for the extension of the base CommWaveformActivityPET for communication
  * MADL parameters.
  */
class CommMADL_CommWaveformActivityType : public virtual CommWaveformActivityPET {
public:

  /** This method constructs a new CommMADL_CommWaveformActivityType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommMADL_CommWaveformActivityType.
    */
  static UCI_EXPORT CommMADL_CommWaveformActivityType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CommMADL_CommWaveformActivityType initializing the data accessed by the new
    * CommMADL_CommWaveformActivityType using the data accessed by the specified CommMADL_CommWaveformActivityType
    * (cloning).
    *
    * @param accessor The CommMADL_CommWaveformActivityType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created CommMADL_CommWaveformActivityType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CommMADL_CommWaveformActivityType.
    */
  static UCI_EXPORT CommMADL_CommWaveformActivityType& create(const CommMADL_CommWaveformActivityType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CommMADL_CommWaveformActivityType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The CommMADL_CommWaveformActivityType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CommMADL_CommWaveformActivityType& accessor);

  /** Returns this accessor's type constant, i.e. commMADL_CommWaveformActivityType.
    *
    * @return This accessor's type constant, i.e. commMADL_CommWaveformActivityType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::commMADL_CommWaveformActivityType;
  }

  /** Returns the version that was initialized from the uci:version attribute of CommMADL_CommWaveformActivityType.
    *
    * @return The version that was initialized from the uci:version attribute of CommMADL_CommWaveformActivityType.
    */
  static std::string getUCITypeVersion() {
    return "002.001.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CommMADL_CommWaveformActivityType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SettingsStatus.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SettingsStatus.
    */
  virtual const uci::type::CommMADL_ControlType& getSettingsStatus() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SettingsStatus.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SettingsStatus.
    */
  virtual uci::type::CommMADL_ControlType& getSettingsStatus() = 0;

  /** Sets the complex content identified by SettingsStatus to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SettingsStatus.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommMADL_CommWaveformActivityType& setSettingsStatus(const uci::type::CommMADL_ControlType& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by MADL_UniqueIdentifier.
    *
    * @return The value of the simple primitive data type identified by MADL_UniqueIdentifier.
    */
  virtual xs::UnsignedShort getMADL_UniqueIdentifier() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by MADL_UniqueIdentifier.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommMADL_CommWaveformActivityType& setMADL_UniqueIdentifier(xs::UnsignedShort value) = 0;

  /** Returns a const reference to the value of the enumeration identified by AircraftType.
    *
    * @return A const reference to the value of the enumeration identified by AircraftType.
    */
  virtual const uci::type::CommMADL_AircraftTypeEnum& getAircraftType() const = 0;

  /** Returns a reference to the value of the enumeration identified by AircraftType.
    *
    * @return A reference to the value of the enumeration identified by AircraftType.
    */
  virtual uci::type::CommMADL_AircraftTypeEnum& getAircraftType() = 0;

  /** Sets the value of the enumeration identified by AircraftType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommMADL_CommWaveformActivityType& setAircraftType(const uci::type::CommMADL_AircraftTypeEnum& value) = 0;

  /** Sets the value of the enumeration identified by AircraftType.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommMADL_CommWaveformActivityType& setAircraftType(uci::type::CommMADL_AircraftTypeEnum::EnumerationItem value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by MADL_DayOfYearApplied.
    *
    * @return The value of the simple primitive data type identified by MADL_DayOfYearApplied.
    */
  virtual uci::type::DayOfYearTypeValue getMADL_DayOfYearApplied() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by MADL_DayOfYearApplied.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommMADL_CommWaveformActivityType& setMADL_DayOfYearApplied(uci::type::DayOfYearTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by VoiceCapable.
    *
    * @return The value of the simple primitive data type identified by VoiceCapable.
    */
  virtual xs::Boolean getVoiceCapable() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by VoiceCapable.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommMADL_CommWaveformActivityType& setVoiceCapable(xs::Boolean value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by LinkStatus.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by LinkStatus.
    */
  virtual const uci::type::CommMADL_LinkStatusListType& getLinkStatus() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by LinkStatus.
    *
    * @return A reference to the accessor that provides access to the complex content identified by LinkStatus.
    */
  virtual uci::type::CommMADL_LinkStatusListType& getLinkStatus() = 0;

  /** Sets the complex content identified by LinkStatus to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by LinkStatus.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommMADL_CommWaveformActivityType& setLinkStatus(const uci::type::CommMADL_LinkStatusListType& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by NetChangeStatus.
    *
    * @return A const reference to the value of the enumeration identified by NetChangeStatus.
    */
  virtual const uci::type::CommMADL_NetChangeStatusEnum& getNetChangeStatus() const = 0;

  /** Returns a reference to the value of the enumeration identified by NetChangeStatus.
    *
    * @return A reference to the value of the enumeration identified by NetChangeStatus.
    */
  virtual uci::type::CommMADL_NetChangeStatusEnum& getNetChangeStatus() = 0;

  /** Sets the value of the enumeration identified by NetChangeStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommMADL_CommWaveformActivityType& setNetChangeStatus(const uci::type::CommMADL_NetChangeStatusEnum& value) = 0;

  /** Sets the value of the enumeration identified by NetChangeStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommMADL_CommWaveformActivityType& setNetChangeStatus(uci::type::CommMADL_NetChangeStatusEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by NetChangeStatus exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by NetChangeStatus is enabled or not.
    */
  virtual bool hasNetChangeStatus() const = 0;

  /** Enables the Element identified by NetChangeStatus.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by NetChangeStatus.
    */
  virtual uci::type::CommMADL_NetChangeStatusEnum& enableNetChangeStatus(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by NetChangeStatus.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CommMADL_CommWaveformActivityType& clearNetChangeStatus() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CommMADL_CommWaveformActivityType() {
  }

  /** The destructor [only available to derived classes]. */
  ~CommMADL_CommWaveformActivityType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CommMADL_CommWaveformActivityType to copy from.
    */
  CommMADL_CommWaveformActivityType(const CommMADL_CommWaveformActivityType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CommMADL_CommWaveformActivityType to the contents of the
    * CommMADL_CommWaveformActivityType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The CommMADL_CommWaveformActivityType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this CommMADL_CommWaveformActivityType.
    * @return A reference to this CommMADL_CommWaveformActivityType.
    */
  CommMADL_CommWaveformActivityType& operator=(const CommMADL_CommWaveformActivityType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_COMMMADL_COMMWAVEFORMACTIVITYTYPE_H

