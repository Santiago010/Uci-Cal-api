/** @file GeomagneticStormKpType.h
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

#ifndef ASB_UCI_TYPE_GEOMAGNETICSTORMKPTYPE_H
#define ASB_UCI_TYPE_GEOMAGNETICSTORMKPTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/GeomagneticRecordKpEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/GeomagneticStormKpType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class GeomagneticKpRecordType;

/** Indicates geomagnetic storm Kp index space weather data type. */
class GeomagneticStormKpType : public virtual uci::type::GeomagneticStormKpType {
public:
  /** This element indicates a record of geomagnetic storm space weather data. [Occurrences: Minimum: 1; Maximum:
    * MAX_LENGTH]
    */
  using GeomagneticKpRecord = asb_uci::base::BoundedList<uci::type::GeomagneticKpRecordType, uci::type::accessorType::geomagneticKpRecordType, asb_uci::type::GeomagneticKpRecordType>;

  /** The constructor */
  GeomagneticStormKpType();

  /** The copy constructor
    *
    * @param rhs The GeomagneticStormKpType to copy from
    */
  GeomagneticStormKpType(const GeomagneticStormKpType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The GeomagneticStormKpType to move from
    */
  GeomagneticStormKpType(GeomagneticStormKpType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The GeomagneticStormKpType to copy from
    * @return The GeomagneticStormKpType that was assigned
    */
  GeomagneticStormKpType& operator=(const GeomagneticStormKpType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The GeomagneticStormKpType to move from
    * @return The GeomagneticStormKpType that was assigned
    */
  GeomagneticStormKpType& operator=(GeomagneticStormKpType&& rhs) = delete;

  /** The destructor */
  virtual ~GeomagneticStormKpType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::GeomagneticStormKpType whose contents are to be used to set this
    *      uci::type::GeomagneticStormKpType's contents.
    */
  void copy(const uci::type::GeomagneticStormKpType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::GeomagneticStormKpType whose contents are to be used to set this
    *      uci::type::GeomagneticStormKpType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::GeomagneticStormKpType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's GeomagneticRecordKpType field
    *
    * @return The contents of the GeomagneticRecordKpType field
    */
  const uci::type::GeomagneticRecordKpEnum& getGeomagneticRecordKpType() const override;

  /** Returns the contents of the message's GeomagneticRecordKpType field
    *
    * @return The contents of the GeomagneticRecordKpType field
    */
  uci::type::GeomagneticRecordKpEnum& getGeomagneticRecordKpType() override;

  /** Sets the contents of the message's GeomagneticRecordKpType field
    *
    * @param accessor The accessor to use to set the GeomagneticRecordKpType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GeomagneticStormKpType& setGeomagneticRecordKpType(const uci::type::GeomagneticRecordKpEnum& accessor) override;

  /** Sets the contents of the message's GeomagneticRecordKpType field
    *
    * @param value The new value to set the GeomagneticRecordKpType field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::GeomagneticStormKpType& setGeomagneticRecordKpType(uci::type::GeomagneticRecordKpEnum::EnumerationItem value) override;

  /** Returns the accessor to the GeomagneticKpRecord field contained in this message fragment
    *
    * @return The const reference to the accessor to the GeomagneticKpRecord field.
    */
  const uci::type::GeomagneticStormKpType::GeomagneticKpRecord& getGeomagneticKpRecord() const override;

  /** Returns the accessor to the GeomagneticKpRecord field contained in this message fragment
    *
    * @return The reference to the accessor to the GeomagneticKpRecord field.
    */
  uci::type::GeomagneticStormKpType::GeomagneticKpRecord& getGeomagneticKpRecord() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::GeomagneticStormKpType& setGeomagneticKpRecord(const uci::type::GeomagneticStormKpType::GeomagneticKpRecord& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<GeomagneticStormKpType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::GeomagneticStormKpType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::GeomagneticStormKpType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<GeomagneticRecordKpEnum> geomagneticRecordKpType_Accessor;
  std::unique_ptr<GeomagneticKpRecord> geomagneticKpRecord_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_GEOMAGNETICSTORMKPTYPE_H
