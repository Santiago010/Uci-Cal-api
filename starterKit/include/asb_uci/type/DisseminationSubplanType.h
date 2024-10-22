/** @file DisseminationSubplanType.h
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

#ifndef ASB_UCI_TYPE_DISSEMINATIONSUBPLANTYPE_H
#define ASB_UCI_TYPE_DISSEMINATIONSUBPLANTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/PushContentsEnum.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/DisseminationSubplanType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class ArchiveRequestType;
class ProductDisseminationDestinationID_Type;
class SourceCommandEXT;

/** This type represents the information necessary to disseminate a product. */
class DisseminationSubplanType : public virtual uci::type::DisseminationSubplanType {
public:
  /** This element represents a destination to which product or products of this plan should be disseminated. When none of
    * these elements are sent it indicates that, by default, products should not be disseminated by the source system.
    * [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using DestinationID = asb_uci::base::BoundedList<uci::type::ProductDisseminationDestinationID_Type, uci::type::accessorType::productDisseminationDestinationID_Type, asb_uci::type::ProductDisseminationDestinationID_Type>;

  /** This element represents a point of abstract extension to create SourceCommands that can't be documented in the open,
    * unclassified UCI schema. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  using ExtensionCommand = asb_uci::base::BoundedList<uci::type::SourceCommandEXT, uci::type::accessorType::sourceCommandEXT, asb_uci::type::SourceCommandEXT>;

  /** The constructor */
  DisseminationSubplanType();

  /** The copy constructor
    *
    * @param rhs The DisseminationSubplanType to copy from
    */
  DisseminationSubplanType(const DisseminationSubplanType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The DisseminationSubplanType to move from
    */
  DisseminationSubplanType(DisseminationSubplanType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The DisseminationSubplanType to copy from
    * @return The DisseminationSubplanType that was assigned
    */
  DisseminationSubplanType& operator=(const DisseminationSubplanType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The DisseminationSubplanType to move from
    * @return The DisseminationSubplanType that was assigned
    */
  DisseminationSubplanType& operator=(DisseminationSubplanType&& rhs) = delete;

  /** The destructor */
  virtual ~DisseminationSubplanType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::DisseminationSubplanType whose contents are to be used to set this
    *      uci::type::DisseminationSubplanType's contents.
    */
  void copy(const uci::type::DisseminationSubplanType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::DisseminationSubplanType whose contents are to be used to set this
    *      uci::type::DisseminationSubplanType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::DisseminationSubplanType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's PushContents field
    *
    * @return The contents of the PushContents field
    */
  const uci::type::PushContentsEnum& getPushContents() const override;

  /** Returns the contents of the message's PushContents field
    *
    * @return The contents of the PushContents field
    */
  uci::type::PushContentsEnum& getPushContents() override;

  /** Sets the contents of the message's PushContents field
    *
    * @param accessor The accessor to use to set the PushContents field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::DisseminationSubplanType& setPushContents(const uci::type::PushContentsEnum& accessor) override;

  /** Sets the contents of the message's PushContents field
    *
    * @param value The new value to set the PushContents field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::DisseminationSubplanType& setPushContents(uci::type::PushContentsEnum::EnumerationItem value) override;

  /** Returns the accessor to the DestinationID field contained in this message fragment
    *
    * @return The const reference to the accessor to the DestinationID field.
    */
  const uci::type::DisseminationSubplanType::DestinationID& getDestinationID() const override;

  /** Returns the accessor to the DestinationID field contained in this message fragment
    *
    * @return The reference to the accessor to the DestinationID field.
    */
  uci::type::DisseminationSubplanType::DestinationID& getDestinationID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DisseminationSubplanType& setDestinationID(const uci::type::DisseminationSubplanType::DestinationID& accessor) override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ArchiveRequestType& getArchiveCommand_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ArchiveRequestType& getArchiveCommand() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ArchiveRequestType& getArchiveCommand() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DisseminationSubplanType& setArchiveCommand(const uci::type::ArchiveRequestType& accessor) override;

  /** Returns whether this optional field ArchiveCommandis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasArchiveCommand() const noexcept override;

  /** Enables the optional field such that getArchiveCommand will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ArchiveRequestType& enableArchiveCommand(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::DisseminationSubplanType& clearArchiveCommand() noexcept override;

  /** Returns the accessor to the ExtensionCommand field contained in this message fragment
    *
    * @return The const reference to the accessor to the ExtensionCommand field.
    */
  const uci::type::DisseminationSubplanType::ExtensionCommand& getExtensionCommand() const override;

  /** Returns the accessor to the ExtensionCommand field contained in this message fragment
    *
    * @return The reference to the accessor to the ExtensionCommand field.
    */
  uci::type::DisseminationSubplanType::ExtensionCommand& getExtensionCommand() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::DisseminationSubplanType& setExtensionCommand(const uci::type::DisseminationSubplanType::ExtensionCommand& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<DisseminationSubplanType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::DisseminationSubplanType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::DisseminationSubplanType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  std::unique_ptr<PushContentsEnum> pushContents_Accessor;
  std::unique_ptr<DestinationID> destinationID_Accessor;
  std::unique_ptr<ArchiveRequestType> archiveCommand_Accessor;
  std::unique_ptr<ExtensionCommand> extensionCommand_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_DISSEMINATIONSUBPLANTYPE_H
