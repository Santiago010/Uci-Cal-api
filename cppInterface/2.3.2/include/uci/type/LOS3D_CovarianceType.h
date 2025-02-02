/** @file LOS3D_CovarianceType.h
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

#ifndef UCI_TYPE_LOS3D_COVARIANCETYPE_H
#define UCI_TYPE_LOS3D_COVARIANCETYPE_H

#include "../base/Accessor.h"
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

/** This type contains the 1-sigma covariance of line of sight angles and slant range. The covariance is symmetric and
  * therefore the covariance values expressed here are the minimum set.
  */
class LOS3D_CovarianceType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new LOS3D_CovarianceType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed LOS3D_CovarianceType.
    */
  static UCI_EXPORT LOS3D_CovarianceType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new LOS3D_CovarianceType initializing the data accessed by the new LOS3D_CovarianceType
    * using the data accessed by the specified LOS3D_CovarianceType (cloning).
    *
    * @param accessor The LOS3D_CovarianceType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created LOS3D_CovarianceType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed LOS3D_CovarianceType.
    */
  static UCI_EXPORT LOS3D_CovarianceType& create(const LOS3D_CovarianceType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified LOS3D_CovarianceType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The LOS3D_CovarianceType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(LOS3D_CovarianceType& accessor);

  /** Returns this accessor's type constant, i.e. lOS3D_CovarianceType.
    *
    * @return This accessor's type constant, i.e. lOS3D_CovarianceType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::lOS3D_CovarianceType;
  }

  /** Returns the version that was initialized from the uci:version attribute of LOS3D_CovarianceType.
    *
    * @return The version that was initialized from the uci:version attribute of LOS3D_CovarianceType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const LOS3D_CovarianceType& accessor) = 0;

  /** Returns the value of the SimplePrimitive data type identified by RvRv.
    *
    * @return The value of the simple primitive data type identified by RvRv.
    */
  virtual xs::Double getRvRv() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RvRv.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LOS3D_CovarianceType& setRvRv(xs::Double value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by RvRh.
    *
    * @return The value of the simple primitive data type identified by RvRh.
    */
  virtual xs::Double getRvRh() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RvRh.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LOS3D_CovarianceType& setRvRh(xs::Double value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by RhRh.
    *
    * @return The value of the simple primitive data type identified by RhRh.
    */
  virtual xs::Double getRhRh() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by RhRh.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LOS3D_CovarianceType& setRhRh(xs::Double value) = 0;

  /** Returns the value of the SimplePrimitive data type identified by PsRv.
    *
    * @return The value of the simple primitive data type identified by PsRv.
    */
  virtual xs::Double getPsRv() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PsRv.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LOS3D_CovarianceType& setPsRv(xs::Double value) = 0;

  /** Returns whether the Element identified by PsRv exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PsRv is enabled or not.
    */
  virtual bool hasPsRv() const = 0;

  /** Clears (disabled) the Element identified by PsRv.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LOS3D_CovarianceType& clearPsRv() = 0;

  /** Returns the value of the SimplePrimitive data type identified by PsRh.
    *
    * @return The value of the simple primitive data type identified by PsRh.
    */
  virtual xs::Double getPsRh() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PsRh.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LOS3D_CovarianceType& setPsRh(xs::Double value) = 0;

  /** Returns whether the Element identified by PsRh exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PsRh is enabled or not.
    */
  virtual bool hasPsRh() const = 0;

  /** Clears (disabled) the Element identified by PsRh.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LOS3D_CovarianceType& clearPsRh() = 0;

  /** Returns the value of the SimplePrimitive data type identified by PsPs.
    *
    * @return The value of the simple primitive data type identified by PsPs.
    */
  virtual xs::Double getPsPs() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by PsPs.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LOS3D_CovarianceType& setPsPs(xs::Double value) = 0;

  /** Returns whether the Element identified by PsPs exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by PsPs is enabled or not.
    */
  virtual bool hasPsPs() const = 0;

  /** Clears (disabled) the Element identified by PsPs.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::LOS3D_CovarianceType& clearPsPs() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  LOS3D_CovarianceType() {
  }

  /** The destructor [only available to derived classes]. */
  ~LOS3D_CovarianceType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The LOS3D_CovarianceType to copy from.
    */
  LOS3D_CovarianceType(const LOS3D_CovarianceType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this LOS3D_CovarianceType to the contents of the LOS3D_CovarianceType
    * on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The LOS3D_CovarianceType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this LOS3D_CovarianceType.
    * @return A reference to this LOS3D_CovarianceType.
    */
  LOS3D_CovarianceType& operator=(const LOS3D_CovarianceType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_LOS3D_COVARIANCETYPE_H

