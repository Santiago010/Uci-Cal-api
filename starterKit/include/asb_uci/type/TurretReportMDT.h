/** @file TurretReportMDT.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:15 PM
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

#ifndef ASB_UCI_TYPE_TURRETREPORTMDT_H
#define ASB_UCI_TYPE_TURRETREPORTMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/IMU_AlignmentEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/TurretReportMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class PointingType;
class SupportCapabilityID_Type;
class TurretReportID_Type;
class TurretReportPointingType;

/** See annotations in child elements and messages/elements that use this type for details. */
class TurretReportMDT : public virtual uci::type::TurretReportMDT {
public:
  /** The constructor */
  TurretReportMDT();

  /** The copy constructor
    *
    * @param rhs The TurretReportMDT to copy from
    */
  TurretReportMDT(const TurretReportMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The TurretReportMDT to move from
    */
  TurretReportMDT(TurretReportMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The TurretReportMDT to copy from
    * @return The TurretReportMDT that was assigned
    */
  TurretReportMDT& operator=(const TurretReportMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The TurretReportMDT to move from
    * @return The TurretReportMDT that was assigned
    */
  TurretReportMDT& operator=(TurretReportMDT&& rhs) = delete;

  /** The destructor */
  virtual ~TurretReportMDT();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::TurretReportMDT whose contents are to be used to set this uci::type::TurretReportMDT's
    *      contents.
    */
  void copy(const uci::type::TurretReportMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::TurretReportMDT whose contents are to be used to set this uci::type::TurretReportMDT's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::TurretReportMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the TurretReportID field contained in this message fragment
    *
    * @return The const reference to the accessor to the TurretReportID field.
    */
  const uci::type::TurretReportID_Type& getTurretReportID() const override;

  /** Returns the accessor to the TurretReportID field contained in this message fragment
    *
    * @return The reference to the accessor to the TurretReportID field.
    */
  uci::type::TurretReportID_Type& getTurretReportID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::TurretReportMDT& setTurretReportID(const uci::type::TurretReportID_Type& accessor) override;

  /** Returns the accessor to the SupportCapabilityID field contained in this message fragment
    *
    * @return The const reference to the accessor to the SupportCapabilityID field.
    */
  const uci::type::SupportCapabilityID_Type& getSupportCapabilityID() const override;

  /** Returns the accessor to the SupportCapabilityID field contained in this message fragment
    *
    * @return The reference to the accessor to the SupportCapabilityID field.
    */
  uci::type::SupportCapabilityID_Type& getSupportCapabilityID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::TurretReportMDT& setSupportCapabilityID(const uci::type::SupportCapabilityID_Type& accessor) override;

  /** Returns the accessor to the Pointing field contained in this message fragment
    *
    * @return The const reference to the accessor to the Pointing field.
    */
  const uci::type::TurretReportPointingType& getPointing() const override;

  /** Returns the accessor to the Pointing field contained in this message fragment
    *
    * @return The reference to the accessor to the Pointing field.
    */
  uci::type::TurretReportPointingType& getPointing() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::TurretReportMDT& setPointing(const uci::type::TurretReportPointingType& accessor) override;

  /** Returns the accessor to the TurretPointingTarget field contained in this message fragment
    *
    * @return The const reference to the accessor to the TurretPointingTarget field.
    */
  const uci::type::PointingType& getTurretPointingTarget() const override;

  /** Returns the accessor to the TurretPointingTarget field contained in this message fragment
    *
    * @return The reference to the accessor to the TurretPointingTarget field.
    */
  uci::type::PointingType& getTurretPointingTarget() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::TurretReportMDT& setTurretPointingTarget(const uci::type::PointingType& accessor) override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::IMU_AlignmentEnum& getIMU_State_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::IMU_AlignmentEnum& getIMU_State() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::IMU_AlignmentEnum& getIMU_State() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::TurretReportMDT& setIMU_State(const uci::type::IMU_AlignmentEnum& accessor) override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param value The accessor to use to set the contents of the message fragment that this accessor provides access to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::TurretReportMDT& setIMU_State(uci::type::IMU_AlignmentEnum::EnumerationItem value) override;

  /** Returns whether this optional field IMU_Stateis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasIMU_State() const noexcept override;

  /** Enables the optional field such that getIMU_State will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::IMU_AlignmentEnum& enableIMU_State(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::TurretReportMDT& clearIMU_State() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<TurretReportMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::TurretReportMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::TurretReportMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<TurretReportID_Type> turretReportID_Accessor;
  std::unique_ptr<SupportCapabilityID_Type> supportCapabilityID_Accessor;
  std::unique_ptr<TurretReportPointingType> pointing_Accessor;
  std::unique_ptr<PointingType> turretPointingTarget_Accessor;
  std::unique_ptr<IMU_AlignmentEnum> iMU_State_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_TURRETREPORTMDT_H
