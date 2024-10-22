/** @file VehicleUniqueIdentifierType.h
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

#ifndef ASB_UCI_TYPE_VEHICLEUNIQUEIDENTIFIERTYPE_H
#define ASB_UCI_TYPE_VEHICLEUNIQUEIDENTIFIERTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/AlphanumericDashSpaceUnderscoreString20Type.h"
#include "../../../include/asb_uci/type/TailNumberType.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/VehicleUniqueIdentifierType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class AIS_Type;
class SatelliteIdentifierType;

/** Unique identifier for a vehicle. This will differ depending on the type of vehicle. Air platforms will have a Tail
  * Number. Space assets will have a Sat ID. Ships and Subs will have AIS Numbers.
  */
class VehicleUniqueIdentifierType : public virtual uci::type::VehicleUniqueIdentifierType {
public:
  /** The constructor */
  VehicleUniqueIdentifierType();

  /** The copy constructor
    *
    * @param rhs The VehicleUniqueIdentifierType to copy from
    */
  VehicleUniqueIdentifierType(const VehicleUniqueIdentifierType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The VehicleUniqueIdentifierType to move from
    */
  VehicleUniqueIdentifierType(VehicleUniqueIdentifierType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The VehicleUniqueIdentifierType to copy from
    * @return The VehicleUniqueIdentifierType that was assigned
    */
  VehicleUniqueIdentifierType& operator=(const VehicleUniqueIdentifierType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The VehicleUniqueIdentifierType to move from
    * @return The VehicleUniqueIdentifierType that was assigned
    */
  VehicleUniqueIdentifierType& operator=(VehicleUniqueIdentifierType&& rhs) = delete;

  /** The destructor */
  virtual ~VehicleUniqueIdentifierType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::VehicleUniqueIdentifierType whose contents are to be used to set this
    *      uci::type::VehicleUniqueIdentifierType's contents.
    */
  void copy(const uci::type::VehicleUniqueIdentifierType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::VehicleUniqueIdentifierType whose contents are to be used to set this
    *      uci::type::VehicleUniqueIdentifierType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::VehicleUniqueIdentifierType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::VehicleUniqueIdentifierType::VehicleUniqueIdentifierTypeChoice getVehicleUniqueIdentifierTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getVehicleUniqueIdentifierTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In
    * addition, the access methods associated with the chosen element will be enabled and will provide access to the chosen
    * element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::VehicleUniqueIdentifierType& setVehicleUniqueIdentifierTypeChoiceOrdinal(uci::type::VehicleUniqueIdentifierType::VehicleUniqueIdentifierTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the AIS field contained in this message fragment
    *
    * @return The const reference to the accessor to the AIS field.
    */
  uci::type::AIS_Type& getAIS_() const;

  /** Returns the accessor to the AIS field contained in this message fragment
    *
    * @return The reference to the accessor to the AIS field.
    */
  const uci::type::AIS_Type& getAIS() const override;

  /** Returns the accessor to the AIS field contained in this message fragment
    *
    * @return The reference to the accessor to the AIS field.
    */
  uci::type::AIS_Type& getAIS() override;

  /** Sets this choice's choice to be aIS and initializes aIS to be the specified value. A deep copy will be used by this
    * method to set aIS
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::VehicleUniqueIdentifierType& setAIS(const uci::type::AIS_Type& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by AIS.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by AIS, false otherwise.
    */
  bool isAIS() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by AIS.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by AIS.
    */
  uci::type::AIS_Type& chooseAIS(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by AIS.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by AIS.
    */
  uci::type::AIS_Type& chooseAIS(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::TailNumberType& getTailNumber_() const;

  /** Returns the contents of the message's TailNumber item
    *
    * @return The contents of the TailNumber field
    */
  const uci::type::TailNumberType& getTailNumber() const override;

  /** Returns the contents of the message's TailNumber item
    *
    * @return The contents of the TailNumber field
    */
  uci::type::TailNumberType& getTailNumber() override;

  /** Sets this choice's choice to be TailNumber and initializes TailNumber to be the specified value
    *
    * @param value The new value to set TailNumber to
    * @return A reference to the object on which this method was called.
    */
  uci::type::VehicleUniqueIdentifierType& setTailNumber(const uci::type::TailNumberType& value) override;

  /** Sets this choice's choice to be TailNumber and initializes TailNumber to be the specified value
    *
    * @param value The new value to set TailNumber to
    * @return A reference to the object on which this method was called.
    */
  uci::type::VehicleUniqueIdentifierType& setTailNumber(const std::string& value) override;

  /** Sets this choice's choice to be TailNumber and initializes TailNumber to be the specified value
    *
    * @param value The new value to set TailNumber to
    * @return A reference to the object on which this method was called.
    */
  uci::type::VehicleUniqueIdentifierType& setTailNumber(const char * value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by TailNumber.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by TailNumber, false otherwise.
    */
  bool isTailNumber() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by TailNumber.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by TailNumber.
    */
  uci::type::TailNumberType& chooseTailNumber(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by TailNumber.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by TailNumber.
    */
  uci::type::TailNumberType& chooseTailNumber(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the Satellite field contained in this message fragment
    *
    * @return The const reference to the accessor to the Satellite field.
    */
  uci::type::SatelliteIdentifierType& getSatellite_() const;

  /** Returns the accessor to the Satellite field contained in this message fragment
    *
    * @return The reference to the accessor to the Satellite field.
    */
  const uci::type::SatelliteIdentifierType& getSatellite() const override;

  /** Returns the accessor to the Satellite field contained in this message fragment
    *
    * @return The reference to the accessor to the Satellite field.
    */
  uci::type::SatelliteIdentifierType& getSatellite() override;

  /** Sets this choice's choice to be satellite and initializes satellite to be the specified value. A deep copy will be
    * used by this method to set satellite
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::VehicleUniqueIdentifierType& setSatellite(const uci::type::SatelliteIdentifierType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by Satellite.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by Satellite, false otherwise.
    */
  bool isSatellite() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by Satellite.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by Satellite.
    */
  uci::type::SatelliteIdentifierType& chooseSatellite(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by Satellite.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by Satellite.
    */
  uci::type::SatelliteIdentifierType& chooseSatellite(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::AlphanumericDashSpaceUnderscoreString20Type& getAlternateIdentifier_() const;

  /** Returns the contents of the message's AlternateIdentifier item
    *
    * @return The contents of the AlternateIdentifier field
    */
  const uci::type::AlphanumericDashSpaceUnderscoreString20Type& getAlternateIdentifier() const override;

  /** Returns the contents of the message's AlternateIdentifier item
    *
    * @return The contents of the AlternateIdentifier field
    */
  uci::type::AlphanumericDashSpaceUnderscoreString20Type& getAlternateIdentifier() override;

  /** Sets this choice's choice to be AlternateIdentifier and initializes AlternateIdentifier to be the specified value
    *
    * @param value The new value to set AlternateIdentifier to
    * @return A reference to the object on which this method was called.
    */
  uci::type::VehicleUniqueIdentifierType& setAlternateIdentifier(const uci::type::AlphanumericDashSpaceUnderscoreString20Type& value) override;

  /** Sets this choice's choice to be AlternateIdentifier and initializes AlternateIdentifier to be the specified value
    *
    * @param value The new value to set AlternateIdentifier to
    * @return A reference to the object on which this method was called.
    */
  uci::type::VehicleUniqueIdentifierType& setAlternateIdentifier(const std::string& value) override;

  /** Sets this choice's choice to be AlternateIdentifier and initializes AlternateIdentifier to be the specified value
    *
    * @param value The new value to set AlternateIdentifier to
    * @return A reference to the object on which this method was called.
    */
  uci::type::VehicleUniqueIdentifierType& setAlternateIdentifier(const char * value) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by AlternateIdentifier.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by AlternateIdentifier, false
    *      otherwise.
    */
  bool isAlternateIdentifier() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by AlternateIdentifier.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by AlternateIdentifier.
    */
  uci::type::AlphanumericDashSpaceUnderscoreString20Type& chooseAlternateIdentifier(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by AlternateIdentifier.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by AlternateIdentifier.
    */
  uci::type::AlphanumericDashSpaceUnderscoreString20Type& chooseAlternateIdentifier(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<VehicleUniqueIdentifierType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::VehicleUniqueIdentifierType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::VehicleUniqueIdentifierType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<AIS_Type> aIS_Accessor;
  std::unique_ptr<TailNumberType> tailNumber_Accessor;
  std::unique_ptr<SatelliteIdentifierType> satellite_Accessor;
  std::unique_ptr<AlphanumericDashSpaceUnderscoreString20Type> alternateIdentifier_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_VEHICLEUNIQUEIDENTIFIERTYPE_H
