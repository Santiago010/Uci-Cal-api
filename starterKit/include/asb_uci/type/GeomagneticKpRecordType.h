/** @file GeomagneticKpRecordType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:13 PM
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

#ifndef ASB_UCI_TYPE_GEOMAGNETICKPRECORDTYPE_H
#define ASB_UCI_TYPE_GEOMAGNETICKPRECORDTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/GeomagneticKpIndexType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/GeomagneticKpRecordType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Indicates geomagnetic storm space weather record containing Kp Index data. */
class GeomagneticKpRecordType : public virtual uci::type::GeomagneticKpRecordType {
public:
  /** The constructor */
  GeomagneticKpRecordType();

  /** The copy constructor
    *
    * @param rhs The GeomagneticKpRecordType to copy from
    */
  GeomagneticKpRecordType(const GeomagneticKpRecordType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The GeomagneticKpRecordType to move from
    */
  GeomagneticKpRecordType(GeomagneticKpRecordType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The GeomagneticKpRecordType to copy from
    * @return The GeomagneticKpRecordType that was assigned
    */
  GeomagneticKpRecordType& operator=(const GeomagneticKpRecordType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The GeomagneticKpRecordType to move from
    * @return The GeomagneticKpRecordType that was assigned
    */
  GeomagneticKpRecordType& operator=(GeomagneticKpRecordType&& rhs) = delete;

  /** The destructor */
  virtual ~GeomagneticKpRecordType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::GeomagneticKpRecordType whose contents are to be used to set this
    *      uci::type::GeomagneticKpRecordType's contents.
    */
  void copy(const uci::type::GeomagneticKpRecordType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::GeomagneticKpRecordType whose contents are to be used to set this
    *      uci::type::GeomagneticKpRecordType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::GeomagneticKpRecordType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's KpIndex field
    *
    * @return The contents of the KpIndex field
    */
  uci::type::GeomagneticKpIndexTypeValue getKpIndex() const override;

  /** Sets the contents of the message's KpIndex field
    *
    * @param value The new value to set the KpIndex field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GeomagneticKpRecordType& setKpIndex(uci::type::GeomagneticKpIndexTypeValue value) override;

  /** Returns the contents of the message's TimeComputed field
    *
    * @return The contents of the TimeComputed field
    */
  uci::type::DateTimeTypeValue getTimeComputed() const override;

  /** Sets the contents of the message's TimeComputed field
    *
    * @param value The new value to set the TimeComputed field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GeomagneticKpRecordType& setTimeComputed(uci::type::DateTimeTypeValue value) override;

  /** Returns the contents of the message's TimeValid field
    *
    * @return The contents of the TimeValid field
    */
  uci::type::DateTimeTypeValue getTimeValid() const override;

  /** Sets the contents of the message's TimeValid field
    *
    * @param value The new value to set the TimeValid field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GeomagneticKpRecordType& setTimeValid(uci::type::DateTimeTypeValue value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<GeomagneticKpRecordType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::GeomagneticKpRecordType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

  /** 
    *
    * @param accessor .
    * @param propTree .
    * @param nodeName .
    * @param createNode .
    * @param addTypeAttribute .
    * @param checkIfDerivation .
    * @param topLevel .
    * @return .
    */
  static std::string serialize(const uci::type::GeomagneticKpRecordType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  GeomagneticKpIndexTypeValue kpIndex_Accessor{0.0};
  DateTimeTypeValue timeComputed_Accessor{0};
  DateTimeTypeValue timeValid_Accessor{0};

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_GEOMAGNETICKPRECORDTYPE_H
