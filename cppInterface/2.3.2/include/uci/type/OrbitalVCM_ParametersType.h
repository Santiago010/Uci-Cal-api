/** @file OrbitalVCM_ParametersType.h
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

#ifndef UCI_TYPE_ORBITALVCM_PARAMETERSTYPE_H
#define UCI_TYPE_ORBITALVCM_PARAMETERSTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "DateTimeType.h"
#include "VCM_PropagatorType.h"

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

/** Indicates the parameters for requesting an orbital VCM. This information includes the creation time of the VCM
  * results, the propagation model used, and the parameters for controlling the propagation process.
  */
class OrbitalVCM_ParametersType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new OrbitalVCM_ParametersType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitalVCM_ParametersType.
    */
  static UCI_EXPORT OrbitalVCM_ParametersType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new OrbitalVCM_ParametersType initializing the data accessed by the new
    * OrbitalVCM_ParametersType using the data accessed by the specified OrbitalVCM_ParametersType (cloning).
    *
    * @param accessor The OrbitalVCM_ParametersType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created OrbitalVCM_ParametersType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitalVCM_ParametersType.
    */
  static UCI_EXPORT OrbitalVCM_ParametersType& create(const OrbitalVCM_ParametersType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified OrbitalVCM_ParametersType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The OrbitalVCM_ParametersType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(OrbitalVCM_ParametersType& accessor);

  /** Returns this accessor's type constant, i.e. orbitalVCM_ParametersType.
    *
    * @return This accessor's type constant, i.e. orbitalVCM_ParametersType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::orbitalVCM_ParametersType;
  }

  /** Returns the version that was initialized from the uci:version attribute of OrbitalVCM_ParametersType.
    *
    * @return The version that was initialized from the uci:version attribute of OrbitalVCM_ParametersType.
    */
  static std::string getUCITypeVersion() {
    return "001.001.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const OrbitalVCM_ParametersType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by CreationTime.
    *
    * @return The value of the simple primitive data type identified by CreationTime.
    */
  virtual uci::type::DateTimeTypeValue getCreationTime() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by CreationTime.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalVCM_ParametersType& setCreationTime(uci::type::DateTimeTypeValue value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by VCM_Propagator.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by VCM_Propagator.
    */
  virtual const uci::type::VCM_PropagatorType& getVCM_Propagator() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by VCM_Propagator.
    *
    * @return A reference to the accessor that provides access to the complex content identified by VCM_Propagator.
    */
  virtual uci::type::VCM_PropagatorType& getVCM_Propagator() = 0;

  /** Sets the complex content identified by VCM_Propagator to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by VCM_Propagator.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalVCM_ParametersType& setVCM_Propagator(const uci::type::VCM_PropagatorType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  OrbitalVCM_ParametersType() {
  }

  /** The destructor [only available to derived classes]. */
  ~OrbitalVCM_ParametersType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OrbitalVCM_ParametersType to copy from.
    */
  OrbitalVCM_ParametersType(const OrbitalVCM_ParametersType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this OrbitalVCM_ParametersType to the contents of the
    * OrbitalVCM_ParametersType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The OrbitalVCM_ParametersType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this OrbitalVCM_ParametersType.
    * @return A reference to this OrbitalVCM_ParametersType.
    */
  OrbitalVCM_ParametersType& operator=(const OrbitalVCM_ParametersType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ORBITALVCM_PARAMETERSTYPE_H

