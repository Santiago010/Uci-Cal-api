/** @file PO_TechniqueSettingType.h
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

#ifndef UCI_TYPE_PO_TECHNIQUESETTINGTYPE_H
#define UCI_TYPE_PO_TECHNIQUESETTINGTYPE_H

#include "../base/Accessor.h"
#include "../base/FloatAccessor.h"
#include "../base/UnsignedByteAccessor.h"
#include "../base/export.h"
#include "PO_TechniqueEnum.h"

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
class PO_TechniqueSettingType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PO_TechniqueSettingType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_TechniqueSettingType.
    */
  static UCI_EXPORT PO_TechniqueSettingType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PO_TechniqueSettingType initializing the data accessed by the new
    * PO_TechniqueSettingType using the data accessed by the specified PO_TechniqueSettingType (cloning).
    *
    * @param accessor The PO_TechniqueSettingType that provides access to the data that is to be used to initialize the
    *      data accessed by the new created PO_TechniqueSettingType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_TechniqueSettingType.
    */
  static UCI_EXPORT PO_TechniqueSettingType& create(const PO_TechniqueSettingType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PO_TechniqueSettingType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The PO_TechniqueSettingType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PO_TechniqueSettingType& accessor);

  /** Returns this accessor's type constant, i.e. pO_TechniqueSettingType.
    *
    * @return This accessor's type constant, i.e. pO_TechniqueSettingType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::pO_TechniqueSettingType;
  }

  /** Returns the version that was initialized from the uci:version attribute of PO_TechniqueSettingType.
    *
    * @return The version that was initialized from the uci:version attribute of PO_TechniqueSettingType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PO_TechniqueSettingType& accessor) = 0;

  /** Returns a const reference to the value of the enumeration identified by Technique.
    *
    * @return A const reference to the value of the enumeration identified by Technique.
    */
  virtual const uci::type::PO_TechniqueEnum& getTechnique() const = 0;

  /** Returns a reference to the value of the enumeration identified by Technique.
    *
    * @return A reference to the value of the enumeration identified by Technique.
    */
  virtual uci::type::PO_TechniqueEnum& getTechnique() = 0;

  /** Sets the value of the enumeration identified by Technique.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& setTechnique(const uci::type::PO_TechniqueEnum& value) = 0;

  /** Sets the value of the enumeration identified by Technique.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& setTechnique(uci::type::PO_TechniqueEnum::EnumerationItem value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by IntensityValue.
    *
    * @return The value of the simple primitive data type identified by IntensityValue.
    */
  virtual xs::Float getIntensityValue() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by IntensityValue.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& setIntensityValue(xs::Float value) = 0;

  /** Returns whether the Element identified by IntensityValue exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by IntensityValue is enabled or not.
    */
  virtual bool hasIntensityValue() const = 0;

  /** Clears (disabled) the Element identified by IntensityValue.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& clearIntensityValue() = 0;

  /** Returns the value of the SimplePrimitive data type identified by ConstellationValue.
    *
    * @return The value of the simple primitive data type identified by ConstellationValue.
    */
  virtual xs::Float getConstellationValue() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by ConstellationValue.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& setConstellationValue(xs::Float value) = 0;

  /** Returns whether the Element identified by ConstellationValue exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ConstellationValue is enabled or not.
    */
  virtual bool hasConstellationValue() const = 0;

  /** Clears (disabled) the Element identified by ConstellationValue.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& clearConstellationValue() = 0;

  /** Returns the value of the SimplePrimitive data type identified by StrideValue.
    *
    * @return The value of the simple primitive data type identified by StrideValue.
    */
  virtual xs::Float getStrideValue() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by StrideValue.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& setStrideValue(xs::Float value) = 0;

  /** Returns whether the Element identified by StrideValue exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by StrideValue is enabled or not.
    */
  virtual bool hasStrideValue() const = 0;

  /** Clears (disabled) the Element identified by StrideValue.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& clearStrideValue() = 0;

  /** Returns the value of the SimplePrimitive data type identified by PointIntensityValue.
    *
    * @return The value of the simple primitive data type identified by PointIntensityValue.
    */
  virtual xs::Float getPointIntensityValue() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PointIntensityValue.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& setPointIntensityValue(xs::Float value) = 0;

  /** Returns whether the Element identified by PointIntensityValue exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PointIntensityValue is enabled or not.
    */
  virtual bool hasPointIntensityValue() const = 0;

  /** Clears (disabled) the Element identified by PointIntensityValue.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& clearPointIntensityValue() = 0;

  /** Returns the value of the SimplePrimitive data type identified by EdgeIntensityValue.
    *
    * @return The value of the simple primitive data type identified by EdgeIntensityValue.
    */
  virtual xs::Float getEdgeIntensityValue() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by EdgeIntensityValue.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& setEdgeIntensityValue(xs::Float value) = 0;

  /** Returns whether the Element identified by EdgeIntensityValue exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by EdgeIntensityValue is enabled or not.
    */
  virtual bool hasEdgeIntensityValue() const = 0;

  /** Clears (disabled) the Element identified by EdgeIntensityValue.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& clearEdgeIntensityValue() = 0;

  /** Returns the value of the SimplePrimitive data type identified by FalseAlarmLevel.
    *
    * @return The value of the simple primitive data type identified by FalseAlarmLevel.
    */
  virtual xs::UnsignedByte getFalseAlarmLevel() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by FalseAlarmLevel.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& setFalseAlarmLevel(xs::UnsignedByte value) = 0;

  /** Returns whether the Element identified by FalseAlarmLevel exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by FalseAlarmLevel is enabled or not.
    */
  virtual bool hasFalseAlarmLevel() const = 0;

  /** Clears (disabled) the Element identified by FalseAlarmLevel.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_TechniqueSettingType& clearFalseAlarmLevel() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PO_TechniqueSettingType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PO_TechniqueSettingType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PO_TechniqueSettingType to copy from.
    */
  PO_TechniqueSettingType(const PO_TechniqueSettingType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PO_TechniqueSettingType to the contents of the
    * PO_TechniqueSettingType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The PO_TechniqueSettingType on the right hand side (rhs) of the assignment operator whose contents are
    *      used to set the contents of this PO_TechniqueSettingType.
    * @return A reference to this PO_TechniqueSettingType.
    */
  PO_TechniqueSettingType& operator=(const PO_TechniqueSettingType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PO_TECHNIQUESETTINGTYPE_H

