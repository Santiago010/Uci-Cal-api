/** @file SecurityFileManagementType.h
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

#ifndef ASB_UCI_TYPE_SECURITYFILEMANAGEMENTTYPE_H
#define ASB_UCI_TYPE_SECURITYFILEMANAGEMENTTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/type/SecurityFileManagementEnum.h"
#include "../../../include/asb_uci/type/VisibleString1024Type.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/SecurityFileManagementType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class MDF_ID_Type;

/** See annotations in child elements and messages/elements that use this type for details. */
class SecurityFileManagementType : public virtual uci::type::SecurityFileManagementType {
public:
  /** The constructor */
  SecurityFileManagementType();

  /** The copy constructor
    *
    * @param rhs The SecurityFileManagementType to copy from
    */
  SecurityFileManagementType(const SecurityFileManagementType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The SecurityFileManagementType to move from
    */
  SecurityFileManagementType(SecurityFileManagementType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The SecurityFileManagementType to copy from
    * @return The SecurityFileManagementType that was assigned
    */
  SecurityFileManagementType& operator=(const SecurityFileManagementType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The SecurityFileManagementType to move from
    * @return The SecurityFileManagementType that was assigned
    */
  SecurityFileManagementType& operator=(SecurityFileManagementType&& rhs) = delete;

  /** The destructor */
  virtual ~SecurityFileManagementType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SecurityFileManagementType whose contents are to be used to set this
    *      uci::type::SecurityFileManagementType's contents.
    */
  void copy(const uci::type::SecurityFileManagementType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::SecurityFileManagementType whose contents are to be used to set this
    *      uci::type::SecurityFileManagementType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::SecurityFileManagementType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's Category field
    *
    * @return The contents of the Category field
    */
  const uci::type::SecurityFileManagementEnum& getCategory() const override;

  /** Returns the contents of the message's Category field
    *
    * @return The contents of the Category field
    */
  uci::type::SecurityFileManagementEnum& getCategory() override;

  /** Sets the contents of the message's Category field
    *
    * @param accessor The accessor to use to set the Category field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SecurityFileManagementType& setCategory(const uci::type::SecurityFileManagementEnum& accessor) override;

  /** Sets the contents of the message's Category field
    *
    * @param value The new value to set the Category field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SecurityFileManagementType& setCategory(uci::type::SecurityFileManagementEnum::EnumerationItem value) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MDF_ID_Type& getMDF_ID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::MDF_ID_Type& getMDF_ID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MDF_ID_Type& getMDF_ID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::SecurityFileManagementType& setMDF_ID(const uci::type::MDF_ID_Type& accessor) override;

  /** Returns whether this optional field MDF_IDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMDF_ID() const noexcept override;

  /** Enables the optional field such that getMDF_ID will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MDF_ID_Type& enableMDF_ID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SecurityFileManagementType& clearMDF_ID() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::VisibleString1024Type& getDetails_() const;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  const uci::type::VisibleString1024Type& getDetails() const override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::VisibleString1024Type& getDetails() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SecurityFileManagementType& setDetails(const uci::type::VisibleString1024Type& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SecurityFileManagementType& setDetails(const std::string& value) override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::SecurityFileManagementType& setDetails(const char* value) override;

  /** Returns whether this optional field details_is available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasDetails() const noexcept override;

  /** Enables the optional field such that getDetails will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The value of the optional field
    */
  uci::type::VisibleString1024Type& enableDetails(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::SecurityFileManagementType& clearDetails() noexcept override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<SecurityFileManagementType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::SecurityFileManagementType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::SecurityFileManagementType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<SecurityFileManagementEnum> category_Accessor;
  std::unique_ptr<MDF_ID_Type> mDF_ID_Accessor;
  std::unique_ptr<VisibleString1024Type> details_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_SECURITYFILEMANAGEMENTTYPE_H
