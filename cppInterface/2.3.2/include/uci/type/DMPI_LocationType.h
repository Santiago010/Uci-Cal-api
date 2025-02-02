/** @file DMPI_LocationType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:06 PM
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

#ifndef UCI_TYPE_DMPI_LOCATIONTYPE_H
#define UCI_TYPE_DMPI_LOCATIONTYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "DistanceType.h"
#include "PercentType.h"
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

/** Specifies the DMPI location information. */
class DMPI_LocationType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new DMPI_LocationType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DMPI_LocationType.
    */
  static UCI_EXPORT DMPI_LocationType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DMPI_LocationType initializing the data accessed by the new DMPI_LocationType using the
    * data accessed by the specified DMPI_LocationType (cloning).
    *
    * @param accessor The DMPI_LocationType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created DMPI_LocationType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DMPI_LocationType.
    */
  static UCI_EXPORT DMPI_LocationType& create(const DMPI_LocationType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DMPI_LocationType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The DMPI_LocationType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DMPI_LocationType& accessor);

  /** Returns this accessor's type constant, i.e. dMPI_LocationType.
    *
    * @return This accessor's type constant, i.e. dMPI_LocationType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::dMPI_LocationType;
  }

  /** Returns the version that was initialized from the uci:version attribute of DMPI_LocationType.
    *
    * @return The version that was initialized from the uci:version attribute of DMPI_LocationType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.002.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DMPI_LocationType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by DMPI_Coordinates.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by DMPI_Coordinates.
    */
  virtual const uci::type::Point3D_Type& getDMPI_Coordinates() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DMPI_Coordinates.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DMPI_Coordinates.
    */
  virtual uci::type::Point3D_Type& getDMPI_Coordinates() = 0;

  /** Sets the complex content identified by DMPI_Coordinates to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DMPI_Coordinates.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_LocationType& setDMPI_Coordinates(const uci::type::Point3D_Type& value) = 0;

  /** Enables the Element identified by DMPI_Coordinates.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available for the element. The use of
    *      this parameter provides support for inheritable types. This parameter defaults to uci::base::accessorType::null
    *      that is used to indicate that the access methods associated with the element shall provide access to data of the
    *      type that was specified for that element in the OMS schema, i.e. the element's base type. If specified, this
    *      field must either be a type ID associated with the element's base type or a type ID associated with a type that
    *      is derived from the element's base type.
    * @return A reference to the accessor that provides access to the complex content identified by DMPI_Coordinates.
    */
  virtual uci::type::Point3D_Type& enableDMPI_Coordinates(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns the value of the SimplePrimitive data type identified by LinearErrorProbable.
    *
    * @return The value of the simple primitive data type identified by LinearErrorProbable.
    */
  virtual uci::type::DistanceTypeValue getLinearErrorProbable() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by LinearErrorProbable.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_LocationType& setLinearErrorProbable(uci::type::DistanceTypeValue value) = 0;

  /** Returns whether the Element identified by LinearErrorProbable exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by LinearErrorProbable is enabled or not.
    */
  virtual bool hasLinearErrorProbable() const = 0;

  /** Clears (disabled) the Element identified by LinearErrorProbable.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_LocationType& clearLinearErrorProbable() = 0;

  /** Returns the value of the SimplePrimitive data type identified by CircularErrorProbable.
    *
    * @return The value of the simple primitive data type identified by CircularErrorProbable.
    */
  virtual uci::type::DistanceTypeValue getCircularErrorProbable() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by CircularErrorProbable.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_LocationType& setCircularErrorProbable(uci::type::DistanceTypeValue value) = 0;

  /** Returns whether the Element identified by CircularErrorProbable exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by CircularErrorProbable is enabled or not.
    */
  virtual bool hasCircularErrorProbable() const = 0;

  /** Clears (disabled) the Element identified by CircularErrorProbable.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_LocationType& clearCircularErrorProbable() = 0;

  /** Returns the value of the SimplePrimitive data type identified by Confidence.
    *
    * @return The value of the simple primitive data type identified by Confidence.
    */
  virtual uci::type::PercentTypeValue getConfidence() const = 0;

  /** Sets the value of the SimplePrimitive data type identified by Confidence.
    *
    * @param value The value to set the SimplePrimitve data type to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_LocationType& setConfidence(uci::type::PercentTypeValue value) = 0;

  /** Returns whether the Element identified by Confidence exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Confidence is enabled or not.
    */
  virtual bool hasConfidence() const = 0;

  /** Clears (disabled) the Element identified by Confidence.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_LocationType& clearConfidence() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DMPI_LocationType() {
  }

  /** The destructor [only available to derived classes]. */
  ~DMPI_LocationType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DMPI_LocationType to copy from.
    */
  DMPI_LocationType(const DMPI_LocationType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DMPI_LocationType to the contents of the DMPI_LocationType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The DMPI_LocationType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this DMPI_LocationType.
    * @return A reference to this DMPI_LocationType.
    */
  DMPI_LocationType& operator=(const DMPI_LocationType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DMPI_LOCATIONTYPE_H

