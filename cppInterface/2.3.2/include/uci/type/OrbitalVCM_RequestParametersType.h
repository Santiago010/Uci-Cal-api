/** @file OrbitalVCM_RequestParametersType.h
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

#ifndef UCI_TYPE_ORBITALVCM_REQUESTPARAMETERSTYPE_H
#define UCI_TYPE_ORBITALVCM_REQUESTPARAMETERSTYPE_H

#include "../base/Accessor.h"
#include "../base/DurationAccessor.h"
#include "../base/export.h"
#include "DateTimeRangeType.h"

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

/** Indicates the parameters for requesting an orbital VCM. This information includes the time window of the VCM results
  * and the interval between VCM results.
  */
class OrbitalVCM_RequestParametersType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new OrbitalVCM_RequestParametersType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitalVCM_RequestParametersType.
    */
  static UCI_EXPORT OrbitalVCM_RequestParametersType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new OrbitalVCM_RequestParametersType initializing the data accessed by the new
    * OrbitalVCM_RequestParametersType using the data accessed by the specified OrbitalVCM_RequestParametersType (cloning).
    *
    * @param accessor The OrbitalVCM_RequestParametersType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created OrbitalVCM_RequestParametersType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitalVCM_RequestParametersType.
    */
  static UCI_EXPORT OrbitalVCM_RequestParametersType& create(const OrbitalVCM_RequestParametersType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified OrbitalVCM_RequestParametersType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The OrbitalVCM_RequestParametersType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(OrbitalVCM_RequestParametersType& accessor);

  /** Returns this accessor's type constant, i.e. orbitalVCM_RequestParametersType.
    *
    * @return This accessor's type constant, i.e. orbitalVCM_RequestParametersType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::orbitalVCM_RequestParametersType;
  }

  /** Returns the version that was initialized from the uci:version attribute of OrbitalVCM_RequestParametersType.
    *
    * @return The version that was initialized from the uci:version attribute of OrbitalVCM_RequestParametersType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const OrbitalVCM_RequestParametersType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by RequestWindow.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by RequestWindow.
    */
  virtual const uci::type::DateTimeRangeType& getRequestWindow() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by RequestWindow.
    *
    * @return A reference to the accessor that provides access to the complex content identified by RequestWindow.
    */
  virtual uci::type::DateTimeRangeType& getRequestWindow() = 0;

  /** Sets the complex content identified by RequestWindow to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by RequestWindow.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalVCM_RequestParametersType& setRequestWindow(const uci::type::DateTimeRangeType& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by StepSize.
    *
    * @return The value of the simple primitive data type identified by StepSize.
    */
  virtual xs::Duration getStepSize() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by StepSize.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalVCM_RequestParametersType& setStepSize(xs::Duration value) = 0;

  /** Returns whether the Element identified by StepSize exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by StepSize is enabled or not.
    */
  virtual bool hasStepSize() const = 0;

  /** Clears (disabled) the Element identified by StepSize.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalVCM_RequestParametersType& clearStepSize() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  OrbitalVCM_RequestParametersType() {
  }

  /** The destructor [only available to derived classes]. */
  ~OrbitalVCM_RequestParametersType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OrbitalVCM_RequestParametersType to copy from.
    */
  OrbitalVCM_RequestParametersType(const OrbitalVCM_RequestParametersType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this OrbitalVCM_RequestParametersType to the contents of the
    * OrbitalVCM_RequestParametersType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The OrbitalVCM_RequestParametersType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this OrbitalVCM_RequestParametersType.
    * @return A reference to this OrbitalVCM_RequestParametersType.
    */
  OrbitalVCM_RequestParametersType& operator=(const OrbitalVCM_RequestParametersType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ORBITALVCM_REQUESTPARAMETERSTYPE_H

