/** @file ECEF_VelocityType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:12 PM
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

#ifndef ASB_UCI_TYPE_ECEF_VELOCITYTYPE_H
#define ASB_UCI_TYPE_ECEF_VELOCITYTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/SpeedType.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/ECEF_VelocityType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** The velocity vector in the Earth-Centered-Earth-Fixed (ECEF) coordinate system. See the WGS84C_3D world model for
  * details and precise definitions.
  */
class ECEF_VelocityType : public virtual uci::type::ECEF_VelocityType {
public:
  /** The constructor */
  ECEF_VelocityType();

  /** The copy constructor
    *
    * @param rhs The ECEF_VelocityType to copy from
    */
  ECEF_VelocityType(const ECEF_VelocityType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The ECEF_VelocityType to move from
    */
  ECEF_VelocityType(ECEF_VelocityType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The ECEF_VelocityType to copy from
    * @return The ECEF_VelocityType that was assigned
    */
  ECEF_VelocityType& operator=(const ECEF_VelocityType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The ECEF_VelocityType to move from
    * @return The ECEF_VelocityType that was assigned
    */
  ECEF_VelocityType& operator=(ECEF_VelocityType&& rhs) = delete;

  /** The destructor */
  virtual ~ECEF_VelocityType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ECEF_VelocityType whose contents are to be used to set this
    *      uci::type::ECEF_VelocityType's contents.
    */
  void copy(const uci::type::ECEF_VelocityType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::ECEF_VelocityType whose contents are to be used to set this
    *      uci::type::ECEF_VelocityType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::ECEF_VelocityType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's X_Velocity field
    *
    * @return The contents of the X_Velocity field
    */
  uci::type::SpeedTypeValue getX_Velocity() const override;

  /** Sets the contents of the message's X_Velocity field
    *
    * @param value The new value to set the X_Velocity field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ECEF_VelocityType& setX_Velocity(uci::type::SpeedTypeValue value) override;

  /** Returns the contents of the message's Y_Velocity field
    *
    * @return The contents of the Y_Velocity field
    */
  uci::type::SpeedTypeValue getY_Velocity() const override;

  /** Sets the contents of the message's Y_Velocity field
    *
    * @param value The new value to set the Y_Velocity field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ECEF_VelocityType& setY_Velocity(uci::type::SpeedTypeValue value) override;

  /** Returns the contents of the message's Z_Velocity field
    *
    * @return The contents of the Z_Velocity field
    */
  uci::type::SpeedTypeValue getZ_Velocity() const override;

  /** Sets the contents of the message's Z_Velocity field
    *
    * @param value The new value to set the Z_Velocity field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::ECEF_VelocityType& setZ_Velocity(uci::type::SpeedTypeValue value) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<ECEF_VelocityType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::ECEF_VelocityType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::ECEF_VelocityType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  SpeedTypeValue x_Velocity_Accessor{0.0};
  SpeedTypeValue y_Velocity_Accessor{0.0};
  SpeedTypeValue z_Velocity_Accessor{0.0};

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ECEF_VELOCITYTYPE_H
