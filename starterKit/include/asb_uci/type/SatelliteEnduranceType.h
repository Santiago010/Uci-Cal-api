/** @file SatelliteEnduranceType.h
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

#ifndef ASB_UCI_TYPE_SATELLITEENDURANCETYPE_H
#define ASB_UCI_TYPE_SATELLITEENDURANCETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../../cppInterface/2.3.2/include/uci/type/SatelliteEnduranceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class EnduranceBaseType;
class OrbitalManeuverDetailsBaseType;

/** Indicates the satellite's endurance specified by the indicated elements. */
class SatelliteEnduranceType : public virtual uci::type::SatelliteEnduranceType {
public:
  /** The constructor */
  SatelliteEnduranceType();

  /** The copy constructor
    *
    * @param rhs The SatelliteEnduranceType to copy from
    */
  SatelliteEnduranceType(const SatelliteEnduranceType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SatelliteEnduranceType to move from
    */
  SatelliteEnduranceType(SatelliteEnduranceType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SatelliteEnduranceType to copy from
    * @return The SatelliteEnduranceType that was assigned
    */
  SatelliteEnduranceType& operator=(const SatelliteEnduranceType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SatelliteEnduranceType to move from
    * @return The SatelliteEnduranceType that was assigned
    */
  SatelliteEnduranceType& operator=(SatelliteEnduranceType&& rhs) = delete;

  /** The destructor */
  virtual ~SatelliteEnduranceType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SatelliteEnduranceType whose contents are to be used to set this
    *      uci::type::SatelliteEnduranceType's contents.
    */
  void copy(const uci::type::SatelliteEnduranceType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SatelliteEnduranceType whose contents are to be used to set this
    *      uci::type::SatelliteEnduranceType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SatelliteEnduranceType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::EnduranceBaseType& getPropulsion_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::EnduranceBaseType& getPropulsion() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::EnduranceBaseType& getPropulsion() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SatelliteEnduranceType& setPropulsion(const uci::type::EnduranceBaseType& accessor) override;

  /** Returns whether this optional field Propulsionis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasPropulsion() const noexcept override;

  /** Enables the optional field such that getPropulsion will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::EnduranceBaseType& enablePropulsion(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SatelliteEnduranceType& clearPropulsion() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::OrbitalManeuverDetailsBaseType& getManeuver_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::OrbitalManeuverDetailsBaseType& getManeuver() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::OrbitalManeuverDetailsBaseType& getManeuver() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SatelliteEnduranceType& setManeuver(const uci::type::OrbitalManeuverDetailsBaseType& accessor) override;

  /** Returns whether this optional field Maneuveris available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasManeuver() const noexcept override;

  /** Enables the optional field such that getManeuver will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::OrbitalManeuverDetailsBaseType& enableManeuver(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SatelliteEnduranceType& clearManeuver() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::EnduranceBaseType& getOperational_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::EnduranceBaseType& getOperational() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::EnduranceBaseType& getOperational() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SatelliteEnduranceType& setOperational(const uci::type::EnduranceBaseType& accessor) override;

  /** Returns whether this optional field Operationalis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasOperational() const noexcept override;

  /** Enables the optional field such that getOperational will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::EnduranceBaseType& enableOperational(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SatelliteEnduranceType& clearOperational() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SatelliteEnduranceType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SatelliteEnduranceType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SatelliteEnduranceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<EnduranceBaseType> propulsion_Accessor;
  std::unique_ptr<OrbitalManeuverDetailsBaseType> maneuver_Accessor;
  std::unique_ptr<EnduranceBaseType> operational_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SATELLITEENDURANCETYPE_H
