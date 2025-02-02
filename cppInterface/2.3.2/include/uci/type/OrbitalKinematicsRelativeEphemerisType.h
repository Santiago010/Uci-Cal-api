/** @file OrbitalKinematicsRelativeEphemerisType.h
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

#ifndef UCI_TYPE_ORBITALKINEMATICSRELATIVEEPHEMERISTYPE_H
#define UCI_TYPE_ORBITALKINEMATICSRELATIVEEPHEMERISTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "AssetType.h"
#include "OrbitalKinematicsRelativeStateVectorType.h"

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

/** Indicates one or many kinematic vectors expressed, relative to the object described in the ReferenceObjectKinematics
  * element.
  */
class OrbitalKinematicsRelativeEphemerisType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new OrbitalKinematicsRelativeEphemerisType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitalKinematicsRelativeEphemerisType.
    */
  static UCI_EXPORT OrbitalKinematicsRelativeEphemerisType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new OrbitalKinematicsRelativeEphemerisType initializing the data accessed by the new
    * OrbitalKinematicsRelativeEphemerisType using the data accessed by the specified
    * OrbitalKinematicsRelativeEphemerisType (cloning).
    *
    * @param accessor The OrbitalKinematicsRelativeEphemerisType that provides access to the data that is to be used to
    *      initialize the data accessed by the new created OrbitalKinematicsRelativeEphemerisType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed OrbitalKinematicsRelativeEphemerisType.
    */
  static UCI_EXPORT OrbitalKinematicsRelativeEphemerisType& create(const OrbitalKinematicsRelativeEphemerisType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified OrbitalKinematicsRelativeEphemerisType. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The OrbitalKinematicsRelativeEphemerisType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(OrbitalKinematicsRelativeEphemerisType& accessor);

  /** Returns this accessor's type constant, i.e. orbitalKinematicsRelativeEphemerisType.
    *
    * @return This accessor's type constant, i.e. orbitalKinematicsRelativeEphemerisType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::orbitalKinematicsRelativeEphemerisType;
  }

  /** Returns the version that was initialized from the uci:version attribute of OrbitalKinematicsRelativeEphemerisType.
    *
    * @return The version that was initialized from the uci:version attribute of OrbitalKinematicsRelativeEphemerisType.
    */
  static std::string getUCITypeVersion() {
    return "002.001.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const OrbitalKinematicsRelativeEphemerisType& accessor) = 0;

  /** Indicates kinematic vectors for an orbital object that serves as the reference for the relative kinematics given by
    * the sibling RelativeObjectKinematics element. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::OrbitalKinematicsRelativeStateVectorType, uci::type::accessorType::orbitalKinematicsRelativeStateVectorType> RelativeStateVector;

  /** Returns a const reference to the bounded list identified by RelativeStateVector.
    *
    * @return A const reference to the bounded list identified by RelativeStateVector.
    */
  virtual const uci::type::OrbitalKinematicsRelativeEphemerisType::RelativeStateVector& getRelativeStateVector() const = 0;

  /** Returns a reference to the bounded list identified by RelativeStateVector.
    *
    * @return A reference to the bounded list identified by RelativeStateVector.
    */
  virtual uci::type::OrbitalKinematicsRelativeEphemerisType::RelativeStateVector& getRelativeStateVector() = 0;

  /** Sets the bounded list identified by RelativeStateVector.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalKinematicsRelativeEphemerisType& setRelativeStateVector(const uci::type::OrbitalKinematicsRelativeEphemerisType::RelativeStateVector& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ReferenceAsset.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ReferenceAsset.
    */
  virtual const uci::type::AssetType& getReferenceAsset() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ReferenceAsset.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ReferenceAsset.
    */
  virtual uci::type::AssetType& getReferenceAsset() = 0;

  /** Sets the complex content identified by ReferenceAsset to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ReferenceAsset.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalKinematicsRelativeEphemerisType& setReferenceAsset(const uci::type::AssetType& value) = 0;

  /** Returns whether the Element identified by ReferenceAsset exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ReferenceAsset is enabled or not.
    */
  virtual bool hasReferenceAsset() const = 0;

  /** Enables the Element identified by ReferenceAsset.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by ReferenceAsset.
    */
  virtual uci::type::AssetType& enableReferenceAsset(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ReferenceAsset.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::OrbitalKinematicsRelativeEphemerisType& clearReferenceAsset() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  OrbitalKinematicsRelativeEphemerisType() {
  }

  /** The destructor [only available to derived classes]. */
  ~OrbitalKinematicsRelativeEphemerisType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The OrbitalKinematicsRelativeEphemerisType to copy from.
    */
  OrbitalKinematicsRelativeEphemerisType(const OrbitalKinematicsRelativeEphemerisType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this OrbitalKinematicsRelativeEphemerisType to the contents of the
    * OrbitalKinematicsRelativeEphemerisType on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The OrbitalKinematicsRelativeEphemerisType on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this OrbitalKinematicsRelativeEphemerisType.
    * @return A reference to this OrbitalKinematicsRelativeEphemerisType.
    */
  OrbitalKinematicsRelativeEphemerisType& operator=(const OrbitalKinematicsRelativeEphemerisType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ORBITALKINEMATICSRELATIVEEPHEMERISTYPE_H

