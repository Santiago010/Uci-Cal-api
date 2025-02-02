/** @file Link16EntityDataLinkNativeFilterType.h
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

#ifndef ASB_UCI_TYPE_LINK16ENTITYDATALINKNATIVEFILTERTYPE_H
#define ASB_UCI_TYPE_LINK16ENTITYDATALINKNATIVEFILTERTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/DataLinkNativeFilterPET.h"
#include "../../../include/asb_uci/type/GatewayLink16ConfigurationClassEnum.h"
#include "../../../include/asb_uci/type/Link16_NPG_Type.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/Link16EntityDataLinkNativeFilterType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class EntityAssignmentType;
class GatewayLink16ConfigurationAreaType;
class GatewayLink16ConfigurationEnvironmentType;
class GatewayLink16ConfigurationIdentityType;

/** This is a polymorphic extension which allows for the extension of the base DataLinkNativeFilterPET for Link-16 Entity
  * Ingress / Egress.
  */
class Link16EntityDataLinkNativeFilterType : public virtual uci::type::Link16EntityDataLinkNativeFilterType, public virtual DataLinkNativeFilterPET {
public:
  /** The Link-16 Network Participation Groups for which this Entity should be produced on or listened for on.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using Link16NPG = asb_uci::base::BoundedList<uci::type::Link16_NPG_Type, uci::type::accessorType::link16_NPG_Type, asb_uci::type::Link16_NPG_Type>;

  /** This element provides a mapping between an EntityID to a Link-16 TrackIndex. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using EntityIdentification = asb_uci::base::BoundedList<uci::type::EntityAssignmentType, uci::type::accessorType::entityAssignmentType, asb_uci::type::EntityAssignmentType>;

  /** The constructor */
  Link16EntityDataLinkNativeFilterType();

  /** The copy constructor
    *
    * @param rhs The Link16EntityDataLinkNativeFilterType to copy from
    */
  Link16EntityDataLinkNativeFilterType(const Link16EntityDataLinkNativeFilterType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The Link16EntityDataLinkNativeFilterType to move from
    */
  Link16EntityDataLinkNativeFilterType(Link16EntityDataLinkNativeFilterType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The Link16EntityDataLinkNativeFilterType to copy from
    * @return The Link16EntityDataLinkNativeFilterType that was assigned
    */
  Link16EntityDataLinkNativeFilterType& operator=(const Link16EntityDataLinkNativeFilterType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The Link16EntityDataLinkNativeFilterType to move from
    * @return The Link16EntityDataLinkNativeFilterType that was assigned
    */
  Link16EntityDataLinkNativeFilterType& operator=(Link16EntityDataLinkNativeFilterType&& rhs) = delete;

  /** The destructor */
  ~Link16EntityDataLinkNativeFilterType() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::Link16EntityDataLinkNativeFilterType whose contents are to be used to set this
    *      uci::type::Link16EntityDataLinkNativeFilterType's contents.
    */
  void copy(const uci::type::Link16EntityDataLinkNativeFilterType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::Link16EntityDataLinkNativeFilterType whose contents are to be used to set this
    *      uci::type::Link16EntityDataLinkNativeFilterType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::Link16EntityDataLinkNativeFilterType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's GatewayClass field
    *
    * @return The contents of the GatewayClass field
    */
  const uci::type::GatewayLink16ConfigurationClassEnum& getGatewayClass() const override;

  /** Returns the contents of the message's GatewayClass field
    *
    * @return The contents of the GatewayClass field
    */
  uci::type::GatewayLink16ConfigurationClassEnum& getGatewayClass() override;

  /** Sets the contents of the message's GatewayClass field
    *
    * @param accessor The accessor to use to set the GatewayClass field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& setGatewayClass(const uci::type::GatewayLink16ConfigurationClassEnum& accessor) override;

  /** Sets the contents of the message's GatewayClass field
    *
    * @param value The new value to set the GatewayClass field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& setGatewayClass(uci::type::GatewayLink16ConfigurationClassEnum::EnumerationItem value) override;

  /** Returns the contents of the message's SpecialProcessingIndicator field
    *
    * @return The contents of the SpecialProcessingIndicator field
    */
  xs::Boolean getSpecialProcessingIndicator() const override;

  /** Sets the contents of the message's SpecialProcessingIndicator field
    *
    * @param value The new value to set the SpecialProcessingIndicator field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& setSpecialProcessingIndicator(xs::Boolean value) override;

  /** Returns the contents of the message's SimulationIndicator field
    *
    * @return The contents of the SimulationIndicator field
    */
  xs::Boolean getSimulationIndicator() const override;

  /** Sets the contents of the message's SimulationIndicator field
    *
    * @param value The new value to set the SimulationIndicator field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& setSimulationIndicator(xs::Boolean value) override;

  /** Returns the contents of the message's TargetSorting12_6 field
    *
    * @return The contents of the TargetSorting12_6 field
    */
  xs::Boolean getTargetSorting12_6() const override;

  /** Sets the contents of the message's TargetSorting12_6 field
    *
    * @param value The new value to set the TargetSorting12_6 field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& setTargetSorting12_6(xs::Boolean value) override;

  /** Returns the contents of the message's Track3X field
    *
    * @return The contents of the Track3X field
    */
  xs::Boolean getTrack3X() const override;

  /** Sets the contents of the message's Track3X field
    *
    * @param value The new value to set the Track3X field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& setTrack3X(xs::Boolean value) override;

  /** Returns the accessor to the Link16NPG field contained in this message fragment
    *
    * @return The const reference to the accessor to the Link16NPG field.
    */
  const uci::type::Link16EntityDataLinkNativeFilterType::Link16NPG& getLink16NPG() const override;

  /** Returns the accessor to the Link16NPG field contained in this message fragment
    *
    * @return The reference to the accessor to the Link16NPG field.
    */
  uci::type::Link16EntityDataLinkNativeFilterType::Link16NPG& getLink16NPG() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& setLink16NPG(const uci::type::Link16EntityDataLinkNativeFilterType::Link16NPG& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GatewayLink16ConfigurationAreaType& getGeographicArea_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::GatewayLink16ConfigurationAreaType& getGeographicArea() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GatewayLink16ConfigurationAreaType& getGeographicArea() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& setGeographicArea(const uci::type::GatewayLink16ConfigurationAreaType& accessor) override;

  /** Returns whether this optional field GeographicAreais available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasGeographicArea() const noexcept override;

  /** Enables the optional field such that getGeographicArea will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GatewayLink16ConfigurationAreaType& enableGeographicArea(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& clearGeographicArea() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::UnsignedInt getNumber() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& setNumber(xs::UnsignedInt value) override;

  /** Returns whether this optional field Numberis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasNumber() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& clearNumber() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GatewayLink16ConfigurationEnvironmentType& getEnvironment_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::GatewayLink16ConfigurationEnvironmentType& getEnvironment() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GatewayLink16ConfigurationEnvironmentType& getEnvironment() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& setEnvironment(const uci::type::GatewayLink16ConfigurationEnvironmentType& accessor) override;

  /** Returns whether this optional field Environmentis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasEnvironment() const noexcept override;

  /** Enables the optional field such that getEnvironment will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GatewayLink16ConfigurationEnvironmentType& enableEnvironment(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& clearEnvironment() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GatewayLink16ConfigurationIdentityType& getIdentity_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::GatewayLink16ConfigurationIdentityType& getIdentity() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GatewayLink16ConfigurationIdentityType& getIdentity() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& setIdentity(const uci::type::GatewayLink16ConfigurationIdentityType& accessor) override;

  /** Returns whether this optional field Identityis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasIdentity() const noexcept override;

  /** Enables the optional field such that getIdentity will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::GatewayLink16ConfigurationIdentityType& enableIdentity(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& clearIdentity() noexcept override;

  /** Returns the accessor to the EntityIdentification field contained in this message fragment
    *
    * @return The const reference to the accessor to the EntityIdentification field.
    */
  const uci::type::Link16EntityDataLinkNativeFilterType::EntityIdentification& getEntityIdentification() const override;

  /** Returns the accessor to the EntityIdentification field contained in this message fragment
    *
    * @return The reference to the accessor to the EntityIdentification field.
    */
  uci::type::Link16EntityDataLinkNativeFilterType::EntityIdentification& getEntityIdentification() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::Link16EntityDataLinkNativeFilterType& setEntityIdentification(const uci::type::Link16EntityDataLinkNativeFilterType::EntityIdentification& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<Link16EntityDataLinkNativeFilterType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::Link16EntityDataLinkNativeFilterType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::Link16EntityDataLinkNativeFilterType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<GatewayLink16ConfigurationClassEnum> gatewayClass_Accessor;
  asb_xs::Boolean specialProcessingIndicator_Accessor{false};
  asb_xs::Boolean simulationIndicator_Accessor{false};
  asb_xs::Boolean targetSorting12_6_Accessor{false};
  asb_xs::Boolean track3X_Accessor{false};
  std::unique_ptr<Link16NPG> link16NPG_Accessor;
  std::unique_ptr<GatewayLink16ConfigurationAreaType> geographicArea_Accessor;
  boost::optional<asb_xs::UnsignedInt> number_Accessor;
  std::unique_ptr<GatewayLink16ConfigurationEnvironmentType> environment_Accessor;
  std::unique_ptr<GatewayLink16ConfigurationIdentityType> identity_Accessor;
  std::unique_ptr<EntityIdentification> entityIdentification_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_LINK16ENTITYDATALINKNATIVEFILTERTYPE_H
