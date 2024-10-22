/** @file ConeAngleCovarianceType.h
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

#ifndef UCI_TYPE_CONEANGLECOVARIANCETYPE_H
#define UCI_TYPE_CONEANGLECOVARIANCETYPE_H

#include "../base/Accessor.h"
#include "../base/DoubleAccessor.h"
#include "../base/export.h"
#include "ConeAngleCovarianceRatesType.h"

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
class ConeAngleCovarianceType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ConeAngleCovarianceType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ConeAngleCovarianceType.
    */
  static UCI_EXPORT ConeAngleCovarianceType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ConeAngleCovarianceType initializing the data accessed by the new
    * ConeAngleCovarianceType using the data accessed by the specified ConeAngleCovarianceType (cloning).
    *
    * @param accessor The ConeAngleCovarianceType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created ConeAngleCovarianceType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ConeAngleCovarianceType.
    */
  static UCI_EXPORT ConeAngleCovarianceType& create(const ConeAngleCovarianceType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ConeAngleCovarianceType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The ConeAngleCovarianceType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ConeAngleCovarianceType& accessor);

  /** Returns this accessor's type constant, i.e. coneAngleCovarianceType.
    *
    * @return This accessor's type constant, i.e. coneAngleCovarianceType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::coneAngleCovarianceType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ConeAngleCovarianceType.
    *
    * @return The version that was initialized from the uci:version attribute of ConeAngleCovarianceType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ConeAngleCovarianceType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by CosconeY_CosconeZ.
    *
    * @return The value of the simple primitive data type identified by CosconeY_CosconeZ.
    */
  virtual xs::Double getCosconeY_CosconeZ() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by CosconeY_CosconeZ.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ConeAngleCovarianceType& setCosconeY_CosconeZ(xs::Double value) = 0;

  /** Returns whether the Element identified by CosconeY_CosconeZ exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CosconeY_CosconeZ is enabled or not.
    */
  virtual bool hasCosconeY_CosconeZ() const = 0;

  /** Clears (disabled) the Element identified by CosconeY_CosconeZ.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ConeAngleCovarianceType& clearCosconeY_CosconeZ() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Rates.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Rates.
    */
  virtual const uci::type::ConeAngleCovarianceRatesType& getRates() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Rates.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Rates.
    */
  virtual uci::type::ConeAngleCovarianceRatesType& getRates() = 0;

  /** Sets the complex content identified by Rates to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Rates.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ConeAngleCovarianceType& setRates(const uci::type::ConeAngleCovarianceRatesType& value) = 0;

  /** Returns whether the Element identified by Rates exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Rates is enabled or not.
    */
  virtual bool hasRates() const = 0;

  /** Enables the Element identified by Rates.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Rates.
    */
  virtual uci::type::ConeAngleCovarianceRatesType& enableRates(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Rates.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ConeAngleCovarianceType& clearRates() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ConeAngleCovarianceType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ConeAngleCovarianceType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ConeAngleCovarianceType to copy from.
    */
  ConeAngleCovarianceType(const ConeAngleCovarianceType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ConeAngleCovarianceType to the contents of the
    * ConeAngleCovarianceType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The ConeAngleCovarianceType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this ConeAngleCovarianceType.
    * @return A reference to this ConeAngleCovarianceType.
    */
  ConeAngleCovarianceType& operator=(const ConeAngleCovarianceType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_CONEANGLECOVARIANCETYPE_H

