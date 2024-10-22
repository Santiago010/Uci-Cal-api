/** @file SpaceWeatherParameterType.h
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

#ifndef UCI_TYPE_SPACEWEATHERPARAMETERTYPE_H
#define UCI_TYPE_SPACEWEATHERPARAMETERTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "SolarFluxF10_7IndexType.h"
#include "SpaceWeatherKpApChoiceType.h"

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

/** The static (non-changing) space weather values to be used by an atmospheric density model during propagation. */
class SpaceWeatherParameterType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new SpaceWeatherParameterType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SpaceWeatherParameterType.
    */
  static UCI_EXPORT SpaceWeatherParameterType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new SpaceWeatherParameterType initializing the data accessed by the new
    * SpaceWeatherParameterType using the data accessed by the specified SpaceWeatherParameterType (cloning).
    *
    * @param accessor The SpaceWeatherParameterType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created SpaceWeatherParameterType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed SpaceWeatherParameterType.
    */
  static UCI_EXPORT SpaceWeatherParameterType& create(const SpaceWeatherParameterType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified SpaceWeatherParameterType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The SpaceWeatherParameterType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(SpaceWeatherParameterType& accessor);

  /** Returns this accessor's type constant, i.e. spaceWeatherParameterType.
    *
    * @return This accessor's type constant, i.e. spaceWeatherParameterType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::spaceWeatherParameterType;
  }

  /** Returns the version that was initialized from the uci:version attribute of SpaceWeatherParameterType.
    *
    * @return The version that was initialized from the uci:version attribute of SpaceWeatherParameterType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const SpaceWeatherParameterType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by SolarFlux.
    *
    * @return The value of the simple primitive data type identified by SolarFlux.
    */
  virtual uci::type::SolarFluxF10_7IndexTypeValue getSolarFlux() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by SolarFlux.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SpaceWeatherParameterType& setSolarFlux(uci::type::SolarFluxF10_7IndexTypeValue value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by AverageSolarFlux.
    *
    * @return The value of the simple primitive data type identified by AverageSolarFlux.
    */
  virtual uci::type::SolarFluxF10_7IndexTypeValue getAverageSolarFlux() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by AverageSolarFlux.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SpaceWeatherParameterType& setAverageSolarFlux(uci::type::SolarFluxF10_7IndexTypeValue value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by GeomagneticIndex.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by GeomagneticIndex.
    */
  virtual const uci::type::SpaceWeatherKpApChoiceType& getGeomagneticIndex() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by GeomagneticIndex.
    *
    * @return A reference to the accessor that provides access to the complex content identified by GeomagneticIndex.
    */
  virtual uci::type::SpaceWeatherKpApChoiceType& getGeomagneticIndex() = 0;

  /** Sets the complex content identified by GeomagneticIndex to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by GeomagneticIndex.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::SpaceWeatherParameterType& setGeomagneticIndex(const uci::type::SpaceWeatherKpApChoiceType& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  SpaceWeatherParameterType() {
  }

  /** The destructor [only available to derived classes]. */
  ~SpaceWeatherParameterType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The SpaceWeatherParameterType to copy from.
    */
  SpaceWeatherParameterType(const SpaceWeatherParameterType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this SpaceWeatherParameterType to the contents of the
    * SpaceWeatherParameterType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The SpaceWeatherParameterType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this SpaceWeatherParameterType.
    * @return A reference to this SpaceWeatherParameterType.
    */
  SpaceWeatherParameterType& operator=(const SpaceWeatherParameterType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_SPACEWEATHERPARAMETERTYPE_H

