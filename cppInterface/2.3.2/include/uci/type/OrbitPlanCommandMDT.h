/** @file OrbitPlanCommandMDT.h
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

#ifndef UCI_TYPE_ORBITPLANCOMMANDMDT_H
#define UCI_TYPE_ORBITPLANCOMMANDMDT_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/export.h"
#include "CommandStateEnum.h"
#include "MissionPlanCommandID_Type.h"
#include "OrbitPlanCommandID_Type.h"
#include "OrbitPlanInputsType.h"

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
class OrbitPlanCommandMDT : public virtual uci::base::Accessor {
public:

  /** This method constructs a new OrbitPlanCommandMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitPlanCommandMDT.
    */
  static UCI_EXPORT OrbitPlanCommandMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new OrbitPlanCommandMDT initializing the data accessed by the new OrbitPlanCommandMDT using
    * the data accessed by the specified OrbitPlanCommandMDT (cloning).
    *
    * @param accessor The OrbitPlanCommandMDT that provides access to the data that is to be used to initialize the data
    *      accessed by the new created OrbitPlanCommandMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitPlanCommandMDT.
    */
  static UCI_EXPORT OrbitPlanCommandMDT& create(const OrbitPlanCommandMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified OrbitPlanCommandMDT. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The OrbitPlanCommandMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(OrbitPlanCommandMDT& accessor);

  /** Returns this accessor's type constant, i.e. orbitPlanCommandMDT.
    *
    * @return This accessor's type constant, i.e. orbitPlanCommandMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::orbitPlanCommandMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of OrbitPlanCommandMDT.
    *
    * @return The version that was initialized from the uci:version attribute of OrbitPlanCommandMDT.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const OrbitPlanCommandMDT& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by CommandID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by CommandID.
    */
  virtual const uci::type::OrbitPlanCommandID_Type& getCommandID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by CommandID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by CommandID.
    */
  virtual uci::type::OrbitPlanCommandID_Type& getCommandID() = 0;

  /** Sets the complex content identified by CommandID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CommandID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitPlanCommandMDT& setCommandID(const uci::type::OrbitPlanCommandID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * ParentMissionPlanCommandID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      ParentMissionPlanCommandID.
    */
  virtual const uci::type::MissionPlanCommandID_Type& getParentMissionPlanCommandID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * ParentMissionPlanCommandID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ParentMissionPlanCommandID.
    */
  virtual uci::type::MissionPlanCommandID_Type& getParentMissionPlanCommandID() = 0;

  /** Sets the complex content identified by ParentMissionPlanCommandID to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ParentMissionPlanCommandID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitPlanCommandMDT& setParentMissionPlanCommandID(const uci::type::MissionPlanCommandID_Type& value) = 0;

  /** Returns whether the Element identified by ParentMissionPlanCommandID exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ParentMissionPlanCommandID is enabled or not.
    */
  virtual bool hasParentMissionPlanCommandID() const = 0;

  /** Enables the Element identified by ParentMissionPlanCommandID.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      ParentMissionPlanCommandID.
    */
  virtual uci::type::MissionPlanCommandID_Type& enableParentMissionPlanCommandID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ParentMissionPlanCommandID.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitPlanCommandMDT& clearParentMissionPlanCommandID() = 0;

  /** Returns a const reference to the value of the enumeration identified by CommandState.
    *
    * @return A const reference to the value of the enumeration identified by CommandState.
    */
  virtual const uci::type::CommandStateEnum& getCommandState() const = 0;

  /** Returns a reference to the value of the enumeration identified by CommandState.
    *
    * @return A reference to the value of the enumeration identified by CommandState.
    */
  virtual uci::type::CommandStateEnum& getCommandState() = 0;

  /** Sets the value of the enumeration identified by CommandState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitPlanCommandMDT& setCommandState(const uci::type::CommandStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by CommandState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitPlanCommandMDT& setCommandState(uci::type::CommandStateEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Inputs.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Inputs.
    */
  virtual const uci::type::OrbitPlanInputsType& getInputs() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Inputs.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Inputs.
    */
  virtual uci::type::OrbitPlanInputsType& getInputs() = 0;

  /** Sets the complex content identified by Inputs to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Inputs.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitPlanCommandMDT& setInputs(const uci::type::OrbitPlanInputsType& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by ForPlanningUseOnly.
    *
    * @return The value of the simple primitive data type identified by ForPlanningUseOnly.
    */
  virtual xs::Boolean getForPlanningUseOnly() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ForPlanningUseOnly.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitPlanCommandMDT& setForPlanningUseOnly(xs::Boolean value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  OrbitPlanCommandMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~OrbitPlanCommandMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OrbitPlanCommandMDT to copy from.
    */
  OrbitPlanCommandMDT(const OrbitPlanCommandMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this OrbitPlanCommandMDT to the contents of the OrbitPlanCommandMDT on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The OrbitPlanCommandMDT on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this OrbitPlanCommandMDT.
    * @return A reference to this OrbitPlanCommandMDT.
    */
  OrbitPlanCommandMDT& operator=(const OrbitPlanCommandMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ORBITPLANCOMMANDMDT_H

