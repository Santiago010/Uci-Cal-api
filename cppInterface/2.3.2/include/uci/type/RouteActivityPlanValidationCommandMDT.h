/** @file RouteActivityPlanValidationCommandMDT.h
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

#ifndef UCI_TYPE_ROUTEACTIVITYPLANVALIDATIONCOMMANDMDT_H
#define UCI_TYPE_ROUTEACTIVITYPLANVALIDATIONCOMMANDMDT_H

#include "../base/export.h"
#include "RouteActivityPlanValidationInputsType.h"
#include "ValidationCommandBaseType.h"

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
class RouteActivityPlanValidationCommandMDT : public virtual ValidationCommandBaseType {
public:

  /** This method constructs a new RouteActivityPlanValidationCommandMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RouteActivityPlanValidationCommandMDT.
    */
  static UCI_EXPORT RouteActivityPlanValidationCommandMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new RouteActivityPlanValidationCommandMDT initializing the data accessed by the new
    * RouteActivityPlanValidationCommandMDT using the data accessed by the specified RouteActivityPlanValidationCommandMDT
    * (cloning).
    *
    * @param accessor The RouteActivityPlanValidationCommandMDT that provides access to the data that is to be used to
    *      initialize the data accessed by the new created RouteActivityPlanValidationCommandMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RouteActivityPlanValidationCommandMDT.
    */
  static UCI_EXPORT RouteActivityPlanValidationCommandMDT& create(const RouteActivityPlanValidationCommandMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified RouteActivityPlanValidationCommandMDT. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The RouteActivityPlanValidationCommandMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(RouteActivityPlanValidationCommandMDT& accessor);

  /** Returns this accessor's type constant, i.e. routeActivityPlanValidationCommandMDT.
    *
    * @return This accessor's type constant, i.e. routeActivityPlanValidationCommandMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::routeActivityPlanValidationCommandMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of RouteActivityPlanValidationCommandMDT.
    *
    * @return The version that was initialized from the uci:version attribute of RouteActivityPlanValidationCommandMDT.
    */
  static std::string getUCITypeVersion() {
    return "003.001.003.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const RouteActivityPlanValidationCommandMDT& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Inputs.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Inputs.
    */
  virtual const uci::type::RouteActivityPlanValidationInputsType& getInputs() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Inputs.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Inputs.
    */
  virtual uci::type::RouteActivityPlanValidationInputsType& getInputs() = 0;

  /** Sets the complex content identified by Inputs to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Inputs.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RouteActivityPlanValidationCommandMDT& setInputs(const uci::type::RouteActivityPlanValidationInputsType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  RouteActivityPlanValidationCommandMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~RouteActivityPlanValidationCommandMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The RouteActivityPlanValidationCommandMDT to copy from.
    */
  RouteActivityPlanValidationCommandMDT(const RouteActivityPlanValidationCommandMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this RouteActivityPlanValidationCommandMDT to the contents of the
    * RouteActivityPlanValidationCommandMDT on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The RouteActivityPlanValidationCommandMDT on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this RouteActivityPlanValidationCommandMDT.
    * @return A reference to this RouteActivityPlanValidationCommandMDT.
    */
  RouteActivityPlanValidationCommandMDT& operator=(const RouteActivityPlanValidationCommandMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ROUTEACTIVITYPLANVALIDATIONCOMMANDMDT_H

