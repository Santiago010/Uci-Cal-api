/** @file FuelCenterOfGravityType.h
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

#ifndef ASB_UCI_TYPE_FUELCENTEROFGRAVITYTYPE_H
#define ASB_UCI_TYPE_FUELCENTEROFGRAVITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/LateralCenterOfGravityTrendEnum.h"
#include "../../../include/asb_uci/type/LongitudinalCenterOfGravityTrendEnum.h"
#include "../../../include/asb_uci/type/VerticalCenterOfGravityTrendEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FuelCenterOfGravityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CenterOfGravityAeroType;

/** Indicates the center of gravity of a fuel system. */
class FuelCenterOfGravityType : public virtual uci::type::FuelCenterOfGravityType {
public:
  /** The constructor */
  FuelCenterOfGravityType();

  /** The copy constructor
    *
    * @param rhs The FuelCenterOfGravityType to copy from
    */
  FuelCenterOfGravityType(const FuelCenterOfGravityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The FuelCenterOfGravityType to move from
    */
  FuelCenterOfGravityType(FuelCenterOfGravityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The FuelCenterOfGravityType to copy from
    * @return The FuelCenterOfGravityType that was assigned
    */
  FuelCenterOfGravityType& operator=(const FuelCenterOfGravityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The FuelCenterOfGravityType to move from
    * @return The FuelCenterOfGravityType that was assigned
    */
  FuelCenterOfGravityType& operator=(FuelCenterOfGravityType&& rhs) = delete;

  /** The destructor */
  virtual ~FuelCenterOfGravityType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::FuelCenterOfGravityType whose contents are to be used to set this
    *      uci::type::FuelCenterOfGravityType's contents.
    */
  void copy(const uci::type::FuelCenterOfGravityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::FuelCenterOfGravityType whose contents are to be used to set this
    *      uci::type::FuelCenterOfGravityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::FuelCenterOfGravityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the ActualCoG field contained in this message fragment
    *
    * @return The const reference to the accessor to the ActualCoG field.
    */
  const uci::type::CenterOfGravityAeroType& getActualCoG() const override;

  /** Returns the accessor to the ActualCoG field contained in this message fragment
    *
    * @return The reference to the accessor to the ActualCoG field.
    */
  uci::type::CenterOfGravityAeroType& getActualCoG() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FuelCenterOfGravityType& setActualCoG(const uci::type::CenterOfGravityAeroType& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CenterOfGravityAeroType& getDesiredCoG_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CenterOfGravityAeroType& getDesiredCoG() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CenterOfGravityAeroType& getDesiredCoG() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FuelCenterOfGravityType& setDesiredCoG(const uci::type::CenterOfGravityAeroType& accessor) override;

  /** Returns whether this optional field DesiredCoGis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDesiredCoG() const noexcept override;

  /** Enables the optional field such that getDesiredCoG will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CenterOfGravityAeroType& enableDesiredCoG(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::FuelCenterOfGravityType& clearDesiredCoG() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::LateralCenterOfGravityTrendEnum& getLateralCenterOfGravityTrendEnum_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::LateralCenterOfGravityTrendEnum& getLateralCenterOfGravityTrendEnum() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::LateralCenterOfGravityTrendEnum& getLateralCenterOfGravityTrendEnum() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FuelCenterOfGravityType& setLateralCenterOfGravityTrendEnum(const uci::type::LateralCenterOfGravityTrendEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FuelCenterOfGravityType& setLateralCenterOfGravityTrendEnum(uci::type::LateralCenterOfGravityTrendEnum::EnumerationItem value) override;

  /** Returns whether this optional field LateralCenterOfGravityTrendEnumis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasLateralCenterOfGravityTrendEnum() const noexcept override;

  /** Enables the optional field such that getLateralCenterOfGravityTrendEnum will return the optional field and not throw
    * an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::LateralCenterOfGravityTrendEnum& enableLateralCenterOfGravityTrendEnum(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::FuelCenterOfGravityType& clearLateralCenterOfGravityTrendEnum() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::LongitudinalCenterOfGravityTrendEnum& getLongitudinalCenterOfGravityTrendEnum_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::LongitudinalCenterOfGravityTrendEnum& getLongitudinalCenterOfGravityTrendEnum() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::LongitudinalCenterOfGravityTrendEnum& getLongitudinalCenterOfGravityTrendEnum() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FuelCenterOfGravityType& setLongitudinalCenterOfGravityTrendEnum(const uci::type::LongitudinalCenterOfGravityTrendEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FuelCenterOfGravityType& setLongitudinalCenterOfGravityTrendEnum(uci::type::LongitudinalCenterOfGravityTrendEnum::EnumerationItem value) override;

  /** Returns whether this optional field LongitudinalCenterOfGravityTrendEnumis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasLongitudinalCenterOfGravityTrendEnum() const noexcept override;

  /** Enables the optional field such that getLongitudinalCenterOfGravityTrendEnum will return the optional field and not
    * throw an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::LongitudinalCenterOfGravityTrendEnum& enableLongitudinalCenterOfGravityTrendEnum(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::FuelCenterOfGravityType& clearLongitudinalCenterOfGravityTrendEnum() noexcept override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::VerticalCenterOfGravityTrendEnum& getVerticalCenterOfGravityTrendEnum_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::VerticalCenterOfGravityTrendEnum& getVerticalCenterOfGravityTrendEnum() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::VerticalCenterOfGravityTrendEnum& getVerticalCenterOfGravityTrendEnum() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FuelCenterOfGravityType& setVerticalCenterOfGravityTrendEnum(const uci::type::VerticalCenterOfGravityTrendEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FuelCenterOfGravityType& setVerticalCenterOfGravityTrendEnum(uci::type::VerticalCenterOfGravityTrendEnum::EnumerationItem value) override;

  /** Returns whether this optional field VerticalCenterOfGravityTrendEnumis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasVerticalCenterOfGravityTrendEnum() const noexcept override;

  /** Enables the optional field such that getVerticalCenterOfGravityTrendEnum will return the optional field and not throw
    * an exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::VerticalCenterOfGravityTrendEnum& enableVerticalCenterOfGravityTrendEnum(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::FuelCenterOfGravityType& clearVerticalCenterOfGravityTrendEnum() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<FuelCenterOfGravityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::FuelCenterOfGravityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::FuelCenterOfGravityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CenterOfGravityAeroType> actualCoG_Accessor;
  std::unique_ptr<CenterOfGravityAeroType> desiredCoG_Accessor;
  std::unique_ptr<LateralCenterOfGravityTrendEnum> lateralCenterOfGravityTrendEnum_Accessor;
  std::unique_ptr<LongitudinalCenterOfGravityTrendEnum> longitudinalCenterOfGravityTrendEnum_Accessor;
  std::unique_ptr<VerticalCenterOfGravityTrendEnum> verticalCenterOfGravityTrendEnum_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_FUELCENTEROFGRAVITYTYPE_H
