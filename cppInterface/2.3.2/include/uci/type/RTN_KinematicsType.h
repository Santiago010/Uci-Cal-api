/** @file RTN_KinematicsType.h
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

#ifndef UCI_TYPE_RTN_KINEMATICSTYPE_H
#define UCI_TYPE_RTN_KINEMATICSTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "CovarianceMatrixType.h"
#include "DateTimeType.h"
#include "QuaternionType.h"
#include "RTN_AccelerationType.h"
#include "RTN_PositionType.h"
#include "RTN_VelocityType.h"

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

/** Indicates kinematic vectors in the Radial-Transverse-Normal (RTN) reference frame, also known as the Radial,
  * In-Track, Cross-Track (RIC) reference frame. The Radial basis vector is aligned with the position vector. The Normal
  * basis vector is aligned with the angular momentum direction (which is the orbit normal direction). The Transverse
  * basis vector is in the direction of N x R to complete the right-handed triad.
  */
class RTN_KinematicsType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new RTN_KinematicsType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RTN_KinematicsType.
    */
  static UCI_EXPORT RTN_KinematicsType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new RTN_KinematicsType initializing the data accessed by the new RTN_KinematicsType using
    * the data accessed by the specified RTN_KinematicsType (cloning).
    *
    * @param accessor The RTN_KinematicsType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created RTN_KinematicsType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed RTN_KinematicsType.
    */
  static UCI_EXPORT RTN_KinematicsType& create(const RTN_KinematicsType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified RTN_KinematicsType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The RTN_KinematicsType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(RTN_KinematicsType& accessor);

  /** Returns this accessor's type constant, i.e. rTN_KinematicsType.
    *
    * @return This accessor's type constant, i.e. rTN_KinematicsType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::rTN_KinematicsType;
  }

  /** Returns the version that was initialized from the uci:version attribute of RTN_KinematicsType.
    *
    * @return The version that was initialized from the uci:version attribute of RTN_KinematicsType.
    */
  static std::string getUCITypeVersion() {
    return "002.001.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const RTN_KinematicsType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by Epoch.
    *
    * @return The value of the simple primitive data type identified by Epoch.
    */
  virtual uci::type::DateTimeTypeValue getEpoch() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Epoch.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_KinematicsType& setEpoch(uci::type::DateTimeTypeValue value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Position.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Position.
    */
  virtual const uci::type::RTN_PositionType& getPosition() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Position.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Position.
    */
  virtual uci::type::RTN_PositionType& getPosition() = 0;

  /** Sets the complex content identified by Position to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Position.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_KinematicsType& setPosition(const uci::type::RTN_PositionType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Velocity.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Velocity.
    */
  virtual const uci::type::RTN_VelocityType& getVelocity() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Velocity.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Velocity.
    */
  virtual uci::type::RTN_VelocityType& getVelocity() = 0;

  /** Sets the complex content identified by Velocity to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Velocity.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_KinematicsType& setVelocity(const uci::type::RTN_VelocityType& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Acceleration.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Acceleration.
    */
  virtual const uci::type::RTN_AccelerationType& getAcceleration() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Acceleration.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Acceleration.
    */
  virtual uci::type::RTN_AccelerationType& getAcceleration() = 0;

  /** Sets the complex content identified by Acceleration to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Acceleration.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_KinematicsType& setAcceleration(const uci::type::RTN_AccelerationType& value) = 0;

  /** Returns whether the Element identified by Acceleration exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Acceleration is enabled or not.
    */
  virtual bool hasAcceleration() const = 0;

  /** Enables the Element identified by Acceleration.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Acceleration.
    */
  virtual uci::type::RTN_AccelerationType& enableAcceleration(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Acceleration.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_KinematicsType& clearAcceleration() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Attitude.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Attitude.
    */
  virtual const uci::type::QuaternionType& getAttitude() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Attitude.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Attitude.
    */
  virtual uci::type::QuaternionType& getAttitude() = 0;

  /** Sets the complex content identified by Attitude to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Attitude.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_KinematicsType& setAttitude(const uci::type::QuaternionType& value) = 0;

  /** Returns whether the Element identified by Attitude exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Attitude is enabled or not.
    */
  virtual bool hasAttitude() const = 0;

  /** Enables the Element identified by Attitude.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Attitude.
    */
  virtual uci::type::QuaternionType& enableAttitude(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Attitude.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_KinematicsType& clearAttitude() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Covariance.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Covariance.
    */
  virtual const uci::type::CovarianceMatrixType& getCovariance() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Covariance.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Covariance.
    */
  virtual uci::type::CovarianceMatrixType& getCovariance() = 0;

  /** Sets the complex content identified by Covariance to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Covariance.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_KinematicsType& setCovariance(const uci::type::CovarianceMatrixType& value) = 0;

  /** Returns whether the Element identified by Covariance exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Covariance is enabled or not.
    */
  virtual bool hasCovariance() const = 0;

  /** Enables the Element identified by Covariance.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Covariance.
    */
  virtual uci::type::CovarianceMatrixType& enableCovariance(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Covariance.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::RTN_KinematicsType& clearCovariance() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  RTN_KinematicsType() {
  }

  /** The destructor [only available to derived classes]. */
  ~RTN_KinematicsType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The RTN_KinematicsType to copy from.
    */
  RTN_KinematicsType(const RTN_KinematicsType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this RTN_KinematicsType to the contents of the RTN_KinematicsType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The RTN_KinematicsType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this RTN_KinematicsType.
    * @return A reference to this RTN_KinematicsType.
    */
  RTN_KinematicsType& operator=(const RTN_KinematicsType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_RTN_KINEMATICSTYPE_H

