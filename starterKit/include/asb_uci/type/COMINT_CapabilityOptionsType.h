/** @file COMINT_CapabilityOptionsType.h
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

#ifndef ASB_UCI_TYPE_COMINT_CAPABILITYOPTIONSTYPE_H
#define ASB_UCI_TYPE_COMINT_CAPABILITYOPTIONSTYPE_H

#include <memory>

#include <boost/optional/optional.hpp>
#include <boost/property_tree/ptree.hpp>

#include "../../../include/asb_uci/base/BoundedList.h"
#include "../../../include/asb_uci/type/MIME_Type.h"
#include "../../../include/asb_xs/type/simpleXmlSchemaPrimitives.h"
#include "../../../../cppInterface/2.3.2/include/uci/type/COMINT_CapabilityOptionsType.h"

/**  */
namespace asb_uci {

/** The namespace in which all generated data types are declared */
namespace type {

class CapabilityID_Type;
class ForeignKeyType;

/** See annotations in child elements and messages/elements that use this type for details. */
class COMINT_CapabilityOptionsType : public virtual uci::type::COMINT_CapabilityOptionsType {
public:
  /** This indicates what formats are used by the subsystem when outputting audio data. [Occurrences: Minimum: 0; Maximum:
    * MAX_LENGTH]
    */
  using AudioFormats = asb_uci::base::BoundedList<uci::type::MIME_Type, uci::type::accessorType::mIME_Type, asb_uci::type::MIME_Type>;

  /** This indicates what data compression types are used by the subsystem when outputting audio data. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  using CompressionType = asb_uci::base::BoundedList<uci::type::ForeignKeyType, uci::type::accessorType::foreignKeyType, asb_uci::type::ForeignKeyType>;

  /** The constructor */
  COMINT_CapabilityOptionsType();

  /** The copy constructor
    *
    * @param rhs The COMINT_CapabilityOptionsType to copy from
    */
  COMINT_CapabilityOptionsType(const COMINT_CapabilityOptionsType& rhs) = delete;

  /** The move constructor
    *
    * @param rhs The COMINT_CapabilityOptionsType to move from
    */
  COMINT_CapabilityOptionsType(COMINT_CapabilityOptionsType&& rhs) = delete;

  /** The assignment operator
    *
    * @param rhs The COMINT_CapabilityOptionsType to copy from
    * @return The COMINT_CapabilityOptionsType that was assigned
    */
  COMINT_CapabilityOptionsType& operator=(const COMINT_CapabilityOptionsType& rhs) = delete;

  /** The move assignment operator
    *
    * @param rhs The COMINT_CapabilityOptionsType to move from
    * @return The COMINT_CapabilityOptionsType that was assigned
    */
  COMINT_CapabilityOptionsType& operator=(COMINT_CapabilityOptionsType&& rhs) = delete;

  /** The destructor */
  virtual ~COMINT_CapabilityOptionsType();

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::COMINT_CapabilityOptionsType whose contents are to be used to set this
    *      uci::type::COMINT_CapabilityOptionsType's contents.
    */
  void copy(const uci::type::COMINT_CapabilityOptionsType& accessor) override;

  /** Performs a deep copy of the message data from the specified accessor into the object being operated on by copy(). Any
    * message data originally held by this object will be freed prior to the copy
    *
    * @param accessor The uci::type::COMINT_CapabilityOptionsType whose contents are to be used to set this
    *      uci::type::COMINT_CapabilityOptionsType's contents.
    * @param checkIfDerivation Check if accessor to copy is a derived type.
    */
  void copyImpl(const uci::type::COMINT_CapabilityOptionsType& accessor, bool checkIfDerivation);

  /** Resets the contents of this object returning these contents to their original state. */
  void reset() noexcept override;

  /** Returns the contents of the message's InterruptOtherActivities field
    *
    * @return The contents of the InterruptOtherActivities field
    */
  xs::Boolean getInterruptOtherActivities() const override;

  /** Sets the contents of the message's InterruptOtherActivities field
    *
    * @param value The new value to set the InterruptOtherActivities field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& setInterruptOtherActivities(xs::Boolean value) override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Int getNumberOfChannels() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& setNumberOfChannels(xs::Int value) override;

  /** Returns whether this optional field NumberOfChannelsis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasNumberOfChannels() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& clearNumberOfChannels() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getAGC_Supported() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& setAGC_Supported(xs::Boolean value) override;

  /** Returns whether this optional field AGC_Supportedis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasAGC_Supported() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& clearAGC_Supported() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getArchiveAvailable() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& setArchiveAvailable(xs::Boolean value) override;

  /** Returns whether this optional field ArchiveAvailableis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasArchiveAvailable() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& clearArchiveAvailable() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CapabilityID_Type& getCapabilityDependencyID_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::CapabilityID_Type& getCapabilityDependencyID() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CapabilityID_Type& getCapabilityDependencyID() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& setCapabilityDependencyID(const uci::type::CapabilityID_Type& accessor) override;

  /** Returns whether this optional field CapabilityDependencyIDis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasCapabilityDependencyID() const noexcept override;

  /** Enables the optional field such that getCapabilityDependencyID will return the optional field and not throw an
    * exception when invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::CapabilityID_Type& enableCapabilityDependencyID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& clearCapabilityDependencyID() noexcept override;

  /** Returns the value of the optional field accessed by this accesor
    *
    * @return The value of the optional field
    */
  xs::Boolean getScanSupport() const override;

  /** Sets the value of the optional field accessed by this accesor
    *
    * @param value The value to set the optional field to
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& setScanSupport(xs::Boolean value) override;

  /** Returns whether this optional field ScanSupportis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasScanSupport() const noexcept override;

  /** Clears the optional item marking it as not being set.
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& clearScanSupport() noexcept override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& getSupportedModes_() const;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  const uci::type::ForeignKeyType& getSupportedModes() const override;

  /** Returns the accessor that provides access to the contents of the optional field accessed by this accesor
    *
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& getSupportedModes() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& setSupportedModes(const uci::type::ForeignKeyType& accessor) override;

  /** Returns whether this optional field SupportedModesis available
    *
    * @return Whether the optional field is available (true) or not (false).
    */
  bool hasSupportedModes() const noexcept override;

  /** Enables the optional field such that getSupportedModes will return the optional field and not throw an exception when
    * invoked.
    *
    * @param type The value to set the optional field to
    * @return The accessor that provides access to the contents of the optional field accessed by this accesor
    */
  uci::type::ForeignKeyType& enableSupportedModes(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) override;

  /** Clears the value of the optional field accessed by this accesor
    *
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& clearSupportedModes() noexcept override;

  /** Returns the accessor to the AudioFormats field contained in this message fragment
    *
    * @return The const reference to the accessor to the AudioFormats field.
    */
  const uci::type::COMINT_CapabilityOptionsType::AudioFormats& getAudioFormats() const override;

  /** Returns the accessor to the AudioFormats field contained in this message fragment
    *
    * @return The reference to the accessor to the AudioFormats field.
    */
  uci::type::COMINT_CapabilityOptionsType::AudioFormats& getAudioFormats() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& setAudioFormats(const uci::type::COMINT_CapabilityOptionsType::AudioFormats& accessor) override;

  /** Returns the accessor to the CompressionType field contained in this message fragment
    *
    * @return The const reference to the accessor to the CompressionType field.
    */
  const uci::type::COMINT_CapabilityOptionsType::CompressionType& getCompressionType() const override;

  /** Returns the accessor to the CompressionType field contained in this message fragment
    *
    * @return The reference to the accessor to the CompressionType field.
    */
  uci::type::COMINT_CapabilityOptionsType::CompressionType& getCompressionType() override;

  /** Set the contents of the message fragment that this accesssor provides access to to the contents the specified
    * accessor provides access to. A deep copy will be used by this method in setting the contents
    *
    * @param accessor The accessor to use to set the contents of the message fragment that this accessor provides access
    *      to.
    * @return A reference to the object on which this method was called.
    */
  uci::type::COMINT_CapabilityOptionsType& setCompressionType(const uci::type::COMINT_CapabilityOptionsType::CompressionType& accessor) override;

  /** 
    *
    * @param type .
    * @return .
    */
  static std::unique_ptr<COMINT_CapabilityOptionsType> create(uci::base::accessorType::AccessorType type);

  /** 
    *
    * @param propTree .
    * @param accessor .
    * @param nodeName .
    * @param nsPrefix .
    * @param topLevel .
    */
  static void deserialize(const boost::property_tree::ptree& propTree, uci::type::COMINT_CapabilityOptionsType& accessor, std::string& nodeName, std::string& nsPrefix, bool topLevel = false);

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
  static std::string serialize(const uci::type::COMINT_CapabilityOptionsType& accessor, boost::property_tree::ptree& propTree, const std::string& nodeName, bool createNode = true, bool addTypeAttribute = false, bool checkIfDerivation = true, bool topLevel = false);

private:
  asb_xs::Boolean interruptOtherActivities_Accessor{false};
  boost::optional<asb_xs::Int> numberOfChannels_Accessor;
  boost::optional<asb_xs::Boolean> aGC_Supported_Accessor;
  boost::optional<asb_xs::Boolean> archiveAvailable_Accessor;
  std::unique_ptr<CapabilityID_Type> capabilityDependencyID_Accessor;
  boost::optional<asb_xs::Boolean> scanSupport_Accessor;
  std::unique_ptr<ForeignKeyType> supportedModes_Accessor;
  std::unique_ptr<AudioFormats> audioFormats_Accessor;
  std::unique_ptr<CompressionType> compressionType_Accessor;

};

} // namespace type

} // namespace asb_uci

#endif // ASB_UCI_TYPE_COMINT_CAPABILITYOPTIONSTYPE_H
