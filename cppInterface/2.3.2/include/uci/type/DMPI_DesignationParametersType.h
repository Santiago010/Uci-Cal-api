/** @file DMPI_DesignationParametersType.h
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

#ifndef UCI_TYPE_DMPI_DESIGNATIONPARAMETERSTYPE_H
#define UCI_TYPE_DMPI_DESIGNATIONPARAMETERSTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ComparableRankingType.h"
#include "DMPI_ID_Type.h"
#include "StrikeStateEnum.h"

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
class DMPI_DesignationParametersType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new DMPI_DesignationParametersType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DMPI_DesignationParametersType.
    */
  static UCI_EXPORT DMPI_DesignationParametersType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DMPI_DesignationParametersType initializing the data accessed by the new
    * DMPI_DesignationParametersType using the data accessed by the specified DMPI_DesignationParametersType (cloning).
    *
    * @param accessor The DMPI_DesignationParametersType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created DMPI_DesignationParametersType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DMPI_DesignationParametersType.
    */
  static UCI_EXPORT DMPI_DesignationParametersType& create(const DMPI_DesignationParametersType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DMPI_DesignationParametersType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The DMPI_DesignationParametersType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DMPI_DesignationParametersType& accessor);

  /** Returns this accessor's type constant, i.e. dMPI_DesignationParametersType.
    *
    * @return This accessor's type constant, i.e. dMPI_DesignationParametersType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::dMPI_DesignationParametersType;
  }

  /** Returns the version that was initialized from the uci:version attribute of DMPI_DesignationParametersType.
    *
    * @return The version that was initialized from the uci:version attribute of DMPI_DesignationParametersType.
    */
  static std::string getUCITypeVersion() {
    return "001.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DMPI_DesignationParametersType& accessor) = 0;

  /** This element specifies a list of alternate DMPIs that can be associated with a primary DMPI. [Occurrences: Minimum:
    * 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::DMPI_ID_Type, uci::type::accessorType::dMPI_ID_Type> AlternateDMPI_ID;

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
  virtual uci::type::DMPI_DesignationParametersType& setDMPI_ID(const uci::type::DMPI_ID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by StrikeState.
    *
    * @return A const reference to the value of the enumeration identified by StrikeState.
    */
  virtual const uci::type::StrikeStateEnum& getStrikeState() const = 0;

  /** Returns a reference to the value of the enumeration identified by StrikeState.
    *
    * @return A reference to the value of the enumeration identified by StrikeState.
    */
  virtual uci::type::StrikeStateEnum& getStrikeState() = 0;

  /** Sets the value of the enumeration identified by StrikeState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_DesignationParametersType& setStrikeState(const uci::type::StrikeStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by StrikeState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_DesignationParametersType& setStrikeState(uci::type::StrikeStateEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the bounded list identified by AlternateDMPI_ID.
    *
    * @return A const reference to the bounded list identified by AlternateDMPI_ID.
    */
  virtual const uci::type::DMPI_DesignationParametersType::AlternateDMPI_ID& getAlternateDMPI_ID() const = 0;

  /** Returns a reference to the bounded list identified by AlternateDMPI_ID.
    *
    * @return A reference to the bounded list identified by AlternateDMPI_ID.
    */
  virtual uci::type::DMPI_DesignationParametersType::AlternateDMPI_ID& getAlternateDMPI_ID() = 0;

  /** Sets the bounded list identified by AlternateDMPI_ID.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DMPI_DesignationParametersType& setAlternateDMPI_ID(const uci::type::DMPI_DesignationParametersType::AlternateDMPI_ID& value) = 0;

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
  virtual uci::type::DMPI_DesignationParametersType& setDMPI_Ranking(const uci::type::ComparableRankingType& value) = 0;

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
  virtual uci::type::DMPI_DesignationParametersType& clearDMPI_Ranking() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  DMPI_DesignationParametersType() {
  }

  /** The destructor [only available to derived classes]. */
  ~DMPI_DesignationParametersType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DMPI_DesignationParametersType to copy from.
    */
  DMPI_DesignationParametersType(const DMPI_DesignationParametersType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DMPI_DesignationParametersType to the contents of the
    * DMPI_DesignationParametersType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The DMPI_DesignationParametersType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this DMPI_DesignationParametersType.
    * @return A reference to this DMPI_DesignationParametersType.
    */
  DMPI_DesignationParametersType& operator=(const DMPI_DesignationParametersType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DMPI_DESIGNATIONPARAMETERSTYPE_H

