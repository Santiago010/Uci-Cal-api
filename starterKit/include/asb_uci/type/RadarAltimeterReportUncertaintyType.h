/** @file RadarAltimeterReportUncertaintyType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:14 PM
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

#ifndef ASB_UCI_TYPE_RADARALTIMETERREPORTUNCERTAINTYTYPE_H
#define ASB_UCI_TYPE_RADARALTIMETERREPORTUNCERTAINTYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/DistanceType.h"
#include "../../../include/asb_uci/type/SpeedType.h"
#include "../../../include/asb_uci/type/TimeType.h"
#include "../../../include/asb_uci/type/UncertaintyEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/RadarAltimeterReportUncertaintyType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Uncertainty of the altimetry measurement items. */
class RadarAltimeterReportUncertaintyType : public virtual uci::type::RadarAltimeterReportUncertaintyType {
public:
  /** The constructor */
  RadarAltimeterReportUncertaintyType();

  /** The copy constructor
    *
    * @param rhs The RadarAltimeterReportUncertaintyType to copy from
    */
  RadarAltimeterReportUncertaintyType(const RadarAltimeterReportUncertaintyType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The RadarAltimeterReportUncertaintyType to move from
    */
  RadarAltimeterReportUncertaintyType(RadarAltimeterReportUncertaintyType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The RadarAltimeterReportUncertaintyType to copy from
    * @return The RadarAltimeterReportUncertaintyType that was assigned
    */
  RadarAltimeterReportUncertaintyType& operator=(const RadarAltimeterReportUncertaintyType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The RadarAltimeterReportUncertaintyType to move from
    * @return The RadarAltimeterReportUncertaintyType that was assigned
    */
  RadarAltimeterReportUncertaintyType& operator=(RadarAltimeterReportUncertaintyType&& rhs) = delete;

  /** The destructor */
  virtual ~RadarAltimeterReportUncertaintyType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RadarAltimeterReportUncertaintyType whose contents are to be used to set this
    *      uci::type::RadarAltimeterReportUncertaintyType's contents.
    */
  void copy(const uci::type::RadarAltimeterReportUncertaintyType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::RadarAltimeterReportUncertaintyType whose contents are to be used to set this
    *      uci::type::RadarAltimeterReportUncertaintyType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::RadarAltimeterReportUncertaintyType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::DistanceTypeValue getHeightUncertainty() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RadarAltimeterReportUncertaintyType& setHeightUncertainty(uci::type::DistanceTypeValue value) override;

  /** Returns whether this optional field HeightUncertaintyis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasHeightUncertainty() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RadarAltimeterReportUncertaintyType& clearHeightUncertainty() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::SpeedTypeValue getVerticalClosingVelocityUncertainty() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RadarAltimeterReportUncertaintyType& setVerticalClosingVelocityUncertainty(uci::type::SpeedTypeValue value) override;

  /** Returns whether this optional field VerticalClosingVelocityUncertaintyis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasVerticalClosingVelocityUncertainty() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RadarAltimeterReportUncertaintyType& clearVerticalClosingVelocityUncertainty() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::TimeTypeValue getUncertaintyTimeWindow() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::RadarAltimeterReportUncertaintyType& setUncertaintyTimeWindow(uci::type::TimeTypeValue value) override;

  /** Returns whether this optional field UncertaintyTimeWindowis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasUncertaintyTimeWindow() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RadarAltimeterReportUncertaintyType& clearUncertaintyTimeWindow() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::UncertaintyEnum& getUncertaintyCalculation_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::UncertaintyEnum& getUncertaintyCalculation() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::UncertaintyEnum& getUncertaintyCalculation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RadarAltimeterReportUncertaintyType& setUncertaintyCalculation(const uci::type::UncertaintyEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::RadarAltimeterReportUncertaintyType& setUncertaintyCalculation(uci::type::UncertaintyEnum::EnumerationItem value) override;

  /** Returns whether this optional field UncertaintyCalculationis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasUncertaintyCalculation() const noexcept override;

  /** Enables the optional field such that getUncertaintyCalculation will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::UncertaintyEnum& enableUncertaintyCalculation(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::RadarAltimeterReportUncertaintyType& clearUncertaintyCalculation() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<RadarAltimeterReportUncertaintyType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::RadarAltimeterReportUncertaintyType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::RadarAltimeterReportUncertaintyType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  boost::optional<DistanceTypeValue> heightUncertainty_Accessor;
  boost::optional<SpeedTypeValue> verticalClosingVelocityUncertainty_Accessor;
  boost::optional<TimeTypeValue> uncertaintyTimeWindow_Accessor;
  std::unique_ptr<UncertaintyEnum> uncertaintyCalculation_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_RADARALTIMETERREPORTUNCERTAINTYTYPE_H
