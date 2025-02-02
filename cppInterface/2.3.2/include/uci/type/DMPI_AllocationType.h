/** @file DMPI_AllocationType.h
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

#ifndef UCI_TYPE_DMPI_ALLOCATIONTYPE_H
#define UCI_TYPE_DMPI_ALLOCATIONTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CapabilityID_Type.h"
#include "ComparableRankingType.h"
#include "DMPI_ID_Type.h"

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
class DMPI_AllocationType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new DMPI_AllocationType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DMPI_AllocationType.
    */
  static UCI_EXPORT DMPI_AllocationType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DMPI_AllocationType initializing the data accessed by the new DMPI_AllocationType using
    * the data accessed by the specified DMPI_AllocationType (cloning).
    *
    * @param accessor The DMPI_AllocationType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created DMPI_AllocationType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DMPI_AllocationType.
    */
  static UCI_EXPORT DMPI_AllocationType& create(const DMPI_AllocationType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DMPI_AllocationType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The DMPI_AllocationType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DMPI_AllocationType& accessor);

  /** Returns this accessor's type constant, i.e. dMPI_AllocationType.
    *
    * @return This accessor's type constant, i.e. dMPI_AllocationType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::dMPI_AllocationType;
  }

  /** Returns the version that was initialized from the uci:version attribute of DMPI_AllocationType.
    *
    * @return The version that was initialized from the uci:version attribute of DMPI_AllocationType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DMPI_AllocationType& accessor) = 0;

  /** Indicates a kinetic weapon Capability instance associated with the sibling DMPI. Optional when any instance of
    * Capability (of the Capability type inferred by the Requirement) on the allocated System will suffice. Multiple
    * instances of this element can be used for Requirements with multiple kinetic weapons assigned to a single DMPI.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::CapabilityID_Type, uci::type::accessorType::capabilityID_Type> CapabilityID;

  /** Returns a const reference to the accessor that provides access to the complex content identified by DMPI_ID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by DMPI_ID.
    */
  virtual const uci::type::DMPI_ID_Type& getDMPI_ID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DMPI_ID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DMPI_ID.
    */
  virtual uci::type::DMPI_ID_Type& getDMPI_ID() = 0;

  /** Sets the complex content identified by DMPI_ID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DMPI_ID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_AllocationType& setDMPI_ID(const uci::type::DMPI_ID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by DMPI_Ranking.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by DMPI_Ranking.
    */
  virtual const uci::type::ComparableRankingType& getDMPI_Ranking() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DMPI_Ranking.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DMPI_Ranking.
    */
  virtual uci::type::ComparableRankingType& getDMPI_Ranking() = 0;

  /** Sets the complex content identified by DMPI_Ranking to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DMPI_Ranking.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_AllocationType& setDMPI_Ranking(const uci::type::ComparableRankingType& value) = 0;

  /** Returns whether the Element identified by DMPI_Ranking exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by DMPI_Ranking is enabled or not.
    */
  virtual bool hasDMPI_Ranking() const = 0;

  /** Enables the Element identified by DMPI_Ranking.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by DMPI_Ranking.
    */
  virtual uci::type::ComparableRankingType& enableDMPI_Ranking(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by DMPI_Ranking.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_AllocationType& clearDMPI_Ranking() = 0;

  /** Returns a const reference to the bounded list identified by CapabilityID.
    *
    * @return A const reference to the bounded list identified by CapabilityID.
    */
  virtual const uci::type::DMPI_AllocationType::CapabilityID& getCapabilityID() const = 0;

  /** Returns a reference to the bounded list identified by CapabilityID.
    *
    * @return A reference to the bounded list identified by CapabilityID.
    */
  virtual uci::type::DMPI_AllocationType::CapabilityID& getCapabilityID() = 0;

  /** Sets the bounded list identified by CapabilityID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_AllocationType& setCapabilityID(const uci::type::DMPI_AllocationType::CapabilityID& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DMPI_AllocationType() {
  }

  /** The destructor [only available to derived classes]. */
  ~DMPI_AllocationType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DMPI_AllocationType to copy from.
    */
  DMPI_AllocationType(const DMPI_AllocationType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DMPI_AllocationType to the contents of the DMPI_AllocationType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The DMPI_AllocationType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this DMPI_AllocationType.
    * @return A reference to this DMPI_AllocationType.
    */
  DMPI_AllocationType& operator=(const DMPI_AllocationType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DMPI_ALLOCATIONTYPE_H

