/** @file ElevationVisibilityPointInfoType.h
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

#ifndef UCI_TYPE_ELEVATIONVISIBILITYPOINTINFOTYPE_H
#define UCI_TYPE_ELEVATIONVISIBILITYPOINTINFOTYPE_H

#include "../base/Accessor.h"
#include "../base/UnsignedIntAccessor.h"
#include "../base/export.h"
#include "ElevationVisibilityEnum.h"
#include "Point3D_Type.h"

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

/** Contains the visibility of one requested point with respect to a location. */
class ElevationVisibilityPointInfoType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ElevationVisibilityPointInfoType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ElevationVisibilityPointInfoType.
    */
  static UCI_EXPORT ElevationVisibilityPointInfoType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ElevationVisibilityPointInfoType initializing the data accessed by the new
    * ElevationVisibilityPointInfoType using the data accessed by the specified ElevationVisibilityPointInfoType (cloning).
    *
    * @param accessor The ElevationVisibilityPointInfoType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created ElevationVisibilityPointInfoType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ElevationVisibilityPointInfoType.
    */
  static UCI_EXPORT ElevationVisibilityPointInfoType& create(const ElevationVisibilityPointInfoType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ElevationVisibilityPointInfoType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The ElevationVisibilityPointInfoType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ElevationVisibilityPointInfoType& accessor);

  /** Returns this accessor's type constant, i.e. elevationVisibilityPointInfoType.
    *
    * @return This accessor's type constant, i.e. elevationVisibilityPointInfoType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::elevationVisibilityPointInfoType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ElevationVisibilityPointInfoType.
    *
    * @return The version that was initialized from the uci:version attribute of ElevationVisibilityPointInfoType.
    */
  static std::string getUCITypeVersion() {
    return "001.001.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ElevationVisibilityPointInfoType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by RequestPointIndex.
    *
    * @return The value of the simple primitive data type identified by RequestPointIndex.
    */
  virtual xs::UnsignedInt getRequestPointIndex() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RequestPointIndex.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ElevationVisibilityPointInfoType& setRequestPointIndex(xs::UnsignedInt value) = 0;

  /** Returns a const reference to the value of the enumeration identified by VisibilityState.
    *
    * @return A const reference to the value of the enumeration identified by VisibilityState.
    */
  virtual const uci::type::ElevationVisibilityEnum& getVisibilityState() const = 0;

  /** Returns a reference to the value of the enumeration identified by VisibilityState.
    *
    * @return A reference to the value of the enumeration identified by VisibilityState.
    */
  virtual uci::type::ElevationVisibilityEnum& getVisibilityState() = 0;

  /** Sets the value of the enumeration identified by VisibilityState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ElevationVisibilityPointInfoType& setVisibilityState(const uci::type::ElevationVisibilityEnum& value) = 0;

  /** Sets the value of the enumeration identified by VisibilityState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ElevationVisibilityPointInfoType& setVisibilityState(uci::type::ElevationVisibilityEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ObstructionPoint.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ObstructionPoint.
    */
  virtual const uci::type::Point3D_Type& getObstructionPoint() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ObstructionPoint.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ObstructionPoint.
    */
  virtual uci::type::Point3D_Type& getObstructionPoint() = 0;

  /** Sets the complex content identified by ObstructionPoint to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ObstructionPoint.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ElevationVisibilityPointInfoType& setObstructionPoint(const uci::type::Point3D_Type& value) = 0;

  /** Returns whether the Element identified by ObstructionPoint exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ObstructionPoint is enabled or not.
    */
  virtual bool hasObstructionPoint() const = 0;

  /** Enables the Element identified by ObstructionPoint.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ObstructionPoint.
    */
  virtual uci::type::Point3D_Type& enableObstructionPoint(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ObstructionPoint.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ElevationVisibilityPointInfoType& clearObstructionPoint() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ElevationVisibilityPointInfoType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ElevationVisibilityPointInfoType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ElevationVisibilityPointInfoType to copy from.
    */
  ElevationVisibilityPointInfoType(const ElevationVisibilityPointInfoType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ElevationVisibilityPointInfoType to the contents of the
    * ElevationVisibilityPointInfoType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ElevationVisibilityPointInfoType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this ElevationVisibilityPointInfoType.
    * @return A reference to this ElevationVisibilityPointInfoType.
    */
  ElevationVisibilityPointInfoType& operator=(const ElevationVisibilityPointInfoType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ELEVATIONVISIBILITYPOINTINFOTYPE_H

