/** @file PlannedCommActionType.h
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

#ifndef UCI_TYPE_PLANNEDCOMMACTIONTYPE_H
#define UCI_TYPE_PLANNEDCOMMACTIONTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "CommConfigurationID_Type.h"
#include "CommConfigurationStateEnum.h"
#include "PlannedCommCapabilityType.h"
#include "PlannedSubsystemCommandType.h"

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
class PlannedCommActionType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PlannedCommActionType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PlannedCommActionType.
    */
  static UCI_EXPORT PlannedCommActionType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PlannedCommActionType initializing the data accessed by the new PlannedCommActionType
    * using the data accessed by the specified PlannedCommActionType (cloning).
    *
    * @param accessor The PlannedCommActionType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created PlannedCommActionType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PlannedCommActionType.
    */
  static UCI_EXPORT PlannedCommActionType& create(const PlannedCommActionType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PlannedCommActionType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The PlannedCommActionType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PlannedCommActionType& accessor);

  /** Returns this accessor's type constant, i.e. plannedCommActionType.
    *
    * @return This accessor's type constant, i.e. plannedCommActionType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::plannedCommActionType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PlannedCommActionType.
    *
    * @return The version that was initialized from the uci:version attribute of PlannedCommActionType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PlannedCommActionType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ConfigurationID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ConfigurationID.
    */
  virtual const uci::type::CommConfigurationID_Type& getConfigurationID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ConfigurationID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ConfigurationID.
    */
  virtual uci::type::CommConfigurationID_Type& getConfigurationID() = 0;

  /** Sets the complex content identified by ConfigurationID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ConfigurationID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlannedCommActionType& setConfigurationID(const uci::type::CommConfigurationID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by ConfigurationState.
    *
    * @return A const reference to the value of the enumeration identified by ConfigurationState.
    */
  virtual const uci::type::CommConfigurationStateEnum& getConfigurationState() const = 0;

  /** Returns a reference to the value of the enumeration identified by ConfigurationState.
    *
    * @return A reference to the value of the enumeration identified by ConfigurationState.
    */
  virtual uci::type::CommConfigurationStateEnum& getConfigurationState() = 0;

  /** Sets the value of the enumeration identified by ConfigurationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlannedCommActionType& setConfigurationState(const uci::type::CommConfigurationStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by ConfigurationState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlannedCommActionType& setConfigurationState(uci::type::CommConfigurationStateEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * PlannedSubsystemCommand.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      PlannedSubsystemCommand.
    */
  virtual const uci::type::PlannedSubsystemCommandType& getPlannedSubsystemCommand() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * PlannedSubsystemCommand.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      PlannedSubsystemCommand.
    */
  virtual uci::type::PlannedSubsystemCommandType& getPlannedSubsystemCommand() = 0;

  /** Sets the complex content identified by PlannedSubsystemCommand to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PlannedSubsystemCommand.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlannedCommActionType& setPlannedSubsystemCommand(const uci::type::PlannedSubsystemCommandType& value) = 0;

  /** Returns whether the Element identified by PlannedSubsystemCommand exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PlannedSubsystemCommand is enabled or not.
    */
  virtual bool hasPlannedSubsystemCommand() const = 0;

  /** Enables the Element identified by PlannedSubsystemCommand.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      PlannedSubsystemCommand.
    */
  virtual uci::type::PlannedSubsystemCommandType& enablePlannedSubsystemCommand(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PlannedSubsystemCommand.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlannedCommActionType& clearPlannedSubsystemCommand() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * PlannedCommCapability.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      PlannedCommCapability.
    */
  virtual const uci::type::PlannedCommCapabilityType& getPlannedCommCapability() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by PlannedCommCapability.
    *
    * @return A reference to the accessor that provides access to the complex content identified by PlannedCommCapability.
    */
  virtual uci::type::PlannedCommCapabilityType& getPlannedCommCapability() = 0;

  /** Sets the complex content identified by PlannedCommCapability to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PlannedCommCapability.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlannedCommActionType& setPlannedCommCapability(const uci::type::PlannedCommCapabilityType& value) = 0;

  /** Returns whether the Element identified by PlannedCommCapability exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PlannedCommCapability is enabled or not.
    */
  virtual bool hasPlannedCommCapability() const = 0;

  /** Enables the Element identified by PlannedCommCapability.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by PlannedCommCapability.
    */
  virtual uci::type::PlannedCommCapabilityType& enablePlannedCommCapability(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PlannedCommCapability.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlannedCommActionType& clearPlannedCommCapability() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PlannedCommActionType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PlannedCommActionType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PlannedCommActionType to copy from.
    */
  PlannedCommActionType(const PlannedCommActionType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PlannedCommActionType to the contents of the PlannedCommActionType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The PlannedCommActionType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this PlannedCommActionType.
    * @return A reference to this PlannedCommActionType.
    */
  PlannedCommActionType& operator=(const PlannedCommActionType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PLANNEDCOMMACTIONTYPE_H

