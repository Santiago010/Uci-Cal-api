/** @file OrbitKinematicsSequenceReplaceOrModifyChoiceType.h
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

#ifndef ASB_UCI_TYPE_ORBITKINEMATICSSEQUENCEREPLACEORMODIFYCHOICETYPE_H
#define ASB_UCI_TYPE_ORBITKINEMATICSSEQUENCEREPLACEORMODIFYCHOICETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../../cppInterface/2.3.2/include/uci/base/Accessor.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/OrbitKinematicsSequenceReplaceOrModifyChoiceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class OrbitKinematicsSequenceModificationDetailsType;
class OrbitKinematicsSequenceType;

/** Defines choice for replacement or modification of an orbit kinematics sequence. */
class OrbitKinematicsSequenceReplaceOrModifyChoiceType : public virtual uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType {
public:
  /** The constructor */
  OrbitKinematicsSequenceReplaceOrModifyChoiceType();

  /** The copy constructor
    *
    * @param rhs The OrbitKinematicsSequenceReplaceOrModifyChoiceType to copy from
    */
  OrbitKinematicsSequenceReplaceOrModifyChoiceType(const OrbitKinematicsSequenceReplaceOrModifyChoiceType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The OrbitKinematicsSequenceReplaceOrModifyChoiceType to move from
    */
  OrbitKinematicsSequenceReplaceOrModifyChoiceType(OrbitKinematicsSequenceReplaceOrModifyChoiceType&& rhs) = delete;

  /** The assignment operator [not supported]
    *
    * @param rhs The OrbitKinematicsSequenceReplaceOrModifyChoiceType to copy from
    * @return The OrbitKinematicsSequenceReplaceOrModifyChoiceType that was assigned
    */
  OrbitKinematicsSequenceReplaceOrModifyChoiceType& operator=(const OrbitKinematicsSequenceReplaceOrModifyChoiceType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The OrbitKinematicsSequenceReplaceOrModifyChoiceType to move from
    * @return The OrbitKinematicsSequenceReplaceOrModifyChoiceType that was assigned
    */
  OrbitKinematicsSequenceReplaceOrModifyChoiceType& operator=(OrbitKinematicsSequenceReplaceOrModifyChoiceType&& rhs) = delete;

  /** The destructor */
  virtual ~OrbitKinematicsSequenceReplaceOrModifyChoiceType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType whose contents are to be used to set
    *      this uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType's contents.
    */
  void copy(const uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType whose contents are to be used to set
    *      this uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** This method returns this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active.
    *
    * @return The selected item's enumerated value
    */
  uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType::OrbitKinematicsSequenceReplaceOrModifyChoiceTypeChoice getOrbitKinematicsSequenceReplaceOrModifyChoiceTypeChoiceOrdinal() const noexcept override;

  /** This method is used to set this choice's "selection ordinal." A choice's "selection ordinal" is used to specify which
    * element in the choice is chosen to be active. There are two mechanisms that can be used to set a choice's "selection
    * ordinal." The first mechanism is by invoking this method. The second mechanism is by invoking one of the set methods
    * associated with one of the elements contained in this choice. Once this method is invoked, the value returned by
    * getOrbitKinematicsSequenceReplaceOrModifyChoiceTypeChoiceOrdinal() will be the ordinal specified when this method was
    * invoked. In addition, the access methods associated with the chosen element will be enabled and will provide access
    * to the chosen element.
    *
    * @param ordinal The ordinal to set this choice's selected ordinal to.
    * @param type The type of data that is to be made available when the ordinal is set.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType& setOrbitKinematicsSequenceReplaceOrModifyChoiceTypeChoiceOrdinal(uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType::OrbitKinematicsSequenceReplaceOrModifyChoiceTypeChoice ordinal, uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the ReplaceOrbitKinematicsSequence field contained in this message fragment
    *
    * @return The const reference to the accessor to the ReplaceOrbitKinematicsSequence field.
    */
  uci::type::OrbitKinematicsSequenceType& getReplaceOrbitKinematicsSequence_() const;

  /** Returns the accessor to the ReplaceOrbitKinematicsSequence field contained in this message fragment
    *
    * @return The reference to the accessor to the ReplaceOrbitKinematicsSequence field.
    */
  const uci::type::OrbitKinematicsSequenceType& getReplaceOrbitKinematicsSequence() const override;

  /** Returns the accessor to the ReplaceOrbitKinematicsSequence field contained in this message fragment
    *
    * @return The reference to the accessor to the ReplaceOrbitKinematicsSequence field.
    */
  uci::type::OrbitKinematicsSequenceType& getReplaceOrbitKinematicsSequence() override;

  /** Sets this choice's choice to be replaceOrbitKinematicsSequence and initializes replaceOrbitKinematicsSequence to be
    * the specified value. A deep copy will be used by this method to set replaceOrbitKinematicsSequence
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType& setReplaceOrbitKinematicsSequence(const uci::type::OrbitKinematicsSequenceType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by ReplaceOrbitKinematicsSequence.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by ReplaceOrbitKinematicsSequence,
    *      false otherwise.
    */
  bool isReplaceOrbitKinematicsSequence() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by ReplaceOrbitKinematicsSequence.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ReplaceOrbitKinematicsSequence.
    */
  uci::type::OrbitKinematicsSequenceType& chooseReplaceOrbitKinematicsSequence(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by ReplaceOrbitKinematicsSequence.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ReplaceOrbitKinematicsSequence.
    */
  uci::type::OrbitKinematicsSequenceType& chooseReplaceOrbitKinematicsSequence(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Returns the accessor to the ModifyOrbitKinematicsSequence field contained in this message fragment
    *
    * @return The const reference to the accessor to the ModifyOrbitKinematicsSequence field.
    */
  uci::type::OrbitKinematicsSequenceModificationDetailsType& getModifyOrbitKinematicsSequence_() const;

  /** Returns the accessor to the ModifyOrbitKinematicsSequence field contained in this message fragment
    *
    * @return The reference to the accessor to the ModifyOrbitKinematicsSequence field.
    */
  const uci::type::OrbitKinematicsSequenceModificationDetailsType& getModifyOrbitKinematicsSequence() const override;

  /** Returns the accessor to the ModifyOrbitKinematicsSequence field contained in this message fragment
    *
    * @return The reference to the accessor to the ModifyOrbitKinematicsSequence field.
    */
  uci::type::OrbitKinematicsSequenceModificationDetailsType& getModifyOrbitKinematicsSequence() override;

  /** Sets this choice's choice to be modifyOrbitKinematicsSequence and initializes modifyOrbitKinematicsSequence to be the
    * specified value. A deep copy will be used by this method to set modifyOrbitKinematicsSequence
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType& setModifyOrbitKinematicsSequence(const uci::type::OrbitKinematicsSequenceModificationDetailsType& accessor) override;

  /** Returns whether this choice's "selection ordinal" is set to the choice identified by ModifyOrbitKinematicsSequence.
    *
    * @return True if this choice's "selection ordinal" is set to the choice identified by ModifyOrbitKinematicsSequence,
    *      false otherwise.
    */
  bool isModifyOrbitKinematicsSequence() const noexcept override;

  /** Sets this choice's "selection ordinal" to the choice identified by ModifyOrbitKinematicsSequence.
    *
    * @param method name of calling method
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ModifyOrbitKinematicsSequence.
    */
  uci::type::OrbitKinematicsSequenceModificationDetailsType& chooseModifyOrbitKinematicsSequence(const std::string& method, uci::base::accessorType::AccessorType type = uci::base::accessorType::null);

  /** Sets this choice's "selection ordinal" to the choice identified by ModifyOrbitKinematicsSequence.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available when the ordinal is set.
    *      The use of this parameter provides support for inheritable types. This parameter defaults to
    *      uci::base::accessorType::null that is used to indicate that the access methods associated with the chosen
    *      element shall provide access to data of the type that was specified for that element in the choice in the OMS
    *      schema, i.e. the chosen element's base type. If specified, this field must either be a type ID associated with
    *      the chosen element's base type or a type ID associated with a type that is derived from the chosen element's
    *      base type.
    * @return A reference to the accessor that provides access to the choice identified by ModifyOrbitKinematicsSequence.
    */
  uci::type::OrbitKinematicsSequenceModificationDetailsType& chooseModifyOrbitKinematicsSequence(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<OrbitKinematicsSequenceReplaceOrModifyChoiceType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::OrbitKinematicsSequenceReplaceOrModifyChoiceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<OrbitKinematicsSequenceType> replaceOrbitKinematicsSequence_Accessor;
  std::unique_ptr<OrbitKinematicsSequenceModificationDetailsType> modifyOrbitKinematicsSequence_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_ORBITKINEMATICSSEQUENCEREPLACEORMODIFYCHOICETYPE_H
