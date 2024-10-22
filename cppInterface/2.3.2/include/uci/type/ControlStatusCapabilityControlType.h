/** @file ControlStatusCapabilityControlType.h
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

#ifndef UCI_TYPE_CONTROLSTATUSCAPABILITYCONTROLTYPE_H
#define UCI_TYPE_CONTROLSTATUSCAPABILITYCONTROLTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CapabilityControlInterfacesEnum.h"
#include "CapabilityID_Type.h"
#include "CapabilityManagerType.h"
#include "PrimaryControllerType.h"
#include "SecondaryControllerType.h"

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
class ControlStatusCapabilityControlType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ControlStatusCapabilityControlType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ControlStatusCapabilityControlType.
    */
  static UCI_EXPORT ControlStatusCapabilityControlType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ControlStatusCapabilityControlType initializing the data accessed by the new
    * ControlStatusCapabilityControlType using the data accessed by the specified ControlStatusCapabilityControlType
    * (cloning).
    *
    * @param accessor The ControlStatusCapabilityControlType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created ControlStatusCapabilityControlType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ControlStatusCapabilityControlType.
    */
  static UCI_EXPORT ControlStatusCapabilityControlType& create(const ControlStatusCapabilityControlType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ControlStatusCapabilityControlType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The ControlStatusCapabilityControlType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ControlStatusCapabilityControlType& accessor);

  /** Returns this accessor's type constant, i.e. controlStatusCapabilityControlType.
    *
    * @return This accessor's type constant, i.e. controlStatusCapabilityControlType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::controlStatusCapabilityControlType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ControlStatusCapabilityControlType.
    *
    * @return The version that was initialized from the uci:version attribute of ControlStatusCapabilityControlType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ControlStatusCapabilityControlType& accessor) = 0;

  /** Indicates a secondary controller, generally an operator/HCIs, of the Capability. If this field is omitted then either
    * the Capability is not operational or currently has no secondary controllers. See ControlTypeEnum annotations for
    * further details. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::SecondaryControllerType, uci::type::accessorType::secondaryControllerType> SecondaryController;

  /** Indicates a Capability Manager (an automation service, also known as a Resource Manager) that is allowed to
    * autonomously command the Capability. Only the primary controller is allowed to attach Capability Managers, using the
    * ControlInterfacesCommand. See ControlTypeEnum annotations for further details. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::CapabilityManagerType, uci::type::accessorType::capabilityManagerType> CapabilityManager;

  /** Enumerated list of UCI Capability control interfaces/messages this Capability will currently accept. See enumeration
    * annotations. If not present, then no commands are currently accepted. Note that the *Plan related enumerations are
    * closely related to the ControlStatus...MissionControl.PlannedControlInterface but does not override them. This
    * element is an indication of the controls that the primary controller currently has enabled. If the
    * PlannedControlInterface element or elements indicates *Plan related interfaces are disabled while this element
    * indicates MissionPlan related interfaces are being accepted, it is an indication that the primary controller isn't
    * currently allowing Capability control via a *Plan but will potentially enable it at an appropriate time in the
    * future. List size for this element is based on "Select All That Apply" condition. [Occurrences: Minimum: 0; Maximum:
    * 7]
    */
  typedef uci::base::BoundedList<uci::type::CapabilityControlInterfacesEnum, uci::type::accessorType::capabilityControlInterfacesEnum> AcceptedInterface;

  /** Returns a const reference to the accessor that provides access to the complex content identified by CapabilityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by CapabilityID.
    */
  virtual const uci::type::CapabilityID_Type& getCapabilityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CapabilityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CapabilityID.
    */
  virtual uci::type::CapabilityID_Type& getCapabilityID() = 0;

  /** Sets the complex content identified by CapabilityID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CapabilityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ControlStatusCapabilityControlType& setCapabilityID(const uci::type::CapabilityID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * PrimaryController.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      PrimaryController.
    */
  virtual const uci::type::PrimaryControllerType& getPrimaryController() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by PrimaryController.
    *
    * @return A reference to the accessor that provides access to the complex content identified by PrimaryController.
    */
  virtual uci::type::PrimaryControllerType& getPrimaryController() = 0;

  /** Sets the complex content identified by PrimaryController to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PrimaryController.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ControlStatusCapabilityControlType& setPrimaryController(const uci::type::PrimaryControllerType& value) = 0;

  /** Returns whether the Element identified by PrimaryController exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PrimaryController is enabled or not.
    */
  virtual bool hasPrimaryController() const = 0;

  /** Enables the Element identified by PrimaryController.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by PrimaryController.
    */
  virtual uci::type::PrimaryControllerType& enablePrimaryController(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PrimaryController.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ControlStatusCapabilityControlType& clearPrimaryController() = 0;

  /** Returns a const reference to the bounded list identified by SecondaryController.
    *
    * @return A const reference to the bounded list identified by SecondaryController.
    */
  virtual const uci::type::ControlStatusCapabilityControlType::SecondaryController& getSecondaryController() const = 0;

  /** Returns a reference to the bounded list identified by SecondaryController.
    *
    * @return A reference to the bounded list identified by SecondaryController.
    */
  virtual uci::type::ControlStatusCapabilityControlType::SecondaryController& getSecondaryController() = 0;

  /** Sets the bounded list identified by SecondaryController.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ControlStatusCapabilityControlType& setSecondaryController(const uci::type::ControlStatusCapabilityControlType::SecondaryController& value) = 0;

  /** Returns a const reference to the bounded list identified by CapabilityManager.
    *
    * @return A const reference to the bounded list identified by CapabilityManager.
    */
  virtual const uci::type::ControlStatusCapabilityControlType::CapabilityManager& getCapabilityManager() const = 0;

  /** Returns a reference to the bounded list identified by CapabilityManager.
    *
    * @return A reference to the bounded list identified by CapabilityManager.
    */
  virtual uci::type::ControlStatusCapabilityControlType::CapabilityManager& getCapabilityManager() = 0;

  /** Sets the bounded list identified by CapabilityManager.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ControlStatusCapabilityControlType& setCapabilityManager(const uci::type::ControlStatusCapabilityControlType::CapabilityManager& value) = 0;

  /** Returns a const reference to the bounded list identified by AcceptedInterface.
    *
    * @return A const reference to the bounded list identified by AcceptedInterface.
    */
  virtual const uci::type::ControlStatusCapabilityControlType::AcceptedInterface& getAcceptedInterface() const = 0;

  /** Returns a reference to the bounded list identified by AcceptedInterface.
    *
    * @return A reference to the bounded list identified by AcceptedInterface.
    */
  virtual uci::type::ControlStatusCapabilityControlType::AcceptedInterface& getAcceptedInterface() = 0;

  /** Sets the bounded list identified by AcceptedInterface.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ControlStatusCapabilityControlType& setAcceptedInterface(const uci::type::ControlStatusCapabilityControlType::AcceptedInterface& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ControlStatusCapabilityControlType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ControlStatusCapabilityControlType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ControlStatusCapabilityControlType to copy from.
    */
  ControlStatusCapabilityControlType(const ControlStatusCapabilityControlType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ControlStatusCapabilityControlType to the contents of the
    * ControlStatusCapabilityControlType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ControlStatusCapabilityControlType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this ControlStatusCapabilityControlType.
    * @return A reference to this ControlStatusCapabilityControlType.
    */
  ControlStatusCapabilityControlType& operator=(const ControlStatusCapabilityControlType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_CONTROLSTATUSCAPABILITYCONTROLTYPE_H

