/** @file MDF_ReferenceType.h
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

#ifndef ASB_UCI_TYPE_MDF_REFERENCETYPE_H
#define ASB_UCI_TYPE_MDF_REFERENCETYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/MDF_ReferenceType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ForeignKeyType;
class MDF_ID_Type;
class MDF_SubCategoryFileID_Type;

/** This type is used to reference an MDF and optionally an MDF subcategory file and/or specific items within the file or
  * MDF.
  */
class MDF_ReferenceType : public virtual uci::type::MDF_ReferenceType {
public:
  /** Indicates the index of a specific item within the referenced MDF or MDF subcategory file. [Occurrences: Minimum: 0;
    * Maximum: MAX_LENGTH]
    */
  using MDF_ItemIndex = asb_uci::base::BoundedList<uci::type::ForeignKeyType, uci::type::accessorType::foreignKeyType, asb_uci::type::ForeignKeyType>;

  /** The constructor */
  MDF_ReferenceType();

  /** The copy constructor
    *
    * @param rhs The MDF_ReferenceType to copy from
    */
  MDF_ReferenceType(const MDF_ReferenceType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The MDF_ReferenceType to move from
    */
  MDF_ReferenceType(MDF_ReferenceType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The MDF_ReferenceType to copy from
    * @return The MDF_ReferenceType that was assigned
    */
  MDF_ReferenceType& operator=(const MDF_ReferenceType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The MDF_ReferenceType to move from
    * @return The MDF_ReferenceType that was assigned
    */
  MDF_ReferenceType& operator=(MDF_ReferenceType&& rhs) = delete;

  /** The destructor */
  virtual ~MDF_ReferenceType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MDF_ReferenceType whose contents are to be used to set this
    *      uci::type::MDF_ReferenceType's contents.
    */
  void copy(const uci::type::MDF_ReferenceType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::MDF_ReferenceType whose contents are to be used to set this
    *      uci::type::MDF_ReferenceType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::MDF_ReferenceType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

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
  uci::type::MDF_ReferenceType& setMDF_ID(const uci::type::MDF_ID_Type& accessor) override;

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
  uci::type::MDF_ReferenceType& clearMDF_ID() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MDF_SubCategoryFileID_Type& getMDF_SubCategoryFileID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::MDF_SubCategoryFileID_Type& getMDF_SubCategoryFileID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MDF_SubCategoryFileID_Type& getMDF_SubCategoryFileID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MDF_ReferenceType& setMDF_SubCategoryFileID(const uci::type::MDF_SubCategoryFileID_Type& accessor) override;

  /** Returns whether this optional field MDF_SubCategoryFileIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasMDF_SubCategoryFileID() const noexcept override;

  /** Enables the optional field such that getMDF_SubCategoryFileID will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::MDF_SubCategoryFileID_Type& enableMDF_SubCategoryFileID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::MDF_ReferenceType& clearMDF_SubCategoryFileID() noexcept override;

  /** Returns the accessor to the MDF_ItemIndex field contained in this message fragment
    *
    * @return The const reference to the accessor to the MDF_ItemIndex field.
    */
  const uci::type::MDF_ReferenceType::MDF_ItemIndex& getMDF_ItemIndex() const override;

  /** Returns the accessor to the MDF_ItemIndex field contained in this message fragment
    *
    * @return The reference to the accessor to the MDF_ItemIndex field.
    */
  uci::type::MDF_ReferenceType::MDF_ItemIndex& getMDF_ItemIndex() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::MDF_ReferenceType& setMDF_ItemIndex(const uci::type::MDF_ReferenceType::MDF_ItemIndex& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<MDF_ReferenceType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::MDF_ReferenceType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::MDF_ReferenceType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<MDF_ID_Type> mDF_ID_Accessor;
  std::unique_ptr<MDF_SubCategoryFileID_Type> mDF_SubCategoryFileID_Accessor;
  std::unique_ptr<MDF_ItemIndex> mDF_ItemIndex_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_MDF_REFERENCETYPE_H
