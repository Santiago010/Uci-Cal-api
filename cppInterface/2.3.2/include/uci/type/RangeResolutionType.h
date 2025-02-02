/** @file RangeResolutionType.h
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

#ifndef UCI_TYPE_RANGERESOLUTIONTYPE_H
#define UCI_TYPE_RANGERESOLUTIONTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "DistanceType.h"

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

/** Indicates the down range and / or cross range resolution of a collection. */
class RangeResolutionType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new RangeResolutionType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RangeResolutionType.
    */
  static UCI_EXPORT RangeResolutionType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new RangeResolutionType initializing the data accessed by the new RangeResolutionType using
    * the data accessed by the specified RangeResolutionType (cloning).
    *
    * @param accessor The RangeResolutionType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created RangeResolutionType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RangeResolutionType.
    */
  static UCI_EXPORT RangeResolutionType& create(const RangeResolutionType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified RangeResolutionType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The RangeResolutionType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(RangeResolutionType& accessor);

  /** Returns this accessor's type constant, i.e. rangeResolutionType.
    *
    * @return This accessor's type constant, i.e. rangeResolutionType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::rangeResolutionType;
  }

  /** Returns the version that was initialized from the uci:version attribute of RangeResolutionType.
    *
    * @return The version that was initialized from the uci:version attribute of RangeResolutionType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const RangeResolutionType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Range.
    *
    * @return The value of the simple primitive data type identified by Range.
    */
  virtual uci::type::DistanceTypeValue getRange() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Range.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RangeResolutionType& setRange(uci::type::DistanceTypeValue value) = 0;

  /** Returns whether the Element identified by Range exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Range is enabled or not.
    */
  virtual bool hasRange() const = 0;

  /** Clears (disabled) the Element identified by Range.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RangeResolutionType& clearRange() = 0;

  /** Returns the value of the SimplePrimitive data type identified by CrossRange.
    *
    * @return The value of the simple primitive data type identified by CrossRange.
    */
  virtual uci::type::DistanceTypeValue getCrossRange() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by CrossRange.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RangeResolutionType& setCrossRange(uci::type::DistanceTypeValue value) = 0;

  /** Returns whether the Element identified by CrossRange exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CrossRange is enabled or not.
    */
  virtual bool hasCrossRange() const = 0;

  /** Clears (disabled) the Element identified by CrossRange.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RangeResolutionType& clearCrossRange() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  RangeResolutionType() {
  }

  /** The destructor [only available to derived classes]. */
  ~RangeResolutionType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The RangeResolutionType to copy from.
    */
  RangeResolutionType(const RangeResolutionType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this RangeResolutionType to the contents of the RangeResolutionType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The RangeResolutionType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this RangeResolutionType.
    * @return A reference to this RangeResolutionType.
    */
  RangeResolutionType& operator=(const RangeResolutionType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_RANGERESOLUTIONTYPE_H

