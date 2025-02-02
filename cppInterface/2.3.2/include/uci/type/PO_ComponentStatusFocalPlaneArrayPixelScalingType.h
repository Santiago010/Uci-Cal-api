/** @file PO_ComponentStatusFocalPlaneArrayPixelScalingType.h
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

#ifndef UCI_TYPE_PO_COMPONENTSTATUSFOCALPLANEARRAYPIXELSCALINGTYPE_H
#define UCI_TYPE_PO_COMPONENTSTATUSFOCALPLANEARRAYPIXELSCALINGTYPE_H

#include "../base/Accessor.h"
#include "../base/BooleanAccessor.h"
#include "../base/DoubleAccessor.h"
#include "../base/export.h"

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
class PO_ComponentStatusFocalPlaneArrayPixelScalingType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new PO_ComponentStatusFocalPlaneArrayPixelScalingType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_ComponentStatusFocalPlaneArrayPixelScalingType.
    */
  static UCI_EXPORT PO_ComponentStatusFocalPlaneArrayPixelScalingType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new PO_ComponentStatusFocalPlaneArrayPixelScalingType initializing the data accessed by the
    * new PO_ComponentStatusFocalPlaneArrayPixelScalingType using the data accessed by the specified
    * PO_ComponentStatusFocalPlaneArrayPixelScalingType (cloning).
    *
    * @param accessor The PO_ComponentStatusFocalPlaneArrayPixelScalingType that provides access to the data that is to be
    *      used to initialize the data accessed by the new created PO_ComponentStatusFocalPlaneArrayPixelScalingType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed PO_ComponentStatusFocalPlaneArrayPixelScalingType.
    */
  static UCI_EXPORT PO_ComponentStatusFocalPlaneArrayPixelScalingType& create(const PO_ComponentStatusFocalPlaneArrayPixelScalingType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified PO_ComponentStatusFocalPlaneArrayPixelScalingType. Use of the specified accessor
    * after it has been destroyed will result in undefined behavior.
    *
    * @param accessor The PO_ComponentStatusFocalPlaneArrayPixelScalingType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(PO_ComponentStatusFocalPlaneArrayPixelScalingType& accessor);

  /** Returns this accessor's type constant, i.e. pO_ComponentStatusFocalPlaneArrayPixelScalingType.
    *
    * @return This accessor's type constant, i.e. pO_ComponentStatusFocalPlaneArrayPixelScalingType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::pO_ComponentStatusFocalPlaneArrayPixelScalingType;
  }

  /** Returns the version that was initialized from the uci:version attribute of
    * PO_ComponentStatusFocalPlaneArrayPixelScalingType.
    *
    * @return The version that was initialized from the uci:version attribute of
    *      PO_ComponentStatusFocalPlaneArrayPixelScalingType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const PO_ComponentStatusFocalPlaneArrayPixelScalingType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Gain.
    *
    * @return The value of the simple primitive data type identified by Gain.
    */
  virtual xs::Double getGain() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Gain.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusFocalPlaneArrayPixelScalingType& setGain(xs::Double value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Offset.
    *
    * @return The value of the simple primitive data type identified by Offset.
    */
  virtual xs::Double getOffset() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Offset.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusFocalPlaneArrayPixelScalingType& setOffset(xs::Double value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by AutoScaling.
    *
    * @return The value of the simple primitive data type identified by AutoScaling.
    */
  virtual xs::Boolean getAutoScaling() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by AutoScaling.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusFocalPlaneArrayPixelScalingType& setAutoScaling(xs::Boolean value) = 0;

  /** Returns whether the Element identified by AutoScaling exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by AutoScaling is enabled or not.
    */
  virtual bool hasAutoScaling() const = 0;

  /** Clears (disabled) the Element identified by AutoScaling.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::PO_ComponentStatusFocalPlaneArrayPixelScalingType& clearAutoScaling() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  PO_ComponentStatusFocalPlaneArrayPixelScalingType() {
  }

  /** The destructor [only available to derived classes]. */
  ~PO_ComponentStatusFocalPlaneArrayPixelScalingType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PO_ComponentStatusFocalPlaneArrayPixelScalingType to copy from.
    */
  PO_ComponentStatusFocalPlaneArrayPixelScalingType(const PO_ComponentStatusFocalPlaneArrayPixelScalingType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this PO_ComponentStatusFocalPlaneArrayPixelScalingType to the contents
    * of the PO_ComponentStatusFocalPlaneArrayPixelScalingType on the right hand side (rhs) of the assignment operator
    * [only available to derived classes].
    *
    * @param rhs The PO_ComponentStatusFocalPlaneArrayPixelScalingType on the right hand side (rhs) of the assignment
    *      operator whose contents are used to set the contents of this PO_ComponentStatusFocalPlaneArrayPixelScalingType.
    * @return A reference to this PO_ComponentStatusFocalPlaneArrayPixelScalingType.
    */
  PO_ComponentStatusFocalPlaneArrayPixelScalingType& operator=(const PO_ComponentStatusFocalPlaneArrayPixelScalingType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PO_COMPONENTSTATUSFOCALPLANEARRAYPIXELSCALINGTYPE_H

