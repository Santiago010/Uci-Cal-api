/** @file LOS_MeasurementWithUncertaintyType.h
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

#ifndef ASB_UCI_TYPE_LOS_MEASUREMENTWITHUNCERTAINTYTYPE_H
#define ASB_UCI_TYPE_LOS_MEASUREMENTWITHUNCERTAINTYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/LOS_MeasurementEnum.h"
#include "../../../include/asb_uci/type/MeasurementTypeEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/LOS_MeasurementWithUncertaintyType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CapabilityID_Type;
class ComponentID_Type;
class LOS_MeasurementType;
class LOS_MeasurementUncertaintyErrorSourcesType;

/** See annotations in child elements and messages/elements that use this type for details. */
class LOS_MeasurementWithUncertaintyType : public virtual uci::type::LOS_MeasurementWithUncertaintyType {
public:
  /** Indicates LOS measurement types. List size for this element is based on "Select All That Apply" condition.
    * [Occurrences: Minimum: 0; Maximum: 9]
    */
  using MeasurementType = asb_uci::base::BoundedList<uci::type::MeasurementTypeEnum, uci::type::accessorType::measurementTypeEnum, asb_uci::type::MeasurementTypeEnum>;

  /** The constructor */
  LOS_MeasurementWithUncertaintyType();

  /** The copy constructor
    *
    * @param rhs The LOS_MeasurementWithUncertaintyType to copy from
    */
  LOS_MeasurementWithUncertaintyType(const LOS_MeasurementWithUncertaintyType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The LOS_MeasurementWithUncertaintyType to move from
    */
  LOS_MeasurementWithUncertaintyType(LOS_MeasurementWithUncertaintyType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The LOS_MeasurementWithUncertaintyType to copy from
    * @return The LOS_MeasurementWithUncertaintyType that was assigned
    */
  LOS_MeasurementWithUncertaintyType& operator=(const LOS_MeasurementWithUncertaintyType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The LOS_MeasurementWithUncertaintyType to move from
    * @return The LOS_MeasurementWithUncertaintyType that was assigned
    */
  LOS_MeasurementWithUncertaintyType& operator=(LOS_MeasurementWithUncertaintyType&& rhs) = delete;

  /** The destructor */
  virtual ~LOS_MeasurementWithUncertaintyType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::LOS_MeasurementWithUncertaintyType whose contents are to be used to set this
    *      uci::type::LOS_MeasurementWithUncertaintyType's contents.
    */
  void copy(const uci::type::LOS_MeasurementWithUncertaintyType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::LOS_MeasurementWithUncertaintyType whose contents are to be used to set this
    *      uci::type::LOS_MeasurementWithUncertaintyType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::LOS_MeasurementWithUncertaintyType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's Timestamp field
    *
    * @return The contents of the Timestamp field
    */
  uci::type::DateTimeTypeValue getTimestamp() const override;

  /** Sets the contents of the message's Timestamp field
    *
    * @param value The new value to set the Timestamp field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& setTimestamp(uci::type::DateTimeTypeValue value) override;

  /** Returns the contents of the message's Reference field
    *
    * @return The contents of the Reference field
    */
  const uci::type::LOS_MeasurementEnum& getReference() const override;

  /** Returns the contents of the message's Reference field
    *
    * @return The contents of the Reference field
    */
  uci::type::LOS_MeasurementEnum& getReference() override;

  /** Sets the contents of the message's Reference field
    *
    * @param accessor The accessor to use to set the Reference field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& setReference(const uci::type::LOS_MeasurementEnum& accessor) override;

  /** Sets the contents of the message's Reference field
    *
    * @param value The new value to set the Reference field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& setReference(uci::type::LOS_MeasurementEnum::EnumerationItem value) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CapabilityID_Type& getCapabilityID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CapabilityID_Type& getCapabilityID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CapabilityID_Type& getCapabilityID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& setCapabilityID(const uci::type::CapabilityID_Type& accessor) override;

  /** Returns whether this optional field CapabilityIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasCapabilityID() const noexcept override;

  /** Enables the optional field such that getCapabilityID will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CapabilityID_Type& enableCapabilityID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& clearCapabilityID() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComponentID_Type& getComponentID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ComponentID_Type& getComponentID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComponentID_Type& getComponentID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& setComponentID(const uci::type::ComponentID_Type& accessor) override;

  /** Returns whether this optional field ComponentIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasComponentID() const noexcept override;

  /** Enables the optional field such that getComponentID will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ComponentID_Type& enableComponentID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& clearComponentID() noexcept override;

  /** Returns the accessor to the MeasurementType field contained in this message fragment
    *
    * @return The const reference to the accessor to the MeasurementType field.
    */
  const uci::type::LOS_MeasurementWithUncertaintyType::MeasurementType& getMeasurementType() const override;

  /** Returns the accessor to the MeasurementType field contained in this message fragment
    *
    * @return The reference to the accessor to the MeasurementType field.
    */
  uci::type::LOS_MeasurementWithUncertaintyType::MeasurementType& getMeasurementType() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& setMeasurementType(const uci::type::LOS_MeasurementWithUncertaintyType::MeasurementType& accessor) override;

  /** Returns the accessor to the Measurement field contained in this message fragment
    *
    * @return The const reference to the accessor to the Measurement field.
    */
  const uci::type::LOS_MeasurementType& getMeasurement() const override;

  /** Returns the accessor to the Measurement field contained in this message fragment
    *
    * @return The reference to the accessor to the Measurement field.
    */
  uci::type::LOS_MeasurementType& getMeasurement() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& setMeasurement(const uci::type::LOS_MeasurementType& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::LOS_MeasurementUncertaintyErrorSourcesType& getUncertainty_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::LOS_MeasurementUncertaintyErrorSourcesType& getUncertainty() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::LOS_MeasurementUncertaintyErrorSourcesType& getUncertainty() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& setUncertainty(const uci::type::LOS_MeasurementUncertaintyErrorSourcesType& accessor) override;

  /** Returns whether this optional field Uncertaintyis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasUncertainty() const noexcept override;

  /** Enables the optional field such that getUncertainty will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::LOS_MeasurementUncertaintyErrorSourcesType& enableUncertainty(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::LOS_MeasurementWithUncertaintyType& clearUncertainty() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<LOS_MeasurementWithUncertaintyType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::LOS_MeasurementWithUncertaintyType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::LOS_MeasurementWithUncertaintyType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  DateTimeTypeValue timestamp_Accessor{0};
  std::unique_ptr<LOS_MeasurementEnum> reference_Accessor;
  std::unique_ptr<CapabilityID_Type> capabilityID_Accessor;
  std::unique_ptr<ComponentID_Type> componentID_Accessor;
  std::unique_ptr<MeasurementType> measurementType_Accessor;
  std::unique_ptr<LOS_MeasurementType> measurement_Accessor;
  std::unique_ptr<LOS_MeasurementUncertaintyErrorSourcesType> uncertainty_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_LOS_MEASUREMENTWITHUNCERTAINTYTYPE_H
