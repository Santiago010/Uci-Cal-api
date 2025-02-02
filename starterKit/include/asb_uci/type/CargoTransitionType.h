/** @file CargoTransitionType.h
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

#ifndef ASB_UCI_TYPE_CARGOTRANSITIONTYPE_H
#define ASB_UCI_TYPE_CARGOTRANSITIONTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/CargoDeliverySubCapabilityEnum.h"
#include "../../../include/asb_uci/type/VehicleControlStrategyEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/CargoTransitionType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CargoID_Type;
class Point3D_Type;
class SectorType;

/** See annotations in child elements and messages/elements that use this type for details. */
class CargoTransitionType : public virtual uci::type::CargoTransitionType {
public:
  /** A list of the unique IDs assigned to the cargo items involved in this cargo relocation. [Occurrences: Minimum: 1;
    * Maximum: MAX_LENGTH]
    */
  using CargoID = asb_uci::base::BoundedList<uci::type::CargoID_Type, uci::type::accessorType::cargoID_Type, asb_uci::type::CargoID_Type>;

  /** Point of control and/or cargo transition (release, drop, pick-up, launch, handover, etc.). For the case of
    * independent hand-off and hand back points, two are given with the hand-off point being first. [Occurrences: Minimum:
    * 1; Maximum: 2]
    */
  using TransitionLocation = asb_uci::base::BoundedList<uci::type::Point3D_Type, uci::type::accessorType::point3D_Type, asb_uci::type::Point3D_Type>;

  /** The constructor */
  CargoTransitionType();

  /** The copy constructor
    *
    * @param rhs The CargoTransitionType to copy from
    */
  CargoTransitionType(const CargoTransitionType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The CargoTransitionType to move from
    */
  CargoTransitionType(CargoTransitionType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The CargoTransitionType to copy from
    * @return The CargoTransitionType that was assigned
    */
  CargoTransitionType& operator=(const CargoTransitionType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The CargoTransitionType to move from
    * @return The CargoTransitionType that was assigned
    */
  CargoTransitionType& operator=(CargoTransitionType&& rhs) = delete;

  /** The destructor */
  virtual ~CargoTransitionType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CargoTransitionType whose contents are to be used to set this
    *      uci::type::CargoTransitionType's contents.
    */
  void copy(const uci::type::CargoTransitionType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::CargoTransitionType whose contents are to be used to set this
    *      uci::type::CargoTransitionType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::CargoTransitionType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the CargoID field contained in this message fragment
    *
    * @return The const reference to the accessor to the CargoID field.
    */
  const uci::type::CargoTransitionType::CargoID& getCargoID() const override;

  /** Returns the accessor to the CargoID field contained in this message fragment
    *
    * @return The reference to the accessor to the CargoID field.
    */
  uci::type::CargoTransitionType::CargoID& getCargoID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CargoTransitionType& setCargoID(const uci::type::CargoTransitionType::CargoID& accessor) override;

  /** Returns the contents of the message's VehicleControlStrategy field
    *
    * @return The contents of the VehicleControlStrategy field
    */
  const uci::type::VehicleControlStrategyEnum& getVehicleControlStrategy() const override;

  /** Returns the contents of the message's VehicleControlStrategy field
    *
    * @return The contents of the VehicleControlStrategy field
    */
  uci::type::VehicleControlStrategyEnum& getVehicleControlStrategy() override;

  /** Sets the contents of the message's VehicleControlStrategy field
    *
    * @param accessor The accessor to use to set the VehicleControlStrategy field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CargoTransitionType& setVehicleControlStrategy(const uci::type::VehicleControlStrategyEnum& accessor) override;

  /** Sets the contents of the message's VehicleControlStrategy field
    *
    * @param value The new value to set the VehicleControlStrategy field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CargoTransitionType& setVehicleControlStrategy(uci::type::VehicleControlStrategyEnum::EnumerationItem value) override;

  /** Returns the contents of the message's LoadUnloadStrategy field
    *
    * @return The contents of the LoadUnloadStrategy field
    */
  const uci::type::CargoDeliverySubCapabilityEnum& getLoadUnloadStrategy() const override;

  /** Returns the contents of the message's LoadUnloadStrategy field
    *
    * @return The contents of the LoadUnloadStrategy field
    */
  uci::type::CargoDeliverySubCapabilityEnum& getLoadUnloadStrategy() override;

  /** Sets the contents of the message's LoadUnloadStrategy field
    *
    * @param accessor The accessor to use to set the LoadUnloadStrategy field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CargoTransitionType& setLoadUnloadStrategy(const uci::type::CargoDeliverySubCapabilityEnum& accessor) override;

  /** Sets the contents of the message's LoadUnloadStrategy field
    *
    * @param value The new value to set the LoadUnloadStrategy field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::CargoTransitionType& setLoadUnloadStrategy(uci::type::CargoDeliverySubCapabilityEnum::EnumerationItem value) override;

  /** Returns the accessor to the TransitionLocation field contained in this message fragment
    *
    * @return The const reference to the accessor to the TransitionLocation field.
    */
  const uci::type::CargoTransitionType::TransitionLocation& getTransitionLocation() const override;

  /** Returns the accessor to the TransitionLocation field contained in this message fragment
    *
    * @return The reference to the accessor to the TransitionLocation field.
    */
  uci::type::CargoTransitionType::TransitionLocation& getTransitionLocation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CargoTransitionType& setTransitionLocation(const uci::type::CargoTransitionType::TransitionLocation& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SectorType& getEgressConstraint_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SectorType& getEgressConstraint() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SectorType& getEgressConstraint() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CargoTransitionType& setEgressConstraint(const uci::type::SectorType& accessor) override;

  /** Returns whether this optional field EgressConstraintis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEgressConstraint() const noexcept override;

  /** Enables the optional field such that getEgressConstraint will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SectorType& enableEgressConstraint(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CargoTransitionType& clearEgressConstraint() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SectorType& getIngressConstraint_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SectorType& getIngressConstraint() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SectorType& getIngressConstraint() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::CargoTransitionType& setIngressConstraint(const uci::type::SectorType& accessor) override;

  /** Returns whether this optional field IngressConstraintis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasIngressConstraint() const noexcept override;

  /** Enables the optional field such that getIngressConstraint will return the optional field and not throw an exception
    * when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SectorType& enableIngressConstraint(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::CargoTransitionType& clearIngressConstraint() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<CargoTransitionType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::CargoTransitionType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::CargoTransitionType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<CargoID> cargoID_Accessor;
  std::unique_ptr<VehicleControlStrategyEnum> vehicleControlStrategy_Accessor;
  std::unique_ptr<CargoDeliverySubCapabilityEnum> loadUnloadStrategy_Accessor;
  std::unique_ptr<TransitionLocation> transitionLocation_Accessor;
  std::unique_ptr<SectorType> egressConstraint_Accessor;
  std::unique_ptr<SectorType> ingressConstraint_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_CARGOTRANSITIONTYPE_H
