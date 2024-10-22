/** @file DoorCommandType.h
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

#ifndef UCI_TYPE_DOORCOMMANDTYPE_H
#define UCI_TYPE_DOORCOMMANDTYPE_H

#include "../base/export.h"
#include "DoorCommandChoiceType.h"
#include "SupportCapabilityCommandBaseType.h"

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

/** This type represents a command to control a door that is relevant to mission operations. */
class DoorCommandType : public virtual SupportCapabilityCommandBaseType {
public:

  /** This method constructs a new DoorCommandType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DoorCommandType.
    */
  static UCI_EXPORT DoorCommandType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DoorCommandType initializing the data accessed by the new DoorCommandType using the data
    * accessed by the specified DoorCommandType (cloning).
    *
    * @param accessor The DoorCommandType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created DoorCommandType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DoorCommandType.
    */
  static UCI_EXPORT DoorCommandType& create(const DoorCommandType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DoorCommandType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The DoorCommandType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DoorCommandType& accessor);

  /** Returns this accessor's type constant, i.e. doorCommandType.
    *
    * @return This accessor's type constant, i.e. doorCommandType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::doorCommandType;
  }

  /** Returns the version that was initialized from the uci:version attribute of DoorCommandType.
    *
    * @return The version that was initialized from the uci:version attribute of DoorCommandType.
    */
  static std::string getUCITypeVersion() {
    return "001.001.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DoorCommandType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by DoorCommand.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by DoorCommand.
    */
  virtual const uci::type::DoorCommandChoiceType& getDoorCommand() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DoorCommand.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DoorCommand.
    */
  virtual uci::type::DoorCommandChoiceType& getDoorCommand() = 0;

  /** Sets the complex content identified by DoorCommand to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DoorCommand.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DoorCommandType& setDoorCommand(const uci::type::DoorCommandChoiceType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DoorCommandType() {
  }

  /** The destructor [only available to derived classes]. */
  ~DoorCommandType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DoorCommandType to copy from.
    */
  DoorCommandType(const DoorCommandType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DoorCommandType to the contents of the DoorCommandType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The DoorCommandType on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this DoorCommandType.
    * @return A reference to this DoorCommandType.
    */
  DoorCommandType& operator=(const DoorCommandType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DOORCOMMANDTYPE_H

