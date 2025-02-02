/** @file EA_DetailsAssignedType.h
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

#ifndef UCI_TYPE_EA_DETAILSASSIGNEDTYPE_H
#define UCI_TYPE_EA_DETAILSASSIGNEDTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ComponentID_Type.h"
#include "EA_BeamGroupType.h"

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
class EA_DetailsAssignedType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EA_DetailsAssignedType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EA_DetailsAssignedType.
    */
  static UCI_EXPORT EA_DetailsAssignedType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EA_DetailsAssignedType initializing the data accessed by the new EA_DetailsAssignedType
    * using the data accessed by the specified EA_DetailsAssignedType (cloning).
    *
    * @param accessor The EA_DetailsAssignedType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created EA_DetailsAssignedType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EA_DetailsAssignedType.
    */
  static UCI_EXPORT EA_DetailsAssignedType& create(const EA_DetailsAssignedType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EA_DetailsAssignedType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The EA_DetailsAssignedType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EA_DetailsAssignedType& accessor);

  /** Returns this accessor's type constant, i.e. eA_DetailsAssignedType.
    *
    * @return This accessor's type constant, i.e. eA_DetailsAssignedType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::eA_DetailsAssignedType;
  }

  /** Returns the version that was initialized from the uci:version attribute of EA_DetailsAssignedType.
    *
    * @return The version that was initialized from the uci:version attribute of EA_DetailsAssignedType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EA_DetailsAssignedType& accessor) = 0;

  /** Pairs of Receive and Transmit Beams performing a "Jam". Must choose TxBeam or RxBeam or both. [Occurrences: Minimum:
    * 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::EA_BeamGroupType, uci::type::accessorType::eA_BeamGroupType> EA_BeamGroup;

  /** Returns a const reference to the accessor that provides access to the complex content identified by ComponentID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by ComponentID.
    */
  virtual const uci::type::ComponentID_Type& getComponentID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by ComponentID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by ComponentID.
    */
  virtual uci::type::ComponentID_Type& getComponentID() = 0;

  /** Sets the complex content identified by ComponentID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by ComponentID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_DetailsAssignedType& setComponentID(const uci::type::ComponentID_Type& value) = 0;

  /** Returns a const reference to the bounded list identified by EA_BeamGroup.
    *
    * @return A const reference to the bounded list identified by EA_BeamGroup.
    */
  virtual const uci::type::EA_DetailsAssignedType::EA_BeamGroup& getEA_BeamGroup() const = 0;

  /** Returns a reference to the bounded list identified by EA_BeamGroup.
    *
    * @return A reference to the bounded list identified by EA_BeamGroup.
    */
  virtual uci::type::EA_DetailsAssignedType::EA_BeamGroup& getEA_BeamGroup() = 0;

  /** Sets the bounded list identified by EA_BeamGroup.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EA_DetailsAssignedType& setEA_BeamGroup(const uci::type::EA_DetailsAssignedType::EA_BeamGroup& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EA_DetailsAssignedType() {
  }

  /** The destructor [only available to derived classes]. */
  ~EA_DetailsAssignedType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EA_DetailsAssignedType to copy from.
    */
  EA_DetailsAssignedType(const EA_DetailsAssignedType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EA_DetailsAssignedType to the contents of the
    * EA_DetailsAssignedType on the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The EA_DetailsAssignedType on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this EA_DetailsAssignedType.
    * @return A reference to this EA_DetailsAssignedType.
    */
  EA_DetailsAssignedType& operator=(const EA_DetailsAssignedType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_EA_DETAILSASSIGNEDTYPE_H

