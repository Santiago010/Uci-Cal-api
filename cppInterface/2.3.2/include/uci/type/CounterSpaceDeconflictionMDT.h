/** @file CounterSpaceDeconflictionMDT.h
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

#ifndef UCI_TYPE_COUNTERSPACEDECONFLICTIONMDT_H
#define UCI_TYPE_COUNTERSPACEDECONFLICTIONMDT_H

#include "../base/BoundedList.h"
#include "../base/export.h"
#include "CS_SatBandDeconType.h"
#include "CounterSpaceDeconflictionID_Type.h"
#include "DataRecordBaseType.h"
#include "DateTimeRangeType.h"
#include "FileLocationID_Type.h"

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

/** This data type provides deconfliction orders for CounterSpace. */
class CounterSpaceDeconflictionMDT : public virtual DataRecordBaseType {
public:

  /** This method constructs a new CounterSpaceDeconflictionMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CounterSpaceDeconflictionMDT.
    */
  static UCI_EXPORT CounterSpaceDeconflictionMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new CounterSpaceDeconflictionMDT initializing the data accessed by the new
    * CounterSpaceDeconflictionMDT using the data accessed by the specified CounterSpaceDeconflictionMDT (cloning).
    *
    * @param accessor The CounterSpaceDeconflictionMDT that provides access to the data that is to be used to initialize
    *      the data accessed by the new created CounterSpaceDeconflictionMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed CounterSpaceDeconflictionMDT.
    */
  static UCI_EXPORT CounterSpaceDeconflictionMDT& create(const CounterSpaceDeconflictionMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified CounterSpaceDeconflictionMDT. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The CounterSpaceDeconflictionMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(CounterSpaceDeconflictionMDT& accessor);

  /** Returns this accessor's type constant, i.e. counterSpaceDeconflictionMDT.
    *
    * @return This accessor's type constant, i.e. counterSpaceDeconflictionMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::counterSpaceDeconflictionMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of CounterSpaceDeconflictionMDT.
    *
    * @return The version that was initialized from the uci:version attribute of CounterSpaceDeconflictionMDT.
    */
  static std::string getUCITypeVersion() {
    return "002.001.001.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const CounterSpaceDeconflictionMDT& accessor) = 0;

  /** This contains deconfliction information for each Antenna/Satellite/Frequency triplet (repeats for each antenna).
    * [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::CS_SatBandDeconType, uci::type::accessorType::cS_SatBandDeconType> SatBandDecon;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * CounterSpaceDeconflictionID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      CounterSpaceDeconflictionID.
    */
  virtual const uci::type::CounterSpaceDeconflictionID_Type& getCounterSpaceDeconflictionID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by
    * CounterSpaceDeconflictionID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by
    *      CounterSpaceDeconflictionID.
    */
  virtual uci::type::CounterSpaceDeconflictionID_Type& getCounterSpaceDeconflictionID() = 0;

  /** Sets the complex content identified by CounterSpaceDeconflictionID to the contents of the complex content accessed by
    * the specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by CounterSpaceDeconflictionID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CounterSpaceDeconflictionMDT& setCounterSpaceDeconflictionID(const uci::type::CounterSpaceDeconflictionID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * DeconflictionPeriod.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      DeconflictionPeriod.
    */
  virtual const uci::type::DateTimeRangeType& getDeconflictionPeriod() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by DeconflictionPeriod.
    *
    * @return A reference to the accessor that provides access to the complex content identified by DeconflictionPeriod.
    */
  virtual uci::type::DateTimeRangeType& getDeconflictionPeriod() = 0;

  /** Sets the complex content identified by DeconflictionPeriod to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by DeconflictionPeriod.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CounterSpaceDeconflictionMDT& setDeconflictionPeriod(const uci::type::DateTimeRangeType& value) = 0;

  /** Returns a const reference to the bounded list identified by SatBandDecon.
    *
    * @return A const reference to the bounded list identified by SatBandDecon.
    */
  virtual const uci::type::CounterSpaceDeconflictionMDT::SatBandDecon& getSatBandDecon() const = 0;

  /** Returns a reference to the bounded list identified by SatBandDecon.
    *
    * @return A reference to the bounded list identified by SatBandDecon.
    */
  virtual uci::type::CounterSpaceDeconflictionMDT::SatBandDecon& getSatBandDecon() = 0;

  /** Sets the bounded list identified by SatBandDecon.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CounterSpaceDeconflictionMDT& setSatBandDecon(const uci::type::CounterSpaceDeconflictionMDT::SatBandDecon& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by IntentID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by IntentID.
    */
  virtual const uci::type::FileLocationID_Type& getIntentID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by IntentID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by IntentID.
    */
  virtual uci::type::FileLocationID_Type& getIntentID() = 0;

  /** Sets the complex content identified by IntentID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by IntentID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CounterSpaceDeconflictionMDT& setIntentID(const uci::type::FileLocationID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by
    * SpecialInstructionsID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by
    *      SpecialInstructionsID.
    */
  virtual const uci::type::FileLocationID_Type& getSpecialInstructionsID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SpecialInstructionsID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SpecialInstructionsID.
    */
  virtual uci::type::FileLocationID_Type& getSpecialInstructionsID() = 0;

  /** Sets the complex content identified by SpecialInstructionsID to the contents of the complex content accessed by the
    * specified accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SpecialInstructionsID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::CounterSpaceDeconflictionMDT& setSpecialInstructionsID(const uci::type::FileLocationID_Type& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  CounterSpaceDeconflictionMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~CounterSpaceDeconflictionMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The CounterSpaceDeconflictionMDT to copy from.
    */
  CounterSpaceDeconflictionMDT(const CounterSpaceDeconflictionMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this CounterSpaceDeconflictionMDT to the contents of the
    * CounterSpaceDeconflictionMDT on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The CounterSpaceDeconflictionMDT on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this CounterSpaceDeconflictionMDT.
    * @return A reference to this CounterSpaceDeconflictionMDT.
    */
  CounterSpaceDeconflictionMDT& operator=(const CounterSpaceDeconflictionMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_COUNTERSPACEDECONFLICTIONMDT_H

