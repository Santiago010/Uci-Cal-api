/** @file PlanValidationInputsBaseType.h
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

#ifndef UCI_TYPE_PLANVALIDATIONINPUTSBASETYPE_H
#define UCI_TYPE_PLANVALIDATIONINPUTSBASETYPE_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/export.h"
#include "PlanningProcessID_Type.h"
#include "TimeWindowType.h"
#include "WeatherAreaDataType.h"

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
class PlanValidationInputsBaseType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PlanValidationInputsBaseType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PlanValidationInputsBaseType.
    */
  static UCI_EXPORT PlanValidationInputsBaseType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PlanValidationInputsBaseType initializing the data accessed by the new
    * PlanValidationInputsBaseType using the data accessed by the specified PlanValidationInputsBaseType (cloning).
    *
    * @param accessor The PlanValidationInputsBaseType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created PlanValidationInputsBaseType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PlanValidationInputsBaseType.
    */
  static UCI_EXPORT PlanValidationInputsBaseType& create(const PlanValidationInputsBaseType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PlanValidationInputsBaseType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The PlanValidationInputsBaseType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PlanValidationInputsBaseType& accessor);

  /** Returns this accessor's type constant, i.e. planValidationInputsBaseType.
    *
    * @return This accessor's type constant, i.e. planValidationInputsBaseType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::planValidationInputsBaseType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PlanValidationInputsBaseType.
    *
    * @return The version that was initialized from the uci:version attribute of PlanValidationInputsBaseType.
    */
  static std::string getUCITypeVersion() {
    return "002.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PlanValidationInputsBaseType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * PlanningProcessID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      PlanningProcessID.
    */
  virtual const uci::type::PlanningProcessID_Type& getPlanningProcessID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by PlanningProcessID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by PlanningProcessID.
    */
  virtual uci::type::PlanningProcessID_Type& getPlanningProcessID() = 0;

  /** Sets the complex content identified by PlanningProcessID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PlanningProcessID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlanValidationInputsBaseType& setPlanningProcessID(const uci::type::PlanningProcessID_Type& value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by ModifyToValidate.
    *
    * @return The value of the simple primitive data type identified by ModifyToValidate.
    */
  virtual xs::Boolean getModifyToValidate() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ModifyToValidate.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlanValidationInputsBaseType& setModifyToValidate(xs::Boolean value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ValidationWIndow.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ValidationWIndow.
    */
  virtual const uci::type::TimeWindowType& getValidationWIndow() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ValidationWIndow.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ValidationWIndow.
    */
  virtual uci::type::TimeWindowType& getValidationWIndow() = 0;

  /** Sets the complex content identified by ValidationWIndow to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ValidationWIndow.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlanValidationInputsBaseType& setValidationWIndow(const uci::type::TimeWindowType& value) = 0;

  /** Returns whether the Element identified by ValidationWIndow exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ValidationWIndow is enabled or not.
    */
  virtual bool hasValidationWIndow() const = 0;

  /** Enables the Element identified by ValidationWIndow.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ValidationWIndow.
    */
  virtual uci::type::TimeWindowType& enableValidationWIndow(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ValidationWIndow.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlanValidationInputsBaseType& clearValidationWIndow() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by WeatherAreaData.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by WeatherAreaData.
    */
  virtual const uci::type::WeatherAreaDataType& getWeatherAreaData() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by WeatherAreaData.
    *
    * @return A reference to the accessor that provides access to the complex content identified by WeatherAreaData.
    */
  virtual uci::type::WeatherAreaDataType& getWeatherAreaData() = 0;

  /** Sets the complex content identified by WeatherAreaData to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by WeatherAreaData.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlanValidationInputsBaseType& setWeatherAreaData(const uci::type::WeatherAreaDataType& value) = 0;

  /** Returns whether the Element identified by WeatherAreaData exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by WeatherAreaData is enabled or not.
    */
  virtual bool hasWeatherAreaData() const = 0;

  /** Enables the Element identified by WeatherAreaData.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by WeatherAreaData.
    */
  virtual uci::type::WeatherAreaDataType& enableWeatherAreaData(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by WeatherAreaData.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PlanValidationInputsBaseType& clearWeatherAreaData() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PlanValidationInputsBaseType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PlanValidationInputsBaseType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PlanValidationInputsBaseType to copy from.
    */
  PlanValidationInputsBaseType(const PlanValidationInputsBaseType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PlanValidationInputsBaseType to the contents of the
    * PlanValidationInputsBaseType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The PlanValidationInputsBaseType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this PlanValidationInputsBaseType.
    * @return A reference to this PlanValidationInputsBaseType.
    */
  PlanValidationInputsBaseType& operator=(const PlanValidationInputsBaseType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PLANVALIDATIONINPUTSBASETYPE_H

