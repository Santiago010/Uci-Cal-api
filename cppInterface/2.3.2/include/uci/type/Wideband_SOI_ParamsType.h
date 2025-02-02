/** @file Wideband_SOI_ParamsType.h
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

#ifndef UCI_TYPE_WIDEBAND_SOI_PARAMSTYPE_H
#define UCI_TYPE_WIDEBAND_SOI_PARAMSTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "DurationType.h"
#include "RangeResolutionType.h"

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

/** The Wideband Space Object of Interest (WB SOI) parameters consist of the Range resolution of both the range and cross
  * range. The optional product resolution time parameter is the minimum amount of time needed to get the desired level
  * of resolution for the product.
  */
class Wideband_SOI_ParamsType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new Wideband_SOI_ParamsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed Wideband_SOI_ParamsType.
    */
  static UCI_EXPORT Wideband_SOI_ParamsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new Wideband_SOI_ParamsType initializing the data accessed by the new
    * Wideband_SOI_ParamsType using the data accessed by the specified Wideband_SOI_ParamsType (cloning).
    *
    * @param accessor The Wideband_SOI_ParamsType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created Wideband_SOI_ParamsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed Wideband_SOI_ParamsType.
    */
  static UCI_EXPORT Wideband_SOI_ParamsType& create(const Wideband_SOI_ParamsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified Wideband_SOI_ParamsType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The Wideband_SOI_ParamsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(Wideband_SOI_ParamsType& accessor);

  /** Returns this accessor's type constant, i.e. wideband_SOI_ParamsType.
    *
    * @return This accessor's type constant, i.e. wideband_SOI_ParamsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::wideband_SOI_ParamsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of Wideband_SOI_ParamsType.
    *
    * @return The version that was initialized from the uci:version attribute of Wideband_SOI_ParamsType.
    */
  static std::string getUCITypeVersion() {
    return "001.001.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const Wideband_SOI_ParamsType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by RangeResolution.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by RangeResolution.
    */
  virtual const uci::type::RangeResolutionType& getRangeResolution() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by RangeResolution.
    *
    * @return A reference to the accessor that provides access to the complex content identified by RangeResolution.
    */
  virtual uci::type::RangeResolutionType& getRangeResolution() = 0;

  /** Sets the complex content identified by RangeResolution to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by RangeResolution.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Wideband_SOI_ParamsType& setRangeResolution(const uci::type::RangeResolutionType& value) = 0;

  /** Returns whether the Element identified by RangeResolution exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by RangeResolution is enabled or not.
    */
  virtual bool hasRangeResolution() const = 0;

  /** Enables the Element identified by RangeResolution.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by RangeResolution.
    */
  virtual uci::type::RangeResolutionType& enableRangeResolution(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by RangeResolution.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Wideband_SOI_ParamsType& clearRangeResolution() = 0;

  /** Returns the value of the SimplePrimitive data type identified by ProductResolutionTime.
    *
    * @return The value of the simple primitive data type identified by ProductResolutionTime.
    */
  virtual uci::type::DurationTypeValue getProductResolutionTime() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ProductResolutionTime.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Wideband_SOI_ParamsType& setProductResolutionTime(uci::type::DurationTypeValue value) = 0;

  /** Returns whether the Element identified by ProductResolutionTime exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ProductResolutionTime is enabled or not.
    */
  virtual bool hasProductResolutionTime() const = 0;

  /** Clears (disabled) the Element identified by ProductResolutionTime.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::Wideband_SOI_ParamsType& clearProductResolutionTime() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  Wideband_SOI_ParamsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~Wideband_SOI_ParamsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The Wideband_SOI_ParamsType to copy from.
    */
  Wideband_SOI_ParamsType(const Wideband_SOI_ParamsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this Wideband_SOI_ParamsType to the contents of the
    * Wideband_SOI_ParamsType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The Wideband_SOI_ParamsType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this Wideband_SOI_ParamsType.
    * @return A reference to this Wideband_SOI_ParamsType.
    */
  Wideband_SOI_ParamsType& operator=(const Wideband_SOI_ParamsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_WIDEBAND_SOI_PARAMSTYPE_H

