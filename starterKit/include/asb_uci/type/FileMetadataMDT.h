/** @file FileMetadataMDT.h
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

#ifndef ASB_UCI_TYPE_FILEMETADATAMDT_H
#define ASB_UCI_TYPE_FILEMETADATAMDT_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/CreationSourceEnum.h"
#include "../../../include/asb_uci/type/DataRecordBaseType.h"
#include "../../../include/asb_uci/type/DateTimeType.h"
#include "../../../include/asb_uci/type/FileNameType.h"
#include "../../../include/asb_uci/type/SHA_2_256_HashType.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/FileMetadataMDT.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class FileMetadataID_Type;
class FileOutputType;
class SecurityInformationType;
class SourceFiltersType;

/** See annotations in child elements and messages/elements that use this type for details. */
class FileMetadataMDT : public virtual uci::type::FileMetadataMDT, public virtual DataRecordBaseType {
public:
  /** Indicates the unique file metatdata ID of a file that is being associated with this file. The associated files may
    * have been created together or are used together. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using AssociatedID = asb_uci::base::BoundedList<uci::type::FileMetadataID_Type, uci::type::accessorType::fileMetadataID_Type, asb_uci::type::FileMetadataID_Type>;

  /** The constructor */
  FileMetadataMDT();

  /** The copy constructor
    *
    * @param rhs The FileMetadataMDT to copy from
    */
  FileMetadataMDT(const FileMetadataMDT& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The FileMetadataMDT to move from
    */
  FileMetadataMDT(FileMetadataMDT&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The FileMetadataMDT to copy from
    * @return The FileMetadataMDT that was assigned
    */
  FileMetadataMDT& operator=(const FileMetadataMDT& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The FileMetadataMDT to move from
    * @return The FileMetadataMDT that was assigned
    */
  FileMetadataMDT& operator=(FileMetadataMDT&& rhs) = delete;

  /** The destructor */
  ~FileMetadataMDT() override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::FileMetadataMDT whose contents are to be used to set this uci::type::FileMetadataMDT's
    *      contents.
    */
  void copy(const uci::type::FileMetadataMDT& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::FileMetadataMDT whose contents are to be used to set this uci::type::FileMetadataMDT's
    *      contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::FileMetadataMDT& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the accessor to the FileMetadataID field contained in this message fragment
    *
    * @return The const reference to the accessor to the FileMetadataID field.
    */
  const uci::type::FileMetadataID_Type& getFileMetadataID() const override;

  /** Returns the accessor to the FileMetadataID field contained in this message fragment
    *
    * @return The reference to the accessor to the FileMetadataID field.
    */
  uci::type::FileMetadataID_Type& getFileMetadataID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setFileMetadataID(const uci::type::FileMetadataID_Type& accessor) override;

  /** Returns the accessor to the FileDescription field contained in this message fragment
    *
    * @return The const reference to the accessor to the FileDescription field.
    */
  const uci::type::FileOutputType& getFileDescription() const override;

  /** Returns the accessor to the FileDescription field contained in this message fragment
    *
    * @return The reference to the accessor to the FileDescription field.
    */
  uci::type::FileOutputType& getFileDescription() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setFileDescription(const uci::type::FileOutputType& accessor) override;

  /** Returns the contents of the message's FileName field
    *
    * @return The contents of the FileName field
    */
  const uci::type::FileNameType& getFileName() const noexcept override;

  /** Returns the contents of the message's FileName field
    *
    * @return The contents of the FileName field
    */
  uci::type::FileNameType& getFileName() noexcept override;

  /** Sets the contents of the message's FileName field
    *
    * @param value The new value to set the FileName field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setFileName(const uci::type::FileNameType& value) override;

  /** Sets the contents of the message's FileName field
    *
    * @param value The new value to set the FileName field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setFileName(const std::string& value) override;

  /** Sets the contents of the message's FileName field
    *
    * @param value The new value to set the FileName field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setFileName(const char* value) override;

  /** Returns the accessor to the FileSource field contained in this message fragment
    *
    * @return The const reference to the accessor to the FileSource field.
    */
  const uci::type::SourceFiltersType& getFileSource() const override;

  /** Returns the accessor to the FileSource field contained in this message fragment
    *
    * @return The reference to the accessor to the FileSource field.
    */
  uci::type::SourceFiltersType& getFileSource() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setFileSource(const uci::type::SourceFiltersType& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SourceFiltersType& getFileConsumer_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SourceFiltersType& getFileConsumer() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SourceFiltersType& getFileConsumer() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setFileConsumer(const uci::type::SourceFiltersType& accessor) override;

  /** Returns whether this optional field FileConsumeris available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasFileConsumer() const noexcept override;

  /** Enables the optional field such that getFileConsumer will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SourceFiltersType& enableFileConsumer(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& clearFileConsumer() noexcept override;

  /** Returns the contents of the message's CreationSource field
    *
    * @return The contents of the CreationSource field
    */
  const uci::type::CreationSourceEnum& getCreationSource() const override;

  /** Returns the contents of the message's CreationSource field
    *
    * @return The contents of the CreationSource field
    */
  uci::type::CreationSourceEnum& getCreationSource() override;

  /** Sets the contents of the message's CreationSource field
    *
    * @param accessor The accessor to use to set the CreationSource field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setCreationSource(const uci::type::CreationSourceEnum& accessor) override;

  /** Sets the contents of the message's CreationSource field
    *
    * @param value The new value to set the CreationSource field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setCreationSource(uci::type::CreationSourceEnum::EnumerationItem value) override;

  /** Returns the contents of the message's UntrustedModification field
    *
    * @return The contents of the UntrustedModification field
    */
  xs::Boolean getUntrustedModification() const override;

  /** Sets the contents of the message's UntrustedModification field
    *
    * @param value The new value to set the UntrustedModification field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setUntrustedModification(xs::Boolean value) override;

  /** Returns the contents of the message's Timestamp field
    *
    * @return The contents of the Timestamp field
    */
  uci::type::DateTimeTypeValue getTimestamp() const override;

  /** Sets the contents of the message's Timestamp field
    *
    * @param value The new value to set the Timestamp field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setTimestamp(uci::type::DateTimeTypeValue value) override;

  /** Returns the accessor to the SecurityInformation field contained in this message fragment
    *
    * @return The const reference to the accessor to the SecurityInformation field.
    */
  const uci::type::SecurityInformationType& getSecurityInformation() const override;

  /** Returns the accessor to the SecurityInformation field contained in this message fragment
    *
    * @return The reference to the accessor to the SecurityInformation field.
    */
  uci::type::SecurityInformationType& getSecurityInformation() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setSecurityInformation(const uci::type::SecurityInformationType& accessor) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  uci::type::SHA_2_256_HashType& getSHA_2_Hash_() const;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::SHA_2_256_HashType& getSHA_2_Hash() const override;

  /** Returns the value of the optional field. Throws an exception is field is not set.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SHA_2_256_HashType& getSHA_2_Hash() override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setSHA_2_Hash(const uci::type::SHA_2_256_HashType& value) override;

  /** Returns whether this optional field SHA_2_Hashis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSHA_2_Hash() const noexcept override;

  /** Enables the optional field such that getSHA_2_Hash will return the optional field and not throw an exception when
    * invoked.
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::SHA_2_256_HashType& enableSHA_2_Hash() override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& clearSHA_2_Hash() noexcept override;

  /** Returns the accessor to the AssociatedID field contained in this message fragment
    *
    * @return The const reference to the accessor to the AssociatedID field.
    */
  const uci::type::FileMetadataMDT::AssociatedID& getAssociatedID() const override;

  /** Returns the accessor to the AssociatedID field contained in this message fragment
    *
    * @return The reference to the accessor to the AssociatedID field.
    */
  uci::type::FileMetadataMDT::AssociatedID& getAssociatedID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::FileMetadataMDT& setAssociatedID(const uci::type::FileMetadataMDT::AssociatedID& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<FileMetadataMDT> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::FileMetadataMDT& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::FileMetadataMDT& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<FileMetadataID_Type> fileMetadataID_Accessor;
  std::unique_ptr<FileOutputType> fileDescription_Accessor;
  std::unique_ptr<FileNameType> fileName_Accessor;
  std::unique_ptr<SourceFiltersType> fileSource_Accessor;
  std::unique_ptr<SourceFiltersType> fileConsumer_Accessor;
  std::unique_ptr<CreationSourceEnum> creationSource_Accessor;
  asb_xs::Boolean untrustedModification_Accessor{false};
  DateTimeTypeValue timestamp_Accessor{0};
  std::unique_ptr<SecurityInformationType> securityInformation_Accessor;
  std::unique_ptr<SHA_2_256_HashType> sHA_2_Hash_Accessor;
  std::unique_ptr<AssociatedID> associatedID_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_FILEMETADATAMDT_H
