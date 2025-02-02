/** @file KinematicsFixedType.h
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

#ifndef UCI_TYPE_KINEMATICSFIXEDTYPE_H
#define UCI_TYPE_KINEMATICSFIXEDTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "KinematicsFixedPositionType.h"
#include "OrientationCovarianceType.h"
#include "OrientationType.h"
#include "PositionAndVelocityCovarianceType.h"
#include "Velocity2D_Type.h"

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
class KinematicsFixedType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new KinematicsFixedType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed KinematicsFixedType.
    */
  static UCI_EXPORT KinematicsFixedType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new KinematicsFixedType initializing the data accessed by the new KinematicsFixedType using
    * the data accessed by the specified KinematicsFixedType (cloning).
    *
    * @param accessor The KinematicsFixedType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created KinematicsFixedType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed KinematicsFixedType.
    */
  static UCI_EXPORT KinematicsFixedType& create(const KinematicsFixedType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified KinematicsFixedType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The KinematicsFixedType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(KinematicsFixedType& accessor);

  /** Returns this accessor's type constant, i.e. kinematicsFixedType.
    *
    * @return This accessor's type constant, i.e. kinematicsFixedType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::kinematicsFixedType;
  }

  /** Returns the version that was initialized from the uci:version attribute of KinematicsFixedType.
    *
    * @return The version that was initialized from the uci:version attribute of KinematicsFixedType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const KinematicsFixedType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Position.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Position.
    */
  virtual const uci::type::KinematicsFixedPositionType& getPosition() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Position.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Position.
    */
  virtual uci::type::KinematicsFixedPositionType& getPosition() = 0;

  /** Sets the complex content identified by Position to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Position.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::KinematicsFixedType& setPosition(const uci::type::KinematicsFixedPositionType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Velocity.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Velocity.
    */
  virtual const uci::type::Velocity2D_Type& getVelocity() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Velocity.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Velocity.
    */
  virtual uci::type::Velocity2D_Type& getVelocity() = 0;

  /** Sets the complex content identified by Velocity to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Velocity.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::KinematicsFixedType& setVelocity(const uci::type::Velocity2D_Type& value) = 0;

  /** Returns whether the Element identified by Velocity exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Velocity is enabled or not.
    */
  virtual bool hasVelocity() const = 0;

  /** Enables the Element identified by Velocity.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Velocity.
    */
  virtual uci::type::Velocity2D_Type& enableVelocity(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Velocity.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::KinematicsFixedType& clearVelocity() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * PositionAndVelocityCovariance.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      PositionAndVelocityCovariance.
    */
  virtual const uci::type::PositionAndVelocityCovarianceType& getPositionAndVelocityCovariance() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * PositionAndVelocityCovariance.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      PositionAndVelocityCovariance.
    */
  virtual uci::type::PositionAndVelocityCovarianceType& getPositionAndVelocityCovariance() = 0;

  /** Sets the complex content identified by PositionAndVelocityCovariance to the contents of the complex content accessed
    * by the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by PositionAndVelocityCovariance.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::KinematicsFixedType& setPositionAndVelocityCovariance(const uci::type::PositionAndVelocityCovarianceType& value) = 0;

  /** Returns whether the Element identified by PositionAndVelocityCovariance exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PositionAndVelocityCovariance is enabled or not.
    */
  virtual bool hasPositionAndVelocityCovariance() const = 0;

  /** Enables the Element identified by PositionAndVelocityCovariance.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by
    *      PositionAndVelocityCovariance.
    */
  virtual uci::type::PositionAndVelocityCovarianceType& enablePositionAndVelocityCovariance(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by PositionAndVelocityCovariance.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::KinematicsFixedType& clearPositionAndVelocityCovariance() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Orientation.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Orientation.
    */
  virtual const uci::type::OrientationType& getOrientation() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Orientation.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Orientation.
    */
  virtual uci::type::OrientationType& getOrientation() = 0;

  /** Sets the complex content identified by Orientation to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Orientation.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::KinematicsFixedType& setOrientation(const uci::type::OrientationType& value) = 0;

  /** Returns whether the Element identified by Orientation exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Orientation is enabled or not.
    */
  virtual bool hasOrientation() const = 0;

  /** Enables the Element identified by Orientation.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Orientation.
    */
  virtual uci::type::OrientationType& enableOrientation(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Orientation.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::KinematicsFixedType& clearOrientation() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * OrientationCovariance.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      OrientationCovariance.
    */
  virtual const uci::type::OrientationCovarianceType& getOrientationCovariance() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by OrientationCovariance.
    *
    * @return A reference to the accessor that provides access to the complex content identified by OrientationCovariance.
    */
  virtual uci::type::OrientationCovarianceType& getOrientationCovariance() = 0;

  /** Sets the complex content identified by OrientationCovariance to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by OrientationCovariance.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::KinematicsFixedType& setOrientationCovariance(const uci::type::OrientationCovarianceType& value) = 0;

  /** Returns whether the Element identified by OrientationCovariance exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by OrientationCovariance is enabled or not.
    */
  virtual bool hasOrientationCovariance() const = 0;

  /** Enables the Element identified by OrientationCovariance.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by OrientationCovariance.
    */
  virtual uci::type::OrientationCovarianceType& enableOrientationCovariance(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by OrientationCovariance.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::KinematicsFixedType& clearOrientationCovariance() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  KinematicsFixedType() {
  }

  /** The destructor [only available to derived classes]. */
  ~KinematicsFixedType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The KinematicsFixedType to copy from.
    */
  KinematicsFixedType(const KinematicsFixedType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this KinematicsFixedType to the contents of the KinematicsFixedType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The KinematicsFixedType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this KinematicsFixedType.
    * @return A reference to this KinematicsFixedType.
    */
  KinematicsFixedType& operator=(const KinematicsFixedType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_KINEMATICSFIXEDTYPE_H

