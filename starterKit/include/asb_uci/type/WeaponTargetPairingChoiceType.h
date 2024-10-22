/** @file WeaponTargetPairingChoiceType.h
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

#ifndef ASB_UCI_TYPE_WEAPONTARGETPAIRINGCHOICETYPE_H
#define ASB_UCI_TYPE_WEAPONTARGETPAIRINGCHOICETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/WeaponTargetPairingChoiceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class DMPI_DesignationID_Type;
class DMPI_ID_Type;
class DMPI_PatternID_Type;
class WeaponeeringLocationType;

/** See annotations in child elements and messages/elements that use this type for details. */
class WeaponTargetPairingChoiceType : public virtual uci::type::WeaponTargetPairingChoiceType {
public:
  /** Indicates a weapon-target pair given in a DMPI. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH] */
  using DMPI_ID = asb_uci::base::BoundedList<uci::type::DMPI_ID_Type, uci::type::accessorType::dMPI_ID_Type, asb_uci::type::DMPI_ID_Type>;

  /** Indicates a weapon-target pair expressed directly, independent of DMPIs. [Occurrences: Minimum: 1; Maximum:
    * MAX_LENGTH]
    */
  using Weaponeering = asb_uci::base::BoundedList<uci::type::WeaponeeringLocationType, uci::type::accessorType::weaponeeringLocationType, asb_uci::type::WeaponeeringLocationType>;

  /** The constructor */
  WeaponTargetPairingChoiceType();

  /** The copy constructor
    *
    * @param rhs The WeaponTargetPairingChoiceType to copy from
    */
  WeaponTargetPairingChoiceType(const WeaponTargetPairingChoiceType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The WeaponTargetPairingChoiceType to move from
    */
  WeaponTargetPairingChoiceType(WeaponTargetPairingChoiceType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The WeaponTargetPairingChoiceType to copy from
    * @return The WeaponTargetPairingChoiceType that was assigned
    */
  WeaponTargetPairingChoiceType& operator=(const WeaponTargetPairingChoiceType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The WeaponTargetPairingChoiceType to move from
    * @return The WeaponTargetPairingChoiceType that was assigned
    */
  WeaponTargetPairingChoiceType& operator=(WeaponTargetPairingChoiceType&& rhs) = delete;

  /** The destructor */
  virtual ~WeaponTargetPairingChoiceType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::WeaponTargetPairingChoiceType whose contents are to be used to set this
    *      uci::type::WeaponTargetPairingChoiceType's contents.
    */
  void copy(const uci::type::WeaponTargetPairingChoiceType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::WeaponTargetPairingChoiceType whose contents are to be used to set this
    *      uci::type::WeaponTargetPairingChoiceType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::WeaponTargetPairingChoiceType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::WeaponTargetPairingChoiceType::WeaponTargetPairingChoiceTypeChoice getWeaponTargetPairingChoiceTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getWeaponTargetPairingChoiceTypeChoiceOrdinal() will be the ordinal specified when this method was invoked. In
    * addition, the access methods associated with the chosen element will be enabled and will provide access to the chosen
    * element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeaponTargetPairingChoiceType& setWeaponTargetPairingChoiceTypeChoiceOrdinal(uci::type::WeaponTargetPairingChoiceType::WeaponTargetPairingChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the DMPI_DesignationID field contained in this message fragment
    *
    * @return The const reference to the accessor to the DMPI_DesignationID field.
    */
  uci::type::DMPI_DesignationID_Type& getDMPI_DesignationID_() const;

  /** Returns the accessor to the DMPI_DesignationID field contained in this message fragment
    *
    * @return The reference to the accessor to the DMPI_DesignationID field.
    */
  const uci::type::DMPI_DesignationID_Type& getDMPI_DesignationID() const override;

  /** Returns the accessor to the DMPI_DesignationID field contained in this message fragment
    *
    * @return The reference to the accessor to the DMPI_DesignationID field.
    */
  uci::type::DMPI_DesignationID_Type& getDMPI_DesignationID() override;

  /** Sets this choice's choice to be dMPI_DesignationID and initializes dMPI_DesignationID to be the specified value. A
    * deep copy will be used by this method to set dMPI_DesignationID
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeaponTargetPairingChoiceType& setDMPI_DesignationID(const uci::type::DMPI_DesignationID_Type& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by DMPI_DesignationID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by DMPI_DesignationID, false
    *      otherwise.
    */
  bool isDMPI_DesignationID() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by DMPI_DesignationID.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by DMPI_DesignationID.
    */
  uci::type::DMPI_DesignationID_Type& chooseDMPI_DesignationID(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by DMPI_DesignationID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by DMPI_DesignationID.
    */
  uci::type::DMPI_DesignationID_Type& chooseDMPI_DesignationID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the DMPI_PatternID field contained in this message fragment
    *
    * @return The const reference to the accessor to the DMPI_PatternID field.
    */
  uci::type::DMPI_PatternID_Type& getDMPI_PatternID_() const;

  /** Returns the accessor to the DMPI_PatternID field contained in this message fragment
    *
    * @return The reference to the accessor to the DMPI_PatternID field.
    */
  const uci::type::DMPI_PatternID_Type& getDMPI_PatternID() const override;

  /** Returns the accessor to the DMPI_PatternID field contained in this message fragment
    *
    * @return The reference to the accessor to the DMPI_PatternID field.
    */
  uci::type::DMPI_PatternID_Type& getDMPI_PatternID() override;

  /** Sets this choice's choice to be dMPI_PatternID and initializes dMPI_PatternID to be the specified value. A deep copy
    * will be used by this method to set dMPI_PatternID
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeaponTargetPairingChoiceType& setDMPI_PatternID(const uci::type::DMPI_PatternID_Type& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by DMPI_PatternID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by DMPI_PatternID, false otherwise.
    */
  bool isDMPI_PatternID() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by DMPI_PatternID.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by DMPI_PatternID.
    */
  uci::type::DMPI_PatternID_Type& chooseDMPI_PatternID(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by DMPI_PatternID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by DMPI_PatternID.
    */
  uci::type::DMPI_PatternID_Type& chooseDMPI_PatternID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the DMPI_ID item contained in this message fragment
    *
    * @return The const reference to the accessor to the DMPI_ID item.
    */
  uci::type::WeaponTargetPairingChoiceType::DMPI_ID& getDMPI_ID_() const;

  /** Returns the accessor to the DMPI_ID item contained in this message fragment
    *
    * @return The const reference to the accessor to the DMPI_ID item.
    */
  const uci::type::WeaponTargetPairingChoiceType::DMPI_ID& getDMPI_ID() const override;

  /** Returns the accessor to the DMPI_ID item contained in this message fragment
    *
    * @return The reference to the accessor to the DMPI_ID item.
    */
  uci::type::WeaponTargetPairingChoiceType::DMPI_ID& getDMPI_ID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeaponTargetPairingChoiceType& setDMPI_ID(const uci::type::WeaponTargetPairingChoiceType::DMPI_ID& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by DMPI_ID.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by DMPI_ID, false otherwise.
    */
  bool isDMPI_ID() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by DMPI_ID.
    *
    * @return A reference to the accessor that provides access to the choice identified by DMPI_ID.
    */
  uci::type::WeaponTargetPairingChoiceType::DMPI_ID& chooseDMPI_ID() override;

  /** Returns the accessor to the Weaponeering item contained in this message fragment
    *
    * @return The const reference to the accessor to the Weaponeering item.
    */
  uci::type::WeaponTargetPairingChoiceType::Weaponeering& getWeaponeering_() const;

  /** Returns the accessor to the Weaponeering item contained in this message fragment
    *
    * @return The const reference to the accessor to the Weaponeering item.
    */
  const uci::type::WeaponTargetPairingChoiceType::Weaponeering& getWeaponeering() const override;

  /** Returns the accessor to the Weaponeering item contained in this message fragment
    *
    * @return The reference to the accessor to the Weaponeering item.
    */
  uci::type::WeaponTargetPairingChoiceType::Weaponeering& getWeaponeering() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::WeaponTargetPairingChoiceType& setWeaponeering(const uci::type::WeaponTargetPairingChoiceType::Weaponeering& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by Weaponeering.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by Weaponeering, false otherwise.
    */
  bool isWeaponeering() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by Weaponeering.
    *
    * @return A reference to the accessor that provides access to the choice identified by Weaponeering.
    */
  uci::type::WeaponTargetPairingChoiceType::Weaponeering& chooseWeaponeering() override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<WeaponTargetPairingChoiceType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::WeaponTargetPairingChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::WeaponTargetPairingChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<DMPI_DesignationID_Type> dMPI_DesignationID_Accessor;
  std::unique_ptr<DMPI_PatternID_Type> dMPI_PatternID_Accessor;
  std::unique_ptr<DMPI_ID> dMPI_ID_Accessor;
  std::unique_ptr<Weaponeering> weaponeering_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_WEAPONTARGETPAIRINGCHOICETYPE_H
